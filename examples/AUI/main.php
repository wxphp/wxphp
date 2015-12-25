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
    public function Show()
    {
        $this->SetPosition(new wxPoint(200, 200));

        return parent::Show();
    }
}

class myApp extends wxApp
{
    public function OnInit()
    {
        $resource = new wxXmlResource();
        $resource->InitAllHandlers();
        $resource->Load(__DIR__ . '/forms.xrc.xml');

        $controllerFrame = new controllerDialog();
        $resource->LoadDialog($controllerFrame, NULL, 'frmController');
        $controllerFrame->Show();

        $frame = new auiDemoDialog();
        $frame->Show();
        $frame->Center();
    }
}
