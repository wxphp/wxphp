<?php

/**
 * This frame contains the sizer demonstrations
 */
class DemoFrame extends wxFrame
{
    protected $sizer;
    protected $alignOptions = 0;

    public function __construct($parent = null)
    {
        parent::__construct(
            $parent,
            wxID_TOP,
            "Sizer demo",
            wxDefaultPosition,
            new wxSize(400, 300)
        );
        $this->SetPosition(new wxPoint(500, 100));
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

        // If we're not using a child sizer, use the parent
        if (!$sizer)
        {
            $sizer = $this->getSizerDevice();
        }

        // There are a number of different approaches to adding an item to a sizer - using a
        // flags class may be the clearest
        $sizer->Add($ctrl, $this->createSizerFlags(8));

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
            if ($ctrl = $child->GetWindow())
            {
                $ctrl->Destroy();
            }
            // Sizers within this sizer need special treatment
            elseif ($childSizer = $child->GetSizer())
            {
                // Delete all the child controls in this size
                $childCount = $childSizer->GetItemCount();
                for($j = 0; $j < $childCount; $j++)
                {
                    $childSizerItem = $childSizer->GetItem(0);
                    $childCtrl = $childSizerItem->GetWindow();
                    $childCtrl->Destroy();
                }

                // There is no Destroy for the child sizer, so I'll assume here that the first
                // (or only) item is the sizer we wish to remove
                $sizer->Remove(0);
            }
        }

        // Destroy sizer as well
        $this->SetSizer(null);
        $this->sizer = null;
    }

    /**
     * Needs to be public to receive calls from outside
     */
    public function switchDemo($index, $alignOptions)
    {
        $names = $this->getDemoNames();
        $rawName = isset($names[$index]) ? $names[$index] : null;

        /// Save alignment options
        $this->setAlignOptions($alignOptions);

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

    /**
     * Help strings relating to each demo
     *
     * These could go in the control class, but I rather like keeping them with the
     * demos they pertain to.
     *
     * @return array
     */
    public function getHelpStrings()
    {
        return [
            "This demontrates a wxBoxSizer that arranges elements in a vertical fashion.",
            "This demo shows a wxBoxSizer that arranges elements horizontally.",
            "Here we have an outer wxBoxSizer arranging blocks vertically, and one of the blocks is itself a wxBoxSizer that arranges its children rightwards."
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
        $this->sizer->Add($hSizer, $this->createSizerFlags());

        // Add several items to spread out horizontally in the H sizer
        $this->createBox("Three", new wxSize(50, 30), $hSizer);
        $this->createBox("Four", new wxSize(100, 40), $hSizer);
        $this->createBox("Five", new wxSize(80, 100), $hSizer);
    }

    protected function createSizerFlags($border = 0)
    {
        $flags = new wxSizerFlags(0);
        $flags->Border(wxALL, $border);
        $flags->Align($this->alignOptions);

        return $flags;
    }

    protected function setAlignOptions($alignOptions)
    {
        $this->alignOptions = $alignOptions;
    }
}
