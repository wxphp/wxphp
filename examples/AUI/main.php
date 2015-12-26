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

require_once __DIR__ . '/demo.php';

$app = new myApp();
wxApp::SetInstance($app);
wxEntry();

class controllerDialog extends wxDialog
{
    protected $managedWindow;

    public function Show()
    {
        // Set the tickboxes as per the GUI settings
        $this->setManagerFlags();
        $this->resetEnablements();

        // Move the window out of the way of the main one
        $this->SetPosition(new wxPoint(200, 200));

        return parent::Show();
    }

    public function SetManagedWindow(auiDemoDialog $managedWindow)
    {
        $this->managedWindow = $managedWindow;

        $this->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, array($this, "onTickboxChangeEvent"));
    }

    public function onTickboxChangeEvent(wxEvent $event)
    {
        $manager = $this->getManagedWindow()->getAuiManager();
        $manager->SetFlags($this->getManagerFlags());
        $this->resetEnablements();
        $manager->Update();
    }

    /**
     * An interation method to get tickbox settings
     *
     * @return function
     */
    protected function getManagerFlags()
    {
        return $this->flagIterator(function(\wxCheckBox $ctrl, $flag)
            {
                return $ctrl->GetValue() ? $flag : 0;
            }
        );
    }

    /**
     * An interation method to set tickbox settings in the control panel
     *
     * @return function
     */
    protected function setManagerFlags()
    {
        $managedWindow = $this->getManagedWindow();

        return $this->flagIterator(function(\wxCheckBox $ctrl, $flag) use ($managedWindow)
            {
                // Get the flags for the manager
                $flags = $managedWindow->getAuiManager()->GetFlags();

                // Reflect the bitwise flag in the tickbox setting
                $ctrl->SetValue($flags & $flag);
            }
        );
    }

    /**
     * General iteration function for getting and setting manager flags
     *
     * The flags var is only of use for getter callers (it is not mandatory to use it)
     *
     * @param function $function
     * @return integer
     */
    protected function flagIterator($function)
    {
        $flags = 0;

        foreach ($this->getFlagNames() as $controlName => $flag)
        {
            $window = $this->FindWindow($controlName);
            if ($window)
            {
                $ctrl = wxDynamicCast($window, "wxCheckBox");
                $flags += $function($ctrl, $flag);
            }
            else
            {
                trigger_error("Control not found", E_USER_NOTICE);
            }
        }

        return $flags;
    }

    /**
     * Enables/disables tick boxes depending on other values
     *
     * @todo Finish these off, the one below is one of many
     * @todo Untick items that are disabled
     */
    protected function resetEnablements()
    {
        $flags = $this->getManagedWindow()->getAuiManager()->GetFlags();
        $allowDrag = $flags & wxAUI_MGR_ALLOW_FLOATING;

        // Allow dragging affects most flags
        $this->setTickBoxEnabled('tickTransDrag', $allowDrag);
    }

    /**
     * Enables or disables the tick box controls
     *
     * @param string $controlName
     * @param boolean $enabled
     */
    protected function setTickBoxEnabled($controlName, $enabled)
    {
        // Find the control
        $window = $this->FindWindow($controlName);
        if ($window)
        {
            $ctrl = wxDynamicCast($window, "wxCheckBox");
            /* @var $ctrl \wxCheckBox */
            $enabled ? $ctrl->Enable() : $ctrl->Disable();
        }
    }

    protected function getFlagNames()
    {
        return [
            'tickFloating' => wxAUI_MGR_ALLOW_FLOATING,
            'tickActive' => wxAUI_MGR_ALLOW_ACTIVE_PANE,
            'tickTransDrag' => wxAUI_MGR_TRANSPARENT_DRAG,
            'tickTransHint' => wxAUI_MGR_TRANSPARENT_HINT,
            'tickVenetianHint' => wxAUI_MGR_VENETIAN_BLINDS_HINT,
            'tickRectangleHint' => wxAUI_MGR_RECTANGLE_HINT,
            'tickHintFade' => wxAUI_MGR_HINT_FADE,
            'tickNoVenetianHintFade' => wxAUI_MGR_NO_VENETIAN_BLINDS_FADE,
        ];
    }

    /**
     * Gets the currently notified managed window
     *
     * @return \auiDemoDialog
     */
    public function getManagedWindow()
    {
        return $this->managedWindow;
    }
}

class myApp extends wxApp
{
    public function OnInit()
    {
        $resource = new wxXmlResource();
        $resource->InitAllHandlers();
        $resource->Load(__DIR__ . '/forms.xrc.xml');

        $frame = new auiDemoDialog();
        $frame->Show();
        $frame->Center();

        $controllerFrame = new controllerDialog();
        $resource->LoadDialog($controllerFrame, NULL, 'frmController');
        $controllerFrame->SetManagedWindow($frame);
        $controllerFrame->Show();
    }
}
