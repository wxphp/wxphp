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
 * @todo If resizeable is turned off, I often get crashes on resize - wxPHP issue? I have
 *       disabled this control for now, but readers can re-enable it if they wish
 * @todo Repeated clicking on the gripper tickbox for various panes results eventually in a
 *       wxPHP segmentation fault - I expect this would be less of a problem if pane updates
 *       were done in a better fashion (see pane.php:onPaneTickBoxChange) but this issue
 *       would be good to fix C-side anyway
 */

namespace WxPhpExamples\AUI;

require_once __DIR__ . '/app.php';
require_once __DIR__ . '/demo.php';

// Load the main controller and its blocks of logic
require_once __DIR__ . '/manager.php';
require_once __DIR__ . '/pane.php';
require_once __DIR__ . '/controller.php';

$app = new myApp();
\wxApp::SetInstance($app);
wxEntry();
