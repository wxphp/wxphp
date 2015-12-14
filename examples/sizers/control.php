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
            new wxSize(380, 370),
            wxDEFAULT_DIALOG_STYLE
        );
        $this->SetPosition(new wxPoint(100, 100));

        // Create the main drop-down and help controls
        $this->choiceCtrl =
            new wxChoice($this, self::ID_DEMO, wxDefaultPosition, new wxSize(-1, -1), $demoNames);
        $this->helpCtrl =
            new wxStaticText($this, wxID_ANY, '', wxDefaultPosition, new wxSize(-1, 130));

        $sizer = new wxBoxSizer(wxVERTICAL);
        // The menu and help controls are set to expand to the window width
        $sizer->Add($this->choiceCtrl, 0, wxALL + wxEXPAND, 8);
        $sizer->Add($this->helpCtrl, 1, wxLEFT + wxRIGHT + wxBOTTOM + wxEXPAND, 8);
        $this->initAlignControls($sizer);

        // Put these controls in a frame
        $frameSizer = $this->createFrameSizer("Borders", wxVERTICAL);
        $this->initBorderSizeControl($frameSizer);
        $this->initBorderAddControls($frameSizer);
        $this->addItemToSizer($sizer, $frameSizer);
        $this->SetSizer($sizer);

        // Save the help strings in this class too
        $this->helpStrings = $helpStrings;

        // Here's some widget events
        $this->Connect(wxEVT_CHOICE, [$this, "controlChangeEvent"]);
        $this->Connect(wxEVT_SPINCTRL, [$this, "controlSpinEvent"]);
        $this->Connect(wxEVT_CHECKBOX, [$this, "controlCheckBoxEvent"]);

        // Fixes redraw glitches just before the loop starts
        $this->Layout();
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
        // Put these controls in a frame sizer
        $hSizer = $this->createFrameSizer("Alignment", wxHORIZONTAL); // @todo Rename to $frameSizer

        $this->horizCtrl = $this->initAlignmentControl(
            $hSizer, 'Horizontal:',
            self::ID_HORIZ, ["Left", "Centre", "Right"]
        );
        $this->vertCtrl = $this->initAlignmentControl(
            $hSizer, 'Vertical:',
            self::ID_VERT, ["Top", "Centre", "Bottom"]
        );

        // Add the child sizer to the main one (going down)
        $this->addItemToSizer($sizer, $hSizer);
    }

    protected function initAlignmentControl(wxSizer $hSizer, $label, $choiceId, $choices)
    {
        // The width of -1 means auto-size
        $labelCtrl =
            new wxStaticText($this, wxID_ANY, $label, wxDefaultPosition, new wxSize(-1, -1));
        $choiceCtrl =
            new wxChoice($this, $choiceId, wxDefaultPosition, new wxSize(-1, -1), $choices);

        // Select the first element for both alignment choosers
        $choiceCtrl->SetSelection(0);

        // Let's add left-spacing in the sizer if there's already controls in here
        if ($hSizer->GetItemCount())
        {
            $hSizer->AddSpacer(8);
        }

        // Add the controls to the child sizer (going across)
        $hSizer->Add($labelCtrl, 0, wxALIGN_CENTER_VERTICAL + wxALL, 8);
        $hSizer->Add($choiceCtrl, 0, wxLEFT + wxTOP + wxBOTTOM, 8);

        return $choiceCtrl;
    }

    protected function initBorderSizeControl(wxSizer $sizer)
    {
        $hSizer = new wxBoxSizer(wxHORIZONTAL);
        $labelCtrl =
            new wxStaticText($this, wxID_ANY, "Width:", wxDefaultPosition, new wxSize(-1, -1));

        // I'm leaving the spinner at a generous fixed with, since GTK renders it rather
        // wide otherwise
        $this->borderSizeCtrl =
            new wxSpinCtrl($this, wxID_ANY, "8", wxDefaultPosition, new wxSize(100, -1), wxSP_ARROW_KEYS, 0, 12);
        $hSizer->Add($labelCtrl, 0, wxALIGN_CENTER_VERTICAL);
        $hSizer->AddSpacer(8);
        $hSizer->Add($this->borderSizeCtrl);

        // Add the child sizer to the main one (going down)
        $this->addItemToSizer($sizer, $hSizer);
    }

    protected function initBorderAddControls(wxSizer $sizer)
    {
        $hSizer1 = new wxBoxSizer(wxHORIZONTAL);

        // Add the first child sizer to the main one (going down)
        $sizer->Add($hSizer1, 0, wxLEFT + wxRIGHT + wxBOTTOM, 8);

        // Unlike a box sizer, a grid sizer doesn't seem to emit errors when adding checkboxes
        $hSizer2 = new wxGridSizer(4, 0, 0);

        $this->initBorderAddControl($hSizer2, "Left");
        $this->initBorderAddControl($hSizer2, "Top");
        $this->initBorderAddControl($hSizer2, "Right");
        $this->initBorderAddControl($hSizer2, "Bottom");

        // Add the second child sizer to the main one (going down)
        $this->addItemToSizer($sizer, $hSizer2);
    }

    protected function initBorderAddControl(wxSizer $hSizer, $label)
    {
        $checkBox =
            new wxCheckBox($this, wxID_ANY, $label, wxDefaultPosition, new wxSize(-1, -1));
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
        switch ($this->getHorizAlignChoice())
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
        switch ($this->getVertAlignChoice())
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

    protected function getHorizAlignChoice()
    {
        return $this->horizCtrl->GetSelection();
    }

    protected function getVertAlignChoice()
    {
        return $this->vertCtrl->GetSelection();
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

    protected function createFrameSizer($label, $orientation)
    {
        return new wxStaticBoxSizer(new wxStaticBox($this, wxID_ANY, $label), $orientation);
    }

    protected function addItemToSizer(wxSizer $sizer, wxSizer $childSizer)
    {
        $sizer->Add($childSizer, 0, wxLEFT + wxRIGHT + wxBOTTOM + wxEXPAND, 8);
    }
}
