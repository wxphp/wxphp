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
 *     /usr/bin/php -d extension=wxwidgets.so sizers.php
 *
 * FIXME Destroying controls after showing the H/V demo results in a crash
 * @todo Add a widget to reset the spacing in the current sizer?
 * @todo Add a widget to specify which sides spaces are added on?
 * @todo Can we have a help box in the controller window, with helpful info?
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

        $controller = new ControlFrame($main->getDemoNames());
        $controller->Show();
        $controller->setChangeHandler(
            function($index) use ($main)
            {
                $main->switchDemo($index);
            }
        );
        // Must be called after the handler is set
        $controller->setChoice(0);

        return true;
    }

    public function OnExit()
    {
        return 0;
    }
}
