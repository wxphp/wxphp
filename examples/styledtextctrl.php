<?php
/**
 * @author Mário Soares
 * @contributors Jefferson González
 * @references http://wiki.wxwidgets.org/WxStyledTextCtrl
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
		wxMessageBox("Welcome to wxPHP!!\nBased on wxWidgets 2.9.4 SVN\n\nThis is a minimal wxPHP sample!","About box...");
	}

	function mainFrame()
	{
		parent::__construct(null ,null, "Minimal wxPHP App", wxDefaultPosition, wxDefaultSize);
		
		$mb = new wxMenuBar();
		
		$mn = new wxMenu();
		$mn->Append(2,"E&xit","Quit this program");
		$mb->Append($mn,"&File");
		
		$mn = new wxMenu();
		$mn->AppendCheckItem(4,"&About...","Show about dialog");
		$mb->Append($mn,"&Help");
		
		$this->SetMenuBar($mb);
		
		$this->scite = new wxStyledTextCtrl($this);
		
		$this->scite->StyleClearAll();
		
		$this->scite->SetMarginWidth (0, 50);
        $this->scite->StyleSetForeground (wxSTC_STYLE_LINENUMBER, new wxColour (75, 75, 75) );
        $this->scite->StyleSetBackground (wxSTC_STYLE_LINENUMBER, new wxColour (220, 220, 220));
        $this->scite->SetMarginType (0, wxSTC_MARGIN_NUMBER);
       
        $this->scite->SetWrapMode (wxSTC_WRAP_WORD);
        
        $this->scite->SetText("<?php\n\n\$myvar = 1 + 2;\n\nprint 'Hello World';\n\n?>\n");
        
        $this->scite->SetStyleBits(7);
        
        $this->scite->SetLexer(wxSTC_LEX_PHPSCRIPT);
        
        $this->scite->StyleSetForeground (wxSTC_HPHP_DEFAULT,     new wxColour(0,0,0));
        $this->scite->StyleSetForeground (wxSTC_HPHP_HSTRING,     new wxColour(255,0,0));
        $this->scite->StyleSetForeground (wxSTC_HPHP_SIMPLESTRING,     new wxColour(255,0,0));
        $this->scite->StyleSetForeground (wxSTC_HPHP_WORD,           new wxColour(0,0,155));
        $this->scite->StyleSetForeground (wxSTC_HPHP_NUMBER,       new wxColour(0,150,0));
        $this->scite->StyleSetForeground (wxSTC_HPHP_VARIABLE,        new wxColour(0,0,150));
        $this->scite->StyleSetForeground (wxSTC_HPHP_COMMENT,          new wxColour(150,150,150));
        $this->scite->StyleSetForeground (wxSTC_HPHP_COMMENTLINE,          new wxColour(150,150,150));
        $this->scite->StyleSetForeground (wxSTC_HPHP_HSTRING_VARIABLE, new wxColour(0,0,150));
        $this->scite->StyleSetForeground (wxSTC_HPHP_OPERATOR,              new wxColour(0,150,0));

		
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
