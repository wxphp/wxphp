<?php

/**
 * This frame contains the sizer demonstrations
 */
class DemoFrame extends wxFrame
{
    protected $sizer;
    protected $alignOptions = 0;
    protected $borderOptions = 0;
    protected $borderSize;

    public function __construct($parent = null)
    {
        parent::__construct(
            $parent,
            wxID_TOP,
            "Sizer demo",
            wxDefaultPosition,
            new wxSize(400, 300)
        );
        $this->SetPosition(new wxPoint(600, 100));
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
        $sizer->Add($ctrl, $this->createSizerFlags($this->borderSize));

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
    public function switchDemo($index, $alignOptions, $borderOptions, $borderSize)
    {
        $names = $this->getDemoNames();
        $rawName = isset($names[$index]) ? $names[$index] : null;

        /// Save alignment/border options
        $this->setAlignOptions($alignOptions);
        $this->setBorderOptions($borderOptions);
        $this->setBorderSize($borderSize);

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
        else
        {
            trigger_error("No such demo", E_USER_WARNING);
        }
    }

    public function getDemoNames()
    {
        return [
            "Vertical wxBoxSizer",
            "Horizontal wxBoxSizer",
            "Vert and horiz wxBoxSizers",
            "wxStaticBoxSizer",
            "wxGridSizer",
            "wxFlexGridSizer"
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
            "Here we have an outer wxBoxSizer arranging blocks vertically, and one of the blocks is itself a wxBoxSizer that arranges its children rightwards.\n\nInterestingly, the child sizer seems to inherit its parent border width even though its own border is zero.",
            "A wxStaticBoxSizer operates in the same way as a wxBoxSizer, but draws a frame around the contents. This is useful to group related controls together.\n\nHere, this sizer is added to a box sizer so external border spacing can be added.",
            "The wxGridSizer uses the available width for a specified number of columns, then flows new elements onto the next row.\n\nThe rows are set to an equal height such that all available vertical space is utilised.",
            "A wxFlexGridSizer is similar to a wxGridSizer, but rows take a height according to the tallest height in that row, and as such each row may be of a different height."
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

    protected function demo_wxstaticboxsizer()
    {
        $this->sizer = new wxBoxSizer(wxHORIZONTAL);

        $box = new wxStaticBox($this, wxID_ANY, "Frame title");
        $innerSizer = new wxStaticBoxSizer($box, wxHORIZONTAL);

        // Add the child sizer to the main sizer, and set an outer border
        $this->sizer->Add($innerSizer, $this->createSizerFlags($this->borderSize));

        $this->createBox("One", new wxSize(100, 30), $innerSizer);
        $this->createBox("Two", new wxSize(80, 60), $innerSizer);
        $this->createBox("Three", new wxSize(80, 150), $innerSizer);
    }

    /**
     * Demonstrates the grid sizer
     *
     * We generate the random sizes once, so that when we redraw (e.g. to change border
     * options) the sizes don't jiggle all over the shop
     *
     * @staticvar array $sizes
     */
    protected function demo_wxgridsizer()
    {
        static $sizes = array();

        // Generate the sizes if they're not already generated
        if (!$sizes)
        {
            $sizes = $this->generateRandomSizes(10, 25, 50);
        }

        $this->sizer = new wxGridSizer(4);

        foreach ($sizes as $ord => $sizePair)
        {
            $this->createBox("Item $ord", new wxSize(55 + $sizePair[0], 30 + $sizePair[1]));
        }
    }

    /**
     * Demo of a FlexGridSizer
     *
     * @staticvar array $sizes
     */
    protected function demo_wxflexgridsizer()
    {
        static $sizes = array();

        // Generate the sizes if they're not already generated
        if (!$sizes)
        {
            $sizes = $this->generateRandomSizes(12, 25, 25);
        }

        $this->sizer = new wxFlexGridSizer(4);

        foreach ($sizes as $ord => $sizePair)
        {
            $row = (int) ($ord / 4);
            $this->createBox("Item $ord", new wxSize(55 + $sizePair[0], 25 + $row * 35 + $sizePair[1]));
        }
    }

    protected function generateRandomSizes($count, $xRange, $yRange)
    {
        $sizes = array();
        mt_srand(time());

        for ($i = 0; $i < $count; $i++)
        {
            $sizes[] = [rand(0, $xRange), rand(0, $yRange)];
        }

        return $sizes;
    }

    protected function createSizerFlags($border = 0)
    {
        $flags = new wxSizerFlags(0);
        $flags->Border($this->borderOptions, $border);
        $flags->Align($this->alignOptions);

        return $flags;
    }

    protected function setAlignOptions($alignOptions)
    {
        $this->alignOptions = $alignOptions;
    }

    protected function setBorderOptions($borderOptions)
    {
        $this->borderOptions = $borderOptions;
    }

    protected function setBorderSize($borderSize)
    {
        $this->borderSize = $borderSize;
    }
}
