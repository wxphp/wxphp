<?php

/* 
 * @author https://github.com/halfer
 * 
 * @license 
 * This file is part of wxPHP, check the LICENSE file for information.
 * 
 * @description This is a simple demonstration of sizer devices.
 * 
 * Run this using:
 *
 *     /usr/bin/php -d extension=wxwidgets.so sizers.php
 *
 * @todo Need a description here
 * @todo Can a border be added to the sizer?
 * @todo Add a horizontal demo
 */

$app = new myApp();
wxApp::SetInstance($app);
wxEntry();

class MainFrame extends wxFrame
{
    protected $sizer;

    public function __construct($parent = null)
    {
		parent::__construct(
            $parent,
            wxID_TOP,
            "Vertical wxBoxSizer demo",
            wxDefaultPosition,
            new wxSize(400, 300)
        );

        $this->sizer = new wxBoxSizer(wxVERTICAL);

        $this->createBox("One", new wxSize(300, 30));
        $this->createBox("Two", new wxSize(200, 50));
        $this->createBox("Three", new wxSize(100, 120));

        $this->SetSizer($this->sizer);
    }

    protected function createBox($text, wxSize $size)
    {
        $ctrl = new wxTextCtrl(
            $this,
            wxID_ANY,
            $text,
            wxDefaultPosition,
            $size,
            wxTE_READONLY
        );

        // @todo Document the params here - can't find much info
        $this->getSizerDevice()->Add($ctrl, 0, wxALL, 8);

        return $ctrl;
    }

    protected function getSizerDevice()
    {
        return $this->sizer;
    }
}

class myApp extends wxApp
{
    public function OnInit()
    {
        $main = new MainFrame();
        $main->Show();

        return true;
    }

    public function OnExit()
    {
        return 0;
    }
}
