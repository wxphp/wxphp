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
 * @todo Add a widget to reset the spacing in the current sizer?
 * @todo Add a widget to specify which sides spaces are added on?
 * @todo Don't add a trailing space to labels to add extra horiz space
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
