<?php 

/**
 * Define Text Drop Target class
 */
class TextDropTarget extends wxTextDropTarget
{
    public $obj;
    
    function __construct($obj)
    {
        parent::__construct();
        
        $this->obj = $obj;
    }
   
    public function OnDropText($x, $y, $data)
    {
        $this->obj->Clear();
        $this->obj->WriteText($data);
    }
}

/**
 * Define File Drop Target class
 */ 
class FileDropTarget extends wxFileDropTarget
{
    public $obj;
    
    function __construct($obj)
    {
        parent::__construct();
        
        $this->obj = $obj;
    }
   
    public function OnDropFiles($x, $y, $filenames)
    {
        $this->obj->Clear();
        
        $files = "";
        foreach($filenames as $file)
        {
            $files .= $file . "\n";
        }
        
        $this->obj->WriteText($files);
    }
}

/**
 * Main window with 2 drop targets.
 */
class MainWindow extends wxFrame {
	
	function __construct( $parent=null ){
		parent::__construct ( $parent, wxID_ANY, "Drag and Drop Sample", wxDefaultPosition, new wxSize( 500,300 ), wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		$this->SetSizeHints( wxDefaultSize, wxDefaultSize );
		
		$bSizer1 = new wxBoxSizer( wxVERTICAL );
		
		$bSizer4 = new wxBoxSizer( wxVERTICAL );
		
		$this->m_staticText1 = new wxStaticText( $this, wxID_ANY, "Drop Text:", wxDefaultPosition, wxDefaultSize, 0 );
		$this->m_staticText1->Wrap( -1 );
		$bSizer4->Add( $this->m_staticText1, 0, wxALL, 5 );
		
		
		$bSizer1->Add( $bSizer4, 0, wxEXPAND, 5 );
		
		$bSizer2 = new wxBoxSizer( wxVERTICAL );
		
		$this->m_textCtrl1 = new wxTextCtrl( $this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxTE_MULTILINE );
		$bSizer2->Add( $this->m_textCtrl1, 1, wxALL|wxEXPAND, 5 );
		
		
		$bSizer1->Add( $bSizer2, 1, wxEXPAND, 5 );
		
		$bSizer41 = new wxBoxSizer( wxVERTICAL );
		
		$this->m_staticText11 = new wxStaticText( $this, wxID_ANY, "Drop Files:", wxDefaultPosition, wxDefaultSize, 0 );
		$this->m_staticText11->Wrap( -1 );
		$bSizer41->Add( $this->m_staticText11, 0, wxALL, 5 );
		
		
		$bSizer1->Add( $bSizer41, 0, wxEXPAND, 5 );
		
		$bSizer21 = new wxBoxSizer( wxVERTICAL );
		
		$this->m_textCtrl11 = new wxTextCtrl( $this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxTE_MULTILINE|wxTE_READONLY );
		$bSizer21->Add( $this->m_textCtrl11, 1, wxALL|wxEXPAND, 5 );
		
		
		$bSizer1->Add( $bSizer21, 1, wxEXPAND, 5 );
		
		
		$this->SetSizer( $bSizer1 );
		$this->Layout();
		$this->m_menubar1 = new wxMenuBar( 0 );
		$this->m_menu1 = new wxMenu();
		$this->m_menuItem1 = new wxMenuItem( $this->m_menu1, wxID_ANY, "&Quit", wxEmptyString, wxITEM_NORMAL );
		$this->m_menu1->Append( $this->m_menuItem1 );
		
		$this->m_menubar1->Append( $this->m_menu1, "&File" ); 
		
		$this->SetMenuBar( $this->m_menubar1 );
		
		
		$this->Centre( wxBOTH );
        
        // Drag stuff
        $dt2 = new TextDropTarget($this->m_textCtrl1);
        $this->m_textCtrl1->SetDropTarget($dt2);
        
        $dt3 = new FileDropTarget($this->m_textCtrl11);
        $this->m_textCtrl11->SetDropTarget($dt3);
		
		// Connect Events
		$this->Connect( $this->m_menuItem1->GetId(), wxEVT_COMMAND_MENU_SELECTED, array($this, "CloseWindow") );
	}
	
	function CloseWindow( $event ){
		$this->Close();
	}
	
}

$window = new MainWindow();
$window->Show();
wxEntry();
