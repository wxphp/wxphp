<?php

/**
 * This frame acts as a controller of the main demonstration window
 */
class ControlFrame extends wxFrame
{
    const ID_DEMO =  10000;
    const ID_HORIZ = 10001;

    protected $changeDemohandler;
    protected $choiceCtrl;
    protected $helpCtrl;
    protected $helpStrings;
    protected $horizCtrl;

    public function __construct(array $demoNames, array $helpStrings, $parent = null)
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

        $this->choiceCtrl =
            new wxChoice($this, self::ID_DEMO, wxDefaultPosition, new wxSize(250, 29), $demoNames);
        $this->helpCtrl =
            new wxStaticText($this, wxID_ANY, '', wxDefaultPosition, new wxSize(290, 100));
        $this->horizCtrl =
            new wxChoice($this, self::ID_HORIZ, wxDefaultPosition, new wxSize(250, 29), ["Left", "Right"]);

        $sizer = new wxBoxSizer(wxVERTICAL);
        $sizer->Add($this->choiceCtrl, 0, wxALL, 8);
        $sizer->Add($this->helpCtrl, 0, wxLEFT + wxRIGHT + wxBOTTOM, 8);
        $sizer->Add($this->horizCtrl, 0, wxLEFT + wxRIGHT + wxBOTTOM, 8);
        $this->SetSizer($sizer);

        // Save the help strings in this class too
        $this->helpStrings = $helpStrings;

        $this->Connect(wxEVT_CHOICE, [$this, "controlChangeEvent"]);
    }

    /**
     * Receive a WX event from the choice control
     *
     * @param wxCommandEvent $event
     */
    public function controlChangeEvent(wxCommandEvent $event)
    {
        if ($event->GetId() === self::ID_DEMO)
        {
            $this->changeDemoEvent($event->GetInt());
        }
        elseif ($event->GetId() === self::ID_HORIZ)
        {
            $this->changeHorizEvent($event->GetInt());
        }
    }

    /**
     * Set the menu choice and call the attached handler
     *
     * @param integer $index
     */
    public function setChoice($index)
    {
        $this->setHelp($index);
        $this->choiceCtrl->SetSelection($index);
        $this->changeDemoEvent($index);
    }

    /**
     * Handles a request to change the demo
     *
     * @param integer $index
     */
    protected function changeDemoEvent($index)
    {
        $this->setHelp($index);

        $func = $this->changeDemoHandler;
        $func($index);
    }

    /**
     * Handles a request to change the horizontal justification options
     *
     * @param integer $index
     */
    protected function changeHorizEvent($index)
    {

    }

    protected function setHelp($index)
    {
        $this->helpCtrl->SetLabel($this->helpStrings[$index]);
        $this->helpCtrl->Wrap(200);
    }

    public function setChangeDemoHandler($changeDemoHandler)
    {
        $this->changeDemoHandler = $changeDemoHandler;
    }
}
