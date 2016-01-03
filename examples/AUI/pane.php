<?php

namespace WxPhpExamples\AUI;

use wxEvent;

trait Pane
{
    protected function onPaneTickBoxChange(wxEvent $event)
    {
        // @todo Add code here
        echo "Clicked pane tick box\n";
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
}
