<?php

/**
 * This frame acts as a controller of the main demonstration window
 */
class ControlFrame extends wxFrame
{
    // Not sure what good practice is here - there's lots of predefined ID codes in
    // wxWidgets, though it's probably not all important to avoid them.
    const ID_DEMO =  10000;
    const ID_HORIZ = 10001;
    const ID_VERT = 10002;

    // Callbacks for various events
    protected $changeDemohandler;

    // Controls that need to be referred to class-wide
    protected $choiceCtrl;
    protected $helpCtrl;
    protected $horizCtrl;
    protected $vertCtrl;
    protected $borderSizeCtrl;
    protected $borderAddCtrls = [];

    // Misc class properties
    protected $helpStrings;
    protected $demoIndex;

    public function __construct(array $demoNames, array $helpStrings, $parent = null)
    {
        // The "dialog style" means that the window deliberately cannot be resized
        parent::__construct(
            $parent,
            wxID_TOP,
            "Sizer controller",
            wxDefaultPosition,
            new wxSize(350, 330),
            wxDEFAULT_DIALOG_STYLE
        );
        $this->SetPosition(new wxPoint(100, 100));

        // Create the main drop-down and help controls
        $this->choiceCtrl =
            new wxChoice($this, self::ID_DEMO, wxDefaultPosition, new wxSize(330, 29), $demoNames);
        $this->helpCtrl =
            new wxStaticText($this, wxID_ANY, '', wxDefaultPosition, new wxSize(330, 130));

        $sizer = new wxBoxSizer(wxVERTICAL);
        $sizer->Add($this->choiceCtrl, 0, wxALL, 8);
        $sizer->Add($this->helpCtrl, 0, wxLEFT + wxRIGHT + wxBOTTOM, 8);
        $this->initAlignControls($sizer);
        $this->initBorderSizeControl($sizer);
        $this->initBorderAddControls($sizer);
        $this->SetSizer($sizer);

        // Save the help strings in this class too
        $this->helpStrings = $helpStrings;

        // Here's some widget events
        $this->Connect(wxEVT_CHOICE, [$this, "controlChangeEvent"]);
        $this->Connect(wxEVT_SPINCTRL, [$this, "controlSpinEvent"]);
        $this->Connect(wxEVT_CHECKBOX, [$this, "controlCheckBoxEvent"]);
    }

    /**
     * Sets up the alignment controls
     *
     * @todo Add another label/widget for vertical alignment
     *
     * @param wxSizer $sizer
     */
    protected function initAlignControls(wxSizer $sizer)
    {
        $hSizer = new wxBoxSizer(wxHORIZONTAL);
        $this->horizCtrl = $this->initAlignmentControl(
            $hSizer, 'H align:',
            self::ID_HORIZ, ["Left", "Centre", "Right"]
        );
        $this->vertCtrl = $this->initAlignmentControl(
            $hSizer, 'V align:',
            self::ID_VERT, ["Top", "Centre", "Bottom"]
        );

        // Add the child sizer to the main one (going down)
        $sizer->Add($hSizer, 0, wxLEFT + wxRIGHT + wxBOTTOM, 8);
    }

    protected function initAlignmentControl(wxSizer $hSizer, $label, $choiceId, $choices)
    {
        $labelCtrl =
            new wxStaticText($this, wxID_ANY, $label, wxDefaultPosition, new wxSize(67, 18));
        $choiceCtrl =
            new wxChoice($this, $choiceId, wxDefaultPosition, new wxSize(90, 29), $choices);

        // Select the first element for both alignment choosers
        $choiceCtrl->SetSelection(0);

        // Let's add left-spacing in the sizer if there's already controls in here
        $leftSpace = $hSizer->GetItemCount() ? 16 : 0;

        // Add the controls to the child sizer (going across)
        $hSizer->Add($labelCtrl, 0, wxALIGN_CENTER_VERTICAL + wxLEFT, $leftSpace);
        $hSizer->Add($choiceCtrl);

        return $choiceCtrl;
    }

    protected function initBorderSizeControl(wxSizer $sizer)
    {
        $hSizer = new wxBoxSizer(wxHORIZONTAL);
        $labelCtrl =
            new wxStaticText($this, wxID_ANY, "Border size: ", wxDefaultPosition, new wxSize(110, 18));
        $this->borderSizeCtrl =
            new wxSpinCtrl($this, wxID_ANY, "8", wxDefaultPosition, new wxSize(100, 26), wxSP_ARROW_KEYS, 0, 12);
        $hSizer->Add($labelCtrl, 0, wxALIGN_CENTER_VERTICAL);
        $hSizer->Add($this->borderSizeCtrl);

        // Add the child sizer to the main one (going down)
        $sizer->Add($hSizer, 0, wxLEFT + wxRIGHT + wxBOTTOM, 8);
    }

    protected function initBorderAddControls(wxSizer $sizer)
    {
        $hSizer1 = new wxBoxSizer(wxHORIZONTAL);
        $labelCtrl =
            new wxStaticText($this, wxID_ANY, "Borders: ", wxDefaultPosition, new wxSize(110, 18));
        $hSizer1->Add($labelCtrl, 0, wxALIGN_CENTER_VERTICAL);

        // Add the first child sizer to the main one (going down)
        $sizer->Add($hSizer1, 0, wxLEFT + wxRIGHT + wxBOTTOM, 8);

        $hSizer2 = new wxBoxSizer(wxHORIZONTAL);

        $this->initBorderAddControl($hSizer2, "Left");
        $this->initBorderAddControl($hSizer2, "Top");
        $this->initBorderAddControl($hSizer2, "Right");
        $this->initBorderAddControl($hSizer2, "Bottom");

        // Add the second child sizer to the main one (going down)
        $sizer->Add($hSizer2, 0, wxLEFT + wxRIGHT + wxBOTTOM, 8);
    }

    protected function initBorderAddControl(wxSizer $hSizer, $label)
    {
        $checkBox =
            new wxCheckBox($this, wxID_ANY, $label, wxDefaultPosition, new wxSize(80, 24));
        $checkBox->setValue(true);
        $hSizer->Add($checkBox);

        // Add this tick box to a control array
        $this->borderAddCtrls[] = $checkBox;
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
        elseif ($event->GetId() === self::ID_HORIZ || $event->GetId() === self::ID_VERT)
        {
            $this->changeAlignmentEvent($event->GetInt());
        }
    }

    /**
     * Set the menu choice and call the attached handler
     *
     * @param integer $index
     */
    public function setDemoChoice($index)
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
        $func($index, $this->getAlignmentFlags(), $this->getBorderAddFlags(), $this->getBorderSize());

        $this->demoIndex = $index;
    }

    /**
     * Handles a request to change the horizontal justification options
     *
     * @param integer $index
     */
    protected function changeAlignmentEvent($index)
    {
        $this->changeDemoEvent($this->demoIndex);
    }

    public function controlSpinEvent()
    {
        $this->changeDemoEvent($this->demoIndex);
    }

    public function controlCheckBoxEvent()
    {
        $this->changeDemoEvent($this->demoIndex);
    }

    protected function setHelp($index)
    {
        $this->helpCtrl->SetLabel($this->helpStrings[$index]);

        // The wrapping can change the control size, so it's worth asking the window
        // to re-layout its controls
        $this->helpCtrl->Wrap(330);
        $this->Layout();
    }

    public function setChangeDemoHandler($changeDemoHandler)
    {
        $this->changeDemoHandler = $changeDemoHandler;
    }

    protected function getAlignmentFlags()
    {
        $flags = 0;

        // Set the horizontal alignment flags
        $horiz = $this->horizCtrl->GetSelection();
        switch ($horiz)
        {
            case 0:
                $flags += wxALIGN_LEFT;
                break;
            case 1:
                $flags += wxALIGN_CENTER_HORIZONTAL;
                break;
            case 2:
                $flags += wxALIGN_RIGHT;
                break;
        }

        // Set the vertical alignment flags
        $vert = $this->vertCtrl->GetSelection();
        switch ($vert)
        {
            case 0:
                $flags += wxALIGN_TOP;
                break;
            case 1:
                $flags += wxALIGN_CENTER_VERTICAL;
                break;
            case 2:
                $flags += wxALIGN_BOTTOM;
                break;
        }

        return $flags;
    }

    protected function getBorderSize()
    {
        return $this->borderSizeCtrl->GetValue();
    }

    protected function getBorderAddFlags()
    {
        $flags = 0;
        $edges = [wxLEFT, wxTOP, wxRIGHT, wxBOTTOM];

        foreach ($this->borderAddCtrls as $ord => $borderAddCtrl)
        {
            // If this tick box is ticked, add the corresponding flag
            if ($borderAddCtrl->GetValue())
            {
                $flags += $edges[$ord];
            }
        }

        return $flags;
    }
}
