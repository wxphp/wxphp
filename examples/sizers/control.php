<?php

/**
 * This frame acts as a controller of the main demonstration window
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
