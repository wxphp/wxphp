<?php

namespace WxPhpExamples\AUI;

use wxCheckBox;
use wxEvent;
use wxAuiPaneInfo;

trait Pane
{
    protected function onPaneTickBoxChange(wxEvent $event)
    {
        echo "Clicked pane tick box\n";

        // Get the currently selected pane
        $paneIndex = $this->getSelectedPaneIndex();
        /* @var $paneInfo wxAuiPaneInfo */
        $paneInfo = $this->getPaneInfoByIndex($paneIndex);

        // Set new flag true/false on paneinfo, using setter methods
        /* @var $ctrl wxCheckBox */
        $ctrl = wxDynamicCast($event->GetEventObject(), "wxCheckBox");
        $methods = $this->getPaneSetterMethods();
        $method = $methods[$ctrl->GetName()];
        $paneInfo->$method($ctrl->GetValue());

        /* @var $window \wxTextCtrl */
        /* @var $manager \wxAuiManager */
        $window = $this->getManagedWindow()->getWindowByIndex($paneIndex);
        $manager = $this->getManagedWindow()->getAuiManager();

        // Doesn't seem to work at all

        // This sort of works, but the pane sometimes ends up being moved
        $manager->DetachPane($window);
        $manager->AddPane($window, $paneInfo);

        // This does not work at all
        #$paneInfo->Hide();
        #$paneInfo->Show();

// Debugging
echo "Control: " . $ctrl->GetName() . "\n";
echo "Method: " . $method . "\n";
echo "Boolean: " . ($ctrl->GetValue() ? 'true' : 'false') . "\n";

        // The string should be a "perspective string"
        #$this->getManagedWindow()->getAuiManager()->LoadPaneInfo('auiPane0', $paneInfo);

        // Now redraw the panes
        $this->getManagedWindow()->getAuiManager()->Update();
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
        foreach ($this->getPaneGetterMethods() as $controlName => $methodName)
        {
            $boolean = $paneInfo->$methodName();
            $this->setTickBoxValue($controlName, $boolean);
        }
    }

    /**
     * Returns an array to convert between PaneInfo getter method and element name
     *
     * @return array
     */
    protected function getPaneGetterMethods()
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
     * Returns an array to convert between PaneInfo setter method and element name
     *
     * @return array
     */
    protected function getPaneSetterMethods()
    {
        return [
            'tickDockable' => 'Dockable',
            'tickDockLeft' => 'LeftDockable',
            'tickDockTop' => 'TopDockable',
            'tickDockRight' => 'RightDockable',
            'tickDockBottom' => 'BottomDockable',
            'tickButtonClose' => 'CloseButton',
            'tickButtonPin' => 'PinButton',
            'tickButtonMaximise' => 'MaximizeButton',
            'tickButtonMinimise' => 'MinimizeButton',
            'tickFloatable' => 'Floatable',
            'tickFixed' => 'Fixed',
            'tickGripper' => 'Gripper',
            'tickGripperTop' => 'GripperTop',
        ];
    }
}
