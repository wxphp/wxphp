<?php
/**
 * @author Mário Soares
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * Small script that shows how a wxPHP application is initialized
 * 
 */

//Load the wxPHP module
if(!extension_loaded('wxwidgets'))
{
	dl('wxwidgets.' . PHP_SHLIB_SUFFIX);
}

class mainFrame extends wxFrame
{
	function onQuit()
	{
		$this->Destroy();
	}
	
	function onAbout()
	{
		wxMessageBox("Welcome to wxPHP!!\nBased on wxWidgets 2.9.3\n\nThis is a minimal wxPHP sample!","About box...");
	}

	function mainFrame()
	{
		parent::__construct(null ,null,"Minimal wxPHP App", wxDefaultPosition, wxDefaultSize);
		
		$mb = new wxMenuBar();
		
		$mn = new wxMenu();
		$mn->Append(2,"E&xit","Quit this program");
		$mb->Append($mn,"&File");
		
		$mn = new wxMenu();
		$mn->AppendCheckItem(4,"&About...","Show about dialog");
		$mb->Append($mn,"&Help");
		
		$this->SetMenuBar($mb);
		
		$this->scite = new wxStyledTextCtrl($this);
		
		$sbar = $this->CreateStatusBar(2);
		$sbar->SetStatusText("Welcome to wxPHP...");
		
		$this->Connect(2, wxEVT_COMMAND_MENU_SELECTED,array($this,"onQuit"));
		$this->Connect(4, wxEVT_COMMAND_MENU_SELECTED,array($this,"onAbout"));
	}
}


class myApp extends wxApp 
{
	function OnInit()
	{
		global $mf;
		
		$mf = new mainFrame();
		$mf->Show();
		
		return 0;
	}
	
	function OnExit()
	{
		
		return 0;
	}
}

$xt = new myApp();
wxApp::SetInstance($xt);
wxEntry();	

?>
