<?php

//Load the wxPHP module
if(!extension_loaded('wxwidgets'))
{
	dl('wxwidgets.' . PHP_SHLIB_SUFFIX);
}

/*
* PHP code generated with wxFormBuilder (version Jan  5 2012)
* http://www.wxformbuilder.org/
*
* PLEASE DO "NOT" EDIT THIS FILE!
*/

/*
 * Class MyFrame1
 */

class MyFrame1 extends wxFrame {
	
	function __construct( $parent=null ){
		parent::__construct ( $parent, wxID_ANY, wxEmptyString, wxDefaultPosition, new wxSize( 500,300 ), wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		$this->SetSizeHints( wxDefaultSize, wxDefaultSize );
		
		$bSizer1 = new wxBoxSizer( wxVERTICAL );
		
		$this->m_webView = wxWebView::NewMethod( $this, wxID_ANY, "http://wxphp.org/" );
		
		$bSizer1->Add( $this->m_webView, 1, wxALL|wxEXPAND, 5 );
		
		
		$this->SetSizer( $bSizer1 );
		$this->Layout();
		
		$this->Centre( wxBOTH );
	}
	
	
	function __destruct( ){
	}
	
}

//Application initialization start point
class myApp extends wxApp 
{
	function OnInit()
	{
		$zs = new MyFrame1();
		$zs->Show();
		$zs->Maximize();
		
		$this->frm = $zs;
		
		return true;
	}
	
	function OnExit()
	{
		return 0;
	}
}

wxInitAllImageHandlers();

$gridApp = new myApp();

wxApp::SetInstance($gridApp);
wxEntry();

?>
