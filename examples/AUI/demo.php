<?php

/* 
 * This file contains the main demo window class
 */

namespace WxPhpExamples\AUI;

use wxFrame, wxSize;
use wxAuiManager, wxAuiPaneInfo;
use wxCloseEvent;
use wxTextCtrl;

class auiDemoDialog extends wxFrame
{
    protected $manager;
    protected $controls = [];

    public function __construct()
    {
        parent::__construct(null, wxID_ANY, "AUI demo", wxDefaultPosition, new wxSize(600, 500));

        $this->manager = new wxAuiManager($this, wxAUI_MGR_DEFAULT);

        // Let's create some text controls, and add them as AUI panes
        for ($i = 0; $i <= 7; $i++)
        {
            $this->controls[$i] = new wxTextCtrl($this, -1, "Pane $i");
            $paneInfo = new wxAuiPaneInfo();
            $this->setPaneSettings($paneInfo, $i);
            $this->manager->AddPane($this->controls[$i], $paneInfo);
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
     * Determine individual panel settings
     *
     * @param wxAuiPaneInfo $info
     * @param integer $index
     */
    protected function setPaneSettings(wxAuiPaneInfo $info, $index)
    {
        // I couldn't get $info->Direction(wxRIGHT) to work, so am using the methods instead
        switch ($index % 4)
        {
            case 0:
                $info->Left();
                $info->Gripper();
                $info->GripperTop();
                $info->CaptionVisible(false);
                break;
            case 1:
                $info->Top();
                $info->PinButton();
                break;
            case 2:
                $info->Right();
                $info->MaximizeButton();
                break;
            default:
                $info->Bottom();
        }

        // Allow panes to be reopened again
        $info->DestroyOnClose(false);
        $info->Name('auiPane' . $index);

        $info->Caption("Caption $index");
    }

    public function getPaneSettings($name)
    {
        return $this->getAuiManager()->GetPane($name);
    }

    /**
     * Returns the window item from the managed pane
     *
     * @param integer $index
     * @return \wxWindow
     */
    public function getWindowByIndex($index)
    {
        return $this->controls[$index];
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

    /**
     * Gets the currently set AUI manager instance
     *
     * @return \wxAuiManager
     */
    public function getAuiManager()
    {
        return $this->manager;
    }
}
