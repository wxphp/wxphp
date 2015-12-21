<?php

/**
 * @author https://github.com/halfer
 *
 * @license This file is part of wxPHP, check the LICENSE file for information.
 *
 * @description This is a simple demonstration of the XRC resource loader system.
 *
 * Run this using:
 *
 *     /usr/bin/php -d extension=wxwidgets.so XRC/main.php
 *
 * For information generally on loading window definitions via XRC, read this:
 *
 * http://docs.wxwidgets.org/3.0/overview_xrc.html
 * 
 * The forms.fpb file is the source file for forms.xrc.xml, and while the XML file can be
 * edited directly, it makes more sense to use wxFormBuilder to edit and then export as XRC XML.
 * 
 * Note that wxFormBuilder 3.1.59-beta seems to have a bug where adding a wrap width to a static
 * text control is not reflected in the generated XRC. I am therefore setting it manually in
 * the code. Another way to do this is to write a script to inject <wrap>460</wrap> into the
 * xrc file, but it's easier to do it here.
 *
 * @todo Attach some event handlers
 * @todo Can spinners be auto-sized without being too wide (currently using a hard-coded
 *      width at present)
 * @todo Put in some more controls e.g. tabs
 * @todo Put in some more windows
 */

$app = new myApp();
wxApp::SetInstance($app);
wxEntry();

/**
 * Dialog windows don't seem to attract the "top level" window status that by default causes
 * a WX application to quit automatically when they are closed. Accordingly we trap this event
 * and exit manually
 */
class resourceDemoDialog extends wxDialog
{
    public function __construct()
    {
        parent::__construct();
        $this->Connect(wxEVT_CLOSE_WINDOW, array($this, "onWindowClose"));
    }

	public function onWindowClose(wxCloseEvent $event)
	{
        // Are there any wxWidgets tidy-up calls we need to make?
        exit();
    }
}

class myApp extends wxApp
{
    public function OnInit()
    {
        $resource = new wxXmlResource();
        $resource->InitAllHandlers();
        $resource->Load(__DIR__ . '/forms.xrc.xml');
        
        $frame = new resourceDemoDialog();
        $resource->LoadDialog($frame, NULL, 'frmOne');

        // Re-wrap and re-fit the text control - this gets the correct amount of vertical
        // size for the wrapped text and its borders
        $textCtrl = wxDynamicCast(
            $frame->FindWindow('staticHelp'),
            "wxStaticText"
        );
        $textCtrl->Wrap(460);

        $frame->Show();
        $frame->Fit();
    }
}
