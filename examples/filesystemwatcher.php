<?php

/**
 * @author https://github.com/halfer
 * 
 * @license 
 * This file is part of wxPHP, check the LICENSE file for information.
 * 
 * @description This is a simple demonstration of file system watcher events.
 * 
 * Tested on PHP 5.5.9-1ubuntu4.14.
 */

$app = new myApp();
wxApp::SetInstance($app);
wxEntry();

class MainFrame extends wxFrame
{
    // Folder to monitor
    const RELATIVE_PATH = './watch';

    protected $watcher;
    protected $timer;
    protected $textCtrl;

    function __construct($parent = null)
    {
        parent::__construct($parent, wxID_TOP, "File system watcher");

        // Create a text box for logging progress
        $this->createTextBox();

        // Create the folder if it does not exist
        $this->checkFolderExists();

        // Use a timer to start the file watcher when the event loop starts
        $this->timer = new wxTimer($this);
        $this->Connect(wxEVT_TIMER, array($this, "onTimer"));
        $this->timer->Start(100);
    }

    protected function createTextBox()
    {
        $this->textCtrl = new wxTextCtrl($this, wxID_ANY, "", wxDefaultPosition, new wxSize(600, 200), wxTE_MULTILINE );
    }

    protected function logger($message)
    {
        $this->textCtrl->appendText($message . "\n");
    }

    protected function getWatchFolder()
    {
        return __DIR__ . '/' . self::RELATIVE_PATH;
    }

    protected function checkFolderExists()
    {
        $path = $this->getWatchFolder();
        if (!is_dir($path))
        {
            $ok = mkdir($path);
            if (!$ok)
            {
                wxMessageBox("Unable to create folder to watch:" . $path);
            }
        }

        if (is_dir($path))
        {
            $this->logger("Created watch folder OK");
        }
    }

    /**
     * This is called when the timer is triggered
     * 
     * This is necessary since the FSW won't initialise until the wx event loop is started,
     * but normally once the event loop is started we don't get back any control to set up
     * new events. Using a quickly expiring timer, which we stop immediately, resolves this
     * issue.
     *
     * @param wxTimerEvent $event
     */
    public function onTimer(wxTimerEvent $event)
    {
        $this->timer->Stop();
        $this->logger("Using timer to create watcher inside wx event loop");
        $this->createWatcher();
    }

    /**
     * Creates a FS watcher
     *
     * FIXME presently I am trying either add() and addTree(), but can't seem to get information
     * on a file that is added or deleted to a folder. add() responds to the events but I
     * can't see a way to get that information (without scanning for it manually, which seems
     * to defeat a major point of the watcher).
     * 
     * TODO try adding a trailing slash to the directory?
     * 
     * Here are the wxFSWFlags we can filter by:
     * 
     * wxFSW_EVENT_CREATE
     * wxFSW_EVENT_DELETE
     * wxFSW_EVENT_RENAME
     * wxFSW_EVENT_MODIFY
     * wxFSW_EVENT_ACCESS
     * wxFSW_EVENT_ATTRIB
     * wxFSW_EVENT_UNMOUNT
     * wxFSW_EVENT_WARNING
     * wxFSW_EVENT_ERROR
     * wxFSW_EVENT_ALL
     */
    public function createWatcher()
    {
        $this->watcher = new wxFileSystemWatcher();
        $directory = new wxFilename($this->getWatchFolder());
        $ok = $this->watcher->add($directory, wxFSW_EVENT_ALL);
        $this->logger($ok ? 'Added watcher OK' : 'Failed to add');
        $this->watcher->SetOwner($this);

        // This is the event code to attach to
        $this->Connect(wxEVT_FSWATCHER, [$this, "onFileEvent"]);
    }

    public function onFileEvent(wxFileSystemWatcherEvent $event)
    {
        /* @var $file wxFileName */
        $filename = $event->GetPath()->getFullName();
        $newFilename = $event->GetNewPath()->getFullName();
        $description = $event->ToString();
        $this->logger("File event: $description, path: $filename or $newFilename");
    }
}

class myApp extends wxApp
{
	public function OnInit()
	{
		// Create a window (works fine)
        $main = new MainFrame();
        $main->Show();

		return true;
    }

	public function OnExit()
	{
		return 0;
	}
}
