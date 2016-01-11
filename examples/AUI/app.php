<?php

namespace WxPhpExamples\AUI;

use wxXmlResource;

class myApp extends \wxApp
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
