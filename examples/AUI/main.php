<?php

/**
 * @author https://github.com/halfer
 *
 * @license This file is part of wxPHP, check the LICENSE file for information.
 *
 * @description This is a simple demonstration of the AUI panel system.
 *
 * Run this using:
 *
 *     /usr/bin/php -d extension=wxwidgets.so AUI/main.php
 * 
 * @todo Can we add some wxPane windows?
 * @todo Is there any control over what drags look like?
 */

require_once __DIR__ . '/demo.php';

$app = new myApp();
wxApp::SetInstance($app);
wxEntry();

class controllerDialog extends wxDialog
{
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

        // Has a manager tickbox been clicked?
        $ctrl = wxDynamicCast($event->GetEventObject(), "wxCheckBox");
        if (in_array($ctrl->GetName(), $managerControlNames))
        {
            $this->onManagerTickBoxChange($event);
        }
        // @todo Has a pane tickbox been clicked?
        elseif (true)
        {
        }
        // This should not happen
        else
        {
            trigger_error("Unexpected tickbox clicked", E_USER_WARNING);
        }
    }

    public function onManagerTickBoxChange(wxEvent $event)
    {
        // Handle mutexs choices first, so the flag value does not conflict
        $this->resetMutExChoices($event);

        // Reset the manager and redraw the controls
        $manager = $this->getManagedWindow()->getAuiManager();
        $manager->SetFlags($this->getManagerFlags());
        $manager->Update();

        // Do this last so it takes new manager settings into account
        $this->resetEnablements();
    }

    /**
     * An interation method to get tickbox settings
     *
     * @return function
     */
    protected function getManagerFlags()
    {
        return $this->flagIterator(function(\wxCheckBox $ctrl, $flag)
            {
                return $ctrl->GetValue() ? $flag : 0;
            }
        );
    }

    /**
     * An interation method to set tickbox settings in the control panel
     *
     * @return function
     */
    protected function setManagerFlags()
    {
        $managedWindow = $this->getManagedWindow();

        return $this->flagIterator(function(\wxCheckBox $ctrl, $flag) use ($managedWindow)
            {
                // Get the flags for the manager
                $flags = $managedWindow->getAuiManager()->GetFlags();

                // Reflect the bitwise flag in the tickbox setting
                $ctrl->SetValue($flags & $flag);
            }
        );
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
     * Enables/disables tick boxes depending on other values
     */
    protected function resetEnablements()
    {
        $flags = $this->getManagedWindow()->getAuiManager()->GetFlags();
        $allowDrag = $flags & wxAUI_MGR_ALLOW_FLOATING;

        // Allow dragging affects all flags except "allow active pane"
        $this->setTickBoxEnabled('tickTransDrag', $allowDrag);
        $this->setTickBoxEnabled('tickTransHint', $allowDrag);
        $this->setTickBoxEnabled('tickVenetianHint', $allowDrag);
        $this->setTickBoxEnabled('tickRectangleHint', $allowDrag);
        $this->setTickBoxEnabled('tickHintFade', $allowDrag);
        $this->setTickBoxEnabled('tickNoVenetianHintFade', $allowDrag);
    }

    /**
     * Forced *Hint items to be mutually exclusive
     */
    protected function resetMutExChoices(wxEvent $event)
    {
        // Is the control one of the affected mutually-exclusive choices?
        $ctrl = wxDynamicCast($event->GetEventObject(), "wxCheckBox");
        /* @var $ctrl wxCheckBox */
        $hintNames = ['tickTransHint', 'tickVenetianHint', 'tickRectangleHint'];
        if (!in_array($ctrl->GetName(), $hintNames))
        {
            return;
        }

        // Only proceed if the control is ticked
        if (!$ctrl->GetValue())
        {
            return;
        }

        // Deselect the others
        foreach ($hintNames as $controlName)
        {
            if ($controlName != $ctrl->GetName())
            {
                $this->setTickBoxValue($controlName, false);
            }
        }
    }

    public function onButtonClick(wxEvent $event)
    {
        // Show all available panes
        for($i = 0; $i <= 7; $i++)
        {
            $info = $this->getManagedWindow()->getAuiManager()->GetPane('auiPane' . $i);
            $info->Show();
        }

        // Redraw the managed window
        $this->getManagedWindow()->getAuiManager()->Update();
    }

    public function onSpinnerChangeEvent(wxEvent $event)
    {
        $ctrl = wxDynamicCast($event->GetEventObject(), "wxSpinCtrl");
        /* @var $ctrl wxSpinCtrl */
        $this->setCurrentPane($ctrl->GetValue());
    }

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
     * Resets the pane controls to reflect the specified pane number
     *
     * @param integer $pane
     */
    protected function setCurrentPane($pane = 0)
    {
        $this->setPaneLabels($pane);
        $this->setPaneTickBoxValues($pane);
    }

    protected function setPaneLabels($pane)
    {
        foreach ($this->captions as $controlName => $caption)
        {
            $sizers = $this->getSizerContainersByElementName($controlName);
            if (count($sizers) == 3)
            {
                $sizer = wxDynamicCast($sizers[1], "wxStaticBoxSizer");
                /* @var $sizer wxStaticBoxSizer */
                // "X" is the placeholder for the pane number
                $sizer->GetStaticBox()->SetLabel(str_replace('X', $pane, $caption));
            }
        }
    }

    /**
     * Resets the pane tick boxes for the given pane
     *
     * @param integer $pane
     */
    protected function setPaneTickBoxValues($pane)
    {
        // Read the settings for the specified pane
        $paneInfo = $this->getManagedWindow()->getPaneSettings('auiPane' . $pane);

        // Use these methods to set the tickbox values
        foreach ($this->getPaneMethods() as $controlName => $methodName)
        {
            $boolean = $paneInfo->$methodName();
            $this->setTickBoxValue($controlName, $boolean);
        }
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
     * Returns an array to convert between manager flag const and element name
     *
     * Flags are detailed here: http://docs.wxwidgets.org/3.0/classwx_aui_manager.html
     *
     * @return array
     */
    protected function getManagerFlagNames()
    {
        return [
            'tickFloating' => wxAUI_MGR_ALLOW_FLOATING,
            'tickActive' => wxAUI_MGR_ALLOW_ACTIVE_PANE,
            'tickTransDrag' => wxAUI_MGR_TRANSPARENT_DRAG,
            'tickTransHint' => wxAUI_MGR_TRANSPARENT_HINT,
            'tickVenetianHint' => wxAUI_MGR_VENETIAN_BLINDS_HINT,
            'tickRectangleHint' => wxAUI_MGR_RECTANGLE_HINT,
            'tickHintFade' => wxAUI_MGR_HINT_FADE,
            'tickNoVenetianHintFade' => wxAUI_MGR_NO_VENETIAN_BLINDS_FADE,
            'tickLiveResize' => wxAUI_MGR_LIVE_RESIZE,
        ];
    }

    /**
     * Returns an array to convert between PaneInfo getter method and element name
     *
     * @return array
     */
    protected function getPaneMethods()
    {
        return [
            'tickDockable' => 'IsDockable',
            'tickDockLeft' => 'IsLeftDockable',
            'tickDockTop' => 'IsTopDockable',
            'tickDockRight' => 'IsRightDockable',
            'tickDockBottom' => 'IsBottomDockable',
            'tickButtonClose' => 'HasCloseButton',
            'tickButtonPin' => 'HasPinButton',
            'tickButtonMaximise' => 'HasMaximizeButton',
            'tickButtonMinimise' => 'HasMinimizeButton',
            'tickFloatable' => 'IsFloatable',
            'tickFixed' => 'IsFixed',
            'tickGripper' => 'HasGripper',
            'tickGripperTop' => 'HasGripperTop',
        ];
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

class myApp extends wxApp
{
    public function OnInit()
    {
        $resource = new wxXmlResource();
        $resource->InitAllHandlers();
        $resource->Load(__DIR__ . '/forms.xrc.xml');

        $frame = new auiDemoDialog();
        $frame->Show();
        $frame->Center();

        $controllerFrame = new controllerDialog();
        $resource->LoadDialog($controllerFrame, NULL, 'frmController');
        $controllerFrame->SetManagedWindow($frame);
        $controllerFrame->Show();
    }
}
