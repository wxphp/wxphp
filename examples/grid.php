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
		
		$this->m_grid1 = new wxGrid( $this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
		
		# Grid
		$this->m_grid1->CreateGrid( 5, 5 );
		$this->m_grid1->EnableEditing( true );
		$this->m_grid1->EnableGridLines( true );
		$this->m_grid1->EnableDragGridSize( false );
		$this->m_grid1->SetMargins( 0, 0 );
		
		# Columns
		$this->m_grid1->EnableDragColMove( false );
		$this->m_grid1->EnableDragColSize( true );
		$this->m_grid1->SetColLabelSize( 30 );
		$this->m_grid1->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
		
		# Rows
		$this->m_grid1->EnableDragRowSize( true );
		$this->m_grid1->SetRowLabelSize( 80 );
		$this->m_grid1->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
		
		# Label Appearance
		
		# Cell Defaults
		$this->m_grid1->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
		$bSizer1->Add( $this->m_grid1, 1, wxALL|wxEXPAND, 5 );
		
		
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
