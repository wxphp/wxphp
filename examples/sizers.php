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
 * @todo Add a widget to reset the spacing in the current sizer?
 * @todo Add a widget to specify which sides spaces are added on?
 * @todo Can we have a help box in the controller window, with helpful info?
 */
class ControlFrame extends wxFrame
{
    protected $handler;
    protected $choiceCtrl;

    public function __construct(array $demoNames, $parent = null)
    {
        // The "dialog style" means that the window deliberately cannot be resized
        parent::__construct(
            $parent,
            wxID_TOP,
            "Sizer controller",
            wxDefaultPosition,
            new wxSize(300, 200),
            wxDEFAULT_DIALOG_STYLE
        );
        $this->SetPosition(new wxPoint(100, 100));

        $this->choiceCtrl = new wxChoice($this, wxID_ANY, wxDefaultPosition, new wxSize(250, 29), $demoNames);

        $sizer = new wxBoxSizer(wxVERTICAL);
        $sizer->Add($this->choiceCtrl, 0, wxALL, 8);
        $this->Connect(wxEVT_CHOICE, [$this, "controlChangeEvent"]);

        $this->SetSizer($sizer);
    }

    /**
     * Receive a WX event from the choice control
     *
     * @param wxCommandEvent $event
     */
    public function controlChangeEvent(wxCommandEvent $event)
    {
        $this->activateChoice($event->GetInt());
    }

    /**
     * Set the menu choice and call the attached handler
     *
     * @param integer $index
     */
    public function setChoice($index)
    {
        $this->choiceCtrl->SetSelection($index);
        $this->activateChoice($index);
    }

    /**
     * Just calls the attached handler
     *
     * @param integer $index
     */
    protected function activateChoice($index)
    {
        $func = $this->handler;
        $func($index);
    }

    public function setChangeHandler($handler)
    {
        $this->handler = $handler;
    }
}

class MainFrame extends wxFrame
{
    protected $sizer;

    public function __construct($parent = null)
    {
        parent::__construct(
            $parent,
            wxID_TOP,
            "Sizer demo",
            wxDefaultPosition,
            new wxSize(400, 300)
        );
        $this->SetPosition(new wxPoint(450, 100));
    }

    protected function createBox($text, wxSize $size, wxSizer $sizer = null)
    {
        $ctrl = new wxTextCtrl(
            $this,
            wxID_ANY,
            $text,
            wxDefaultPosition,
            $size,
            wxTE_READONLY
        );

        // The third parameter here indicates what side(s) to add spacing to, and the
        // fourth parameter is the amount of spacing to add, in pixels
        if (!$sizer)
        {
            $sizer = $this->getSizerDevice();
        }
        $sizer->Add($ctrl, 0, wxALL, 8);

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
            // Zero is the first item. As we delete items, the maximum index available
            // reduces, so it is sensible just to repeatedly delete the first item.
            $child = $sizer->GetItem(0);
            $ctrl = $child->GetWindow();
            $ctrl->Destroy();
        }

        // Destroy sizer as well
        $this->SetSizer(null);
        $this->sizer = null;
    }

    /**
     * Needs to be public to receive calls from outside
     */
    public function switchDemo($index)
    {
        $names = $this->getDemoNames();
        $rawName = isset($names[$index]) ? $names[$index] : null;

        if ($rawName)
        {
            $methodName = 'demo_' . strtolower(
                str_replace(' ', '_', $rawName)
            );

            // Destroy all the current elements
            $this->destroyCurrentSizer();

            // Call the appropriate demo to create new items
            $this->$methodName();

            // Tell the window about the new sizer and ask it to refresh
            $this->SetSizer($this->sizer);
            $this->Layout();
        }
    }

    public function getDemoNames()
    {
        return [
            "Vertical wxBoxSizer",
            "Horizontal wxBoxSizer",
            "Vert and horiz wxBoxSizers",
        ];
    }

    protected function demo_vertical_wxboxsizer()
    {
        $this->sizer = new wxBoxSizer(wxVERTICAL);

        $this->createBox("One", new wxSize(300, 30));
        $this->createBox("Two", new wxSize(200, 50));
        $this->createBox("Three", new wxSize(100, 120));
    }

    protected function demo_horizontal_wxboxsizer()
    {
        $this->sizer = new wxBoxSizer(wxHORIZONTAL);

        $this->createBox("One", new wxSize(100, 30));
        $this->createBox("Two", new wxSize(80, 60));
        $this->createBox("Three", new wxSize(80, 150));
    }

    protected function demo_vert_and_horiz_wxboxsizers()
    {
        $this->sizer = new wxBoxSizer(wxVERTICAL);

        $this->createBox("One", new wxSize(100, 30));
        $this->createBox("Two", new wxSize(80, 60));

        // Create an H sizer and add it to the main V sizer. There's no need for additional
        // spacing here, since the inner sizer spacing seems to inherit from the main one
        $hSizer = new wxBoxSizer(wxHORIZONTAL);
        $this->sizer->Add($hSizer, 0, wxALL, 0);

        // Add several items to spread out horizontally in the H sizer
        $this->createBox("Three", new wxSize(50, 30), $hSizer);
        $this->createBox("Four", new wxSize(100, 40), $hSizer);
        $this->createBox("Five", new wxSize(80, 100), $hSizer);
    }
}

class myApp extends wxApp
{
    public function OnInit()
    {
        $main = new MainFrame();
        $main->Show();

        $controller = new ControlFrame($main->getDemoNames());
        $controller->Show();
        $controller->setChangeHandler(
            function($index) use ($main)
            {
                $main->switchDemo($index);
            }
        );
        // Must be called after the handler is set
        $controller->setChoice(0);

        return true;
    }

    public function OnExit()
    {
        return 0;
    }
}
