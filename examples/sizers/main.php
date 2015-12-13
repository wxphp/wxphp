<?php

/**
 * @author https://github.com/halfer
 *
 * @license This file is part of wxPHP, check the LICENSE file for information.
 *
 * @description This is a simple demonstration of sizer devices.
 *
 * Run this using:
 *
 *     /usr/bin/php -d extension=wxwidgets.so sizers/main.php
 *
 * For more information on how to use sizers generally, this article is excellent:
 *
 *     http://docs.wxwidgets.org/trunk/overview_sizer.html
 *
 * @todo Quit when the controller window is closed
 * @todo I get very occasional redraw strangeness in the controller, but not often enough to debug
 *      - something to do with the wrapping text control?
 *      - tried adding long dummy text to the static box sizer, no difference
 * @todo Occasionally one of the drop-down menus does not draw properly - not wide enough?
 * @todo Add some frames around things in the control panel
 * @todo A control window height of -1 doesn't work due to the text resize - maybe add in
 *      text to get this working and then null it?
 * @todo StaticBoxSizer introduces GTK console warnings, tried a few things already:
 *      - add in a GridSizer child to FrameSizers
 *      - make each FrameSizer a child of a new GridSizer
 *      - swap outer BoxSizer with FlexGridSizer with a single column
 *      - move window construction to Show()
 * @todo Right-align the alignment menu drop-downs, so that the vertical dropdown sits flush
 *      with the right hand edge of the frame (with an appropriate border of course)
 */

require_once __DIR__ . '/control.php';
require_once __DIR__ . '/demo.php';

$app = new myApp();
wxApp::SetInstance($app);
wxEntry();

class myApp extends wxApp
{
    public function OnInit()
    {
        $main = new DemoFrame();
        $main->Show();

        $controller = new ControlFrame($main->getDemoNames(), $main->getHelpStrings());
        $controller->Show();
        $controller->setChangeDemoHandler(
            function($index, $alignFlags, $borderFlags, $borderSize) use ($main)
            {
                $main->switchDemo($index, $alignFlags, $borderFlags, $borderSize);
            }
        );
        // Must be called after the handler is set
        $controller->setDemoChoice(0);

        return true;
    }

    public function OnExit()
    {
        return 0;
    }
}
