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
