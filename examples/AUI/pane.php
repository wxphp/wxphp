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
