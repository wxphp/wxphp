<?php

namespace WxPhpExamples\AUI;

use wxCheckBox;
use wxEvent;

trait Manager
{
    protected function onManagerTickBoxChange(wxEvent $event)
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
        return $this->flagIterator(function(wxCheckBox $ctrl, $flag)
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

        return $this->flagIterator(function(wxCheckBox $ctrl, $flag) use ($managedWindow)
            {
                // Get the flags for the manager
                $flags = $managedWindow->getAuiManager()->GetFlags();

                // Reflect the bitwise flag in the tickbox setting
                $ctrl->SetValue($flags & $flag);
            }
        );
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
}
