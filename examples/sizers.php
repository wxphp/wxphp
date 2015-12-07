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
 */

$app = new myApp();
wxApp::SetInstance($app);
wxEntry();

/**
 * @todo Make the controller window a panel rather than a frame?
 */
class ControlFrame extends wxFrame
{
    public function __construct($parent = null)
    {
		parent::__construct(
            $parent,
            wxID_TOP,
            "Controller",
            wxDefaultPosition,
            new wxSize(300, 200)
        );

        $choices = array("Vertical wxBoxSizer", "Horizontal wxBoxSizer");
        $comboBox = new wxComboBox($this, wxID_ANY, "", wxDefaultPosition, new wxSize(250, 20), $choices);

        $sizer = new wxBoxSizer(wxVERTICAL);
        $sizer->Add($comboBox, 0, wxALL, 8);
        // Attach to the closeup event, rather than wxEVT_COMBOBOX_DROPDOWN
        $this->Connect(wxEVT_COMBOBOX_CLOSEUP, [$this, "comboBoxChangeEvent"]);

        $this->SetSizer($sizer);
    }

    public function comboBoxChangeEvent(wxCommandEvent $event)
    {
        $name = get_class($event);
        echo "Hello $name\n";
    }
}

/**
 * @todo Can a border be added to the sizer?
 */
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

        // Set up demo
        $this->demo_vertical_boxsizer();
        $this->destroyCurrentSizer();
        $this->demo_horizontal_boxsizer();

        // Inform the window of the new sizer in operation
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

    protected function destroyCurrentSizer()
    {
        $sizer = $this->getSizerDevice();
        if (!$sizer)
        {
            return;
        }

        $count = $sizer->GetItemCount();
        for($i = 0; $i < $count; $i++)
        {
            // Zero is the first item
            $child = $sizer->GetItem(0);
            $win = $child->GetWindow();
            $win->Destroy();
        }

        // Destroy sizer as well
        $this->SetSizer(null);
        $this->sizer = null;
    }

    protected function demo_vertical_boxsizer()
    {
        $this->sizer = new wxBoxSizer(wxVERTICAL);

        $this->createBox("One", new wxSize(300, 30));
        $this->createBox("Two", new wxSize(200, 50));
        $this->createBox("Three", new wxSize(100, 120));
    }

    protected function demo_horizontal_boxsizer()
    {
        $this->sizer = new wxBoxSizer(wxHORIZONTAL);

        $this->createBox("One", new wxSize(100, 30));
        $this->createBox("Two", new wxSize(80, 60));
        $this->createBox("Three", new wxSize(80, 150));
    }
}

class myApp extends wxApp
{
    public function OnInit()
    {
        $main = new MainFrame();
        $main->Show();

        $controller = new ControlFrame();
        $controller->Show();

        return true;
    }

    public function OnExit()
    {
        return 0;
    }
}
