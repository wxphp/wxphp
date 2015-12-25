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
 * @todo Add a controller window
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
        $manager = $this->managedWindow->getAuiManager();
        /*
         * wxAUI_MGR_TRANSPARENT_DRAG
         * wxAUI_MGR_TRANSPARENT_HINT
         */
        $manager->SetFlags($this->getManagerFlags());
        $manager->Update();
    }

    protected function getManagerFlags()
    {
        $flags = 0;

        $controls = [
            'tickFloating' => wxAUI_MGR_ALLOW_FLOATING,
            'tickActive' => wxAUI_MGR_ALLOW_ACTIVE_PANE,
        ];
        foreach ($controls as $controlName => $flag)
        {
            $ctrl = wxDynamicCast($this->FindWindow($controlName), "wxCheckBox");
            /* @var $ctrl \wxCheckBox */
            if ($ctrl->GetValue())
            {
                $flags += $flag;
            }
        }

        return $flags;
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
