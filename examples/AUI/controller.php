<?php

namespace WxPhpExamples\AUI;

use wxPoint;
use wxEvent;
use wxAuiPaneInfo;

class controllerDialog extends \wxDialog
{
    // The logic for the manager and for the panes has been split into separate traits,
    // to reduce the size of this class, and perhaps for later testability
    use \WxPhpExamples\AUI\Manager;
    use \WxPhpExamples\AUI\Pane;

    protected $managedWindow;

    // Frame captions are read from the window and stored here
    protected $captions = [
        'tickDockable' => '',
        'tickButtonClose' => '',
        'tickFloatable' => '',
    ];

    public function Show()
    {
        // Set the tickboxes as per the GUI settings
        $this->setManagerFlags();

        // Enable/disable tickboxes as appropriate
        $this->resetEnablements();

        // Move the window out of the way of the main one
        $this->SetPosition(new wxPoint(200, 200));

        // Set up event handlers
        $this->Connect(wxEVT_COMMAND_SPINCTRL_UPDATED, array($this, "onSpinnerChangeEvent"));

        // Read and set the default pane captions
        $this->captureFrameCaptions();
        $this->setCurrentPane();

        return parent::Show();
    }

    /**
     * Set the window to manage through AUI
     *
     * @todo Move the event handler inits to Show()?
     *
     * @param auiDemoDialog $managedWindow
     */
    public function SetManagedWindow(auiDemoDialog $managedWindow)
    {
        $this->managedWindow = $managedWindow;

        $this->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, array($this, "onTickboxChangeEvent"));
        $this->Connect(wxEVT_COMMAND_BUTTON_CLICKED, array($this, "onButtonClick"));
    }

    public function onTickboxChangeEvent(wxEvent $event)
    {
        // Get the control names for the manager and the pane tickboxes
        $managerControlNames = array_keys($this->getManagerFlagNames());
        $paneControlNames = array_keys($this->getPaneMethods());

        // Has a manager tickbox been clicked?
        $ctrl = wxDynamicCast($event->GetEventObject(), "wxCheckBox");
        if (in_array($ctrl->GetName(), $managerControlNames))
        {
            $this->onManagerTickBoxChange($event);
        }
        // Has a pane tickbox been clicked?
        elseif (in_array($ctrl->GetName(), $paneControlNames))
        {
            $this->onPaneTickBoxChange($event);
        }
        // This should not happen
        else
        {
            trigger_error("Unexpected tickbox clicked", E_USER_WARNING);
        }
    }

    /**
     * General iteration function for getting and setting manager flags
     *
     * The flags var is only of use for getter callers (it is not mandatory to use it)
     *
     * @param function $function
     * @return integer
     */
    protected function flagIterator($function)
    {
        $flags = 0;

        foreach ($this->getManagerFlagNames() as $controlName => $flag)
        {
            $window = $this->FindWindow($controlName);
            if ($window)
            {
                $ctrl = wxDynamicCast($window, "wxCheckBox");
                $flags += $function($ctrl, $flag);
            }
            else
            {
                trigger_error("Control not found", E_USER_NOTICE);
            }
        }

        return $flags;
    }

    /**
     * This is called when any button click event happens in this window
     *
     * @todo Move the contents of this method to another one called reopenAllPanes()
     *
     * @param wxEvent $event
     */
    public function onButtonClick(wxEvent $event)
    {
        // Show all available panes
        for($i = 0; $i <= 7; $i++)
        {
            $this->getPaneInfoByIndex($i)->Show();
        }

        // Redraw the managed window
        $this->getManagedWindow()->getAuiManager()->Update();
    }

    public function onSpinnerChangeEvent(wxEvent $event)
    {
        $this->setCurrentPane($this->getSelectedPaneIndex());
    }

    protected function getSelectedPaneIndex()
    {
        $obj = $this->FindWindow('spinPane');
        $ctrl = wxDynamicCast($obj, "wxSpinCtrl");

        return $ctrl->GetValue();
    }

    /**
     * Fetches the specified pane info object
     *
     * @param integer $index
     * @return wxAuiPaneInfo
     */
    protected function getPaneInfoByIndex($index)
    {
        return $this->getManagedWindow()->getAuiManager()->GetPane('auiPane' . $index);
    }

    /**
     * This is called during initialisation to store the frame captions for later reuse
     */
    protected function captureFrameCaptions()
    {
        foreach (array_keys($this->captions) as $controlName)
        {
            $sizers = $this->getSizerContainersByElementName($controlName);
            if (count($sizers) == 3)
            {
                // We know the static box sizer is the penultimate sizer, so we get the 1st
                // (middle) not the 2nd (last) entry
                $sizer = wxDynamicCast($sizers[1], "wxStaticBoxSizer");
                /* @var $sizer wxStaticBoxSizer */
                $this->captions[$controlName] = $sizer->GetStaticBox()->GetLabel();
            }
        }
    }

    /**
     * Fetches the sizer ancestors that contain a named element
     *
     * @todo Would be good to set the correct type here, so we can detect the staticboxsizer
     */
    protected function getSizerContainersByElementName($controlName, array $sizers = [], array $sizersFound = [])
    {
        // If no sizers have been passed, this is the first call - so get the sizer for the
        // whole window as root
        if (!$sizers)
        {
            $sizers[] = $this->GetSizer();
        }

        // The current sizer is the last one
        $sizer = end($sizers);

        for ($i = 0; $i < $sizer->GetItemCount(); $i++)
        {
            /* @var $item wxSizerItem */
            $item = $sizer->GetItem($i);
            if ($item)
            {
                if ($item->IsSizer())
                {
                    // Recursively call self to dig into a child sizer
                    $theseSizers = $this->getSizerContainersByElementName(
                        $controlName,
                        array_merge($sizers, [$item->GetSizer()]),
                        $sizersFound
                    );
                    if ($theseSizers)
                    {
                        $sizersFound = $theseSizers;
                    }
                }
                elseif ($item->IsWindow())
                {
                    if ($item->GetWindow()->GetName() === $controlName)
                    {
                        $sizersFound = $sizers;
                        break;
                    }
                }
            }
        }

        return $sizersFound;
    }

    /**
     * Enables or disables the tick box controls
     *
     * @param string $controlName
     * @param boolean $enabled
     */
    protected function setTickBoxEnabled($controlName, $enabled)
    {
        // Find the control
        $window = $this->FindWindow($controlName);
        if ($window)
        {
            $ctrl = wxDynamicCast($window, "wxCheckBox");
            /* @var $ctrl \wxCheckBox */
            $enabled ? $ctrl->Enable() : $ctrl->Disable();

            // If the control is disabled, let's turn it off too
            if (!$enabled)
            {
                $ctrl->SetValue(false);
            }
        }
    }

    protected function setTickBoxValue($controlName, $ticked)
    {
        // Find the control
        $window = $this->FindWindow($controlName);
        if ($window)
        {
            $ctrl = wxDynamicCast($window, "wxCheckBox");
            /* @var $ctrl \wxCheckBox */
            $ctrl->SetValue($ticked);
        }
    }

    /**
     * Gets the currently notified managed window
     *
     * @return \auiDemoDialog
     */
    public function getManagedWindow()
    {
        return $this->managedWindow;
    }
}
