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
 * @todo StaticBoxSizer introduces GTK console warnings, tried a few things already:
 *      - add in a GridSizer child to FrameSizers
 *      - make each FrameSizer a child of a new GridSizer
 *      - swap outer BoxSizer with FlexGridSizer with a single column
 *      - move window construction to Show()
 *      - ** Ah, could wxEXPAND be the cause of these? Adding one resulted in 16 warnings
 *        ** instead of 8!
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
