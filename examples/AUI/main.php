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
 * 
 * @todo Can we add some wxPane windows?
 * @todo Is there any control over what drags look like?
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

        $this->manager = new wxAuiManager($this, wxAUI_MGR_DEFAULT + wxAUI_MGR_LIVE_RESIZE);

        // Let's create some text controls, and add them as AUI panes
        for ($i = 0; $i <= 7; $i++)
        {
            $textCtrl = new wxTextCtrl($this, -1, "Pane $i");
            $this->manager->AddPane($textCtrl, $this->getPanePosition($i), "Caption $i");
        }

        // Add a control in the centre
        $centreControl = new wxTextCtrl($this, -1, "Centre control");
        $this->manager->AddPane($centreControl, wxCENTRE);

        // This inits the manager system
        $this->manager->Update();

        $this->Connect(wxEVT_CLOSE_WINDOW, array($this, "onWindowClose"));

        $this->Layout();
    }

    /**
     * Determine which position to add a new panel
     *
     * @param integer $index
     * @return integer
     */
    protected function getPanePosition($index)
    {
        $pos = wxBOTTOM;

        switch ($index % 4)
        {
            case 0:
                $pos = wxLEFT;
                break;
            case 1:
                $pos = wxTOP;
                break;
            case 2:
                $pos = wxRIGHT;
                break;
        }

        return $pos;
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
