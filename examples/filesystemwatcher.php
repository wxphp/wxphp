<?php
/**
 * @author https://github.com/halfer
 *
 * @license
 * This file is part of wxPHP, check the LICENSE file for information.
 *
 * @description This is a simple demonstration of file system watcher events.
 *
 * Run this using:
 *
 *     /usr/bin/php -d extension=wxwidgets.so filesystemwatcher.php
 *
 * To demonstrate the watcher, a folder called "watch" will be created. Simply create a terminal
 * window and cd to that folder, then touch and delete files, and they will be reported in
 * the logging window.
 *
 * Tested on PHP 5.5.9-1ubuntu4.14.
 */

$app = new myApp();
wxApp::SetInstance($app);
wxEntry();

class MainFrame extends wxFrame
{
    // This is the folder to monitor. To successfully get information
    // on FS events that occur inside a folder, such as creates and
    // deletes, the watched folder must end with a trailing slash.
    const RELATIVE_PATH = './watch/';

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

        // Use a timer to start the file watcher after the event
        // loop starts. This seems to be necessary to avoid the
        // fatal error "File system watcher needs an event loop".
        $this->timer = new wxTimer($this);
        $this->Connect(wxEVT_TIMER, array($this, "onTimer"));
        $this->timer->Start(100);
    }

    protected function createTextBox()
    {
        $this->textCtrl = new wxTextCtrl(
            $this,
            wxID_ANY,
            "",
            wxDefaultPosition,
            new wxSize(600, 200),
            wxTE_MULTILINE
        );
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
                wxMessageBox(
                    "Unable to create folder to watch:" . $path
                );
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
     * This is necessary since the FSW won't initialise until the
     * wx event loop is started, but normally once the event loop
     * is started we don't get back any control to set up new events.
     * Using a quickly expiring timer, which we stop immediately,
     * resolves this issue.
     *
     * @param wxTimerEvent $event
     */
    public function onTimer(wxTimerEvent $event)
    {
        $this->timer->Stop();

        $this->logger(
            "Using timer to create watcher inside wx event loop"
        );

        $this->createWatcher();
    }

    /**
     * Creates a FS watcher
     *
     * The add() method is sufficient to watch file operations
     * directly inside that folder, but for that the watched path
     * must have a trailing slash. addTree() is suitable if all
     * operations within the folder recursively should be watched.
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

        $this->logger(
            "File event: $description, "
            . "path: $filename, "
            . "new path: $newFilename"
        );
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
