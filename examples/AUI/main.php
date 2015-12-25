<?php

/**
 * @author https://github.com/halfer
 *
 * @license This file is part of wxPHP, check the LICENSE file for information.
 *
 * @description This is a simple demonstration of the AUI panel system.
 *
 * Run this using:
 *
 *     /usr/bin/php -d extension=wxwidgets.so AUI/main.php
 */

$app = new myApp();
wxApp::SetInstance($app);
wxEntry();

class auiDemoDialog extends wxFrame
{
    protected $manager;

    public function __construct()
    {
        parent::__construct(null, wxID_ANY, "AUI demo", wxDefaultPosition, new wxSize(600, 500));

        $this->manager = new wxAuiManager($this);

        // Try creating some text controls, and add them as AUI panes
        for ($i = 0; $i <= 3; $i++)
        {
            $textCtrl = new wxTextCtrl($this, -1, "Pane $i - sample text");
            $this->manager->AddPane($textCtrl);
        }

        // This inits the manager system
        $this->manager->Update();

        $this->Connect(wxEVT_CLOSE_WINDOW, array($this, "onWindowClose"));

        $this->Layout();
    }

    /**
     * Shuts down the AUI manager before the frame throws away references
     * 
     * This avoids a crash when PHP disposes of the AUI system from memory
     * 
     * @param wxCloseEvent $event
     */
    public function onWindowClose(wxCloseEvent $event)
    {
        $this->manager->UnInit();
        exit();
    }
}

class myApp extends wxApp
{
    public function OnInit()
    {
        $frame = new auiDemoDialog();
        $frame->Show();
        $frame->Center();
    }
}
