<?php

/*
* PHP code generated with wxFormBuilder (version Jan  5 2012)
* http://www.wxformbuilder.org/
*
* PLEASE DO "NOT" EDIT THIS FILE!
*/

/*
 * Class LanChatFrame
 */

class LanChatFrame extends wxFrame {
	
	function __construct( $parent=null ){
		parent::__construct ( $parent, wxID_ANY, "wxPHP Lan Chat", wxDefaultPosition, new wxSize( 800,600 ), wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		$this->SetSizeHints( wxDefaultSize, wxDefaultSize );
		$this->m_mgr = new wxAuiManager();
		$this->m_mgr->SetManagedWindow( $this );
		
		$this->m_menubar = new wxMenuBar( 0 );
		$this->m_menuFile = new wxMenu();
		$this->m_menuConnect = new wxMenuItem( $this->m_menuFile, wxID_ANY, "Connect". "\t" . "Ctrl+C", wxEmptyString, wxITEM_NORMAL );
		$this->m_menuFile->Append( $this->m_menuConnect );
		
		$this->m_menuFile->AppendSeparator();
		
		$this->m_menuExit = new wxMenuItem( $this->m_menuFile, wxID_ANY, "Exit". "\t" . "Alt+F4", wxEmptyString, wxITEM_NORMAL );
		$this->m_menuFile->Append( $this->m_menuExit );
		
		$this->m_menubar->Append( $this->m_menuFile, "File" ); 
		
		$this->m_menuEdit = new wxMenu();
		$this->m_menuContacts = new wxMenuItem( $this->m_menuEdit, wxID_ANY, "Contacts". "\t" . "Ctrl+N", wxEmptyString, wxITEM_NORMAL );
		$this->m_menuEdit->Append( $this->m_menuContacts );
		
		$this->m_menuPreferences = new wxMenuItem( $this->m_menuEdit, wxID_ANY, "Preferences". "\t" . "Ctrl+P", wxEmptyString, wxITEM_NORMAL );
		$this->m_menuEdit->Append( $this->m_menuPreferences );
		
		$this->m_menubar->Append( $this->m_menuEdit, "Edit" ); 
		
		$this->m_meneHelp = new wxMenu();
		$this->m_menuAbout = new wxMenuItem( $this->m_meneHelp, wxID_ANY, "About". "\t" . "F1", wxEmptyString, wxITEM_NORMAL );
		$this->m_meneHelp->Append( $this->m_menuAbout );
		
		$this->m_menubar->Append( $this->m_meneHelp, "Help" ); 
		
		$this->SetMenuBar( $this->m_menubar );
		
		$this->mainPanel = new wxPanel( $this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
		$pane1 = new wxAuiPaneInfo();
		$pane1->Left()->CloseButton( false )->PaneBorder( false )->Dock()->Resizable()->FloatingSize( wxDefaultSize )->DockFixed( false )->CentrePane();
		$this->m_mgr->AddPane( $this->mainPanel,  $pane1);
		
		$leftSizer = new wxBoxSizer( wxVERTICAL );
		
		$this->m_messages = new wxTextCtrl( $this->mainPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_READONLY );
		$leftSizer->Add( $this->m_messages, 1, wxALL|wxEXPAND, 5 );
		
		$enviarSizer = new wxBoxSizer( wxHORIZONTAL );
		
		$this->m_message = new wxTextCtrl( $this->mainPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
		$enviarSizer->Add( $this->m_message, 1, wxALL, 5 );
		
		$this->m_send = new wxButton( $this->mainPanel, wxID_ANY, "Send", wxDefaultPosition, wxDefaultSize, 0 );
		$enviarSizer->Add( $this->m_send, 0, wxALL|wxEXPAND, 5 );
		
		
		$leftSizer->Add( $enviarSizer, 0, wxEXPAND, 5 );
		
		
		$this->mainPanel->SetSizer( $leftSizer );
		$this->mainPanel->Layout();
		$leftSizer->Fit( $this->mainPanel );
		$this->rightPanel = new wxPanel( $this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
		$this->rightPanel->SetMinSize( new wxSize( 200,100 ) );
		$pane2 = new wxAuiPaneInfo();
		$pane2->Right()->Caption( "Contacts" )->CloseButton( false )->Dock()->Resizable()->FloatingSize( wxDefaultSize )->DockFixed( false )->BottomDockable( false )->TopDockable( false )->LeftDockable( false )->RightDockable( false )->MinSize( new wxSize( 200,100 ) );
		
		$this->m_mgr->AddPane( $this->rightPanel, $pane2 );
		
		$bSizer2 = new wxBoxSizer( wxHORIZONTAL );
		
		$rightSizer = new wxBoxSizer( wxVERTICAL );
		
		$this->m_usersList = new wxTreeCtrl( $this->rightPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE );
		$this->m_usersList->SetMinSize( new wxSize( 200,-1 ) );
		
		$rightSizer->Add( $this->m_usersList, 1, wxALL|wxEXPAND, 5 );
		
		
		$bSizer2->Add( $rightSizer, 1, wxEXPAND, 5 );
		
		
		$this->rightPanel->SetSizer( $bSizer2 );
		$this->rightPanel->Layout();
		$bSizer2->Fit( $this->rightPanel );
		
		$this->m_mgr->Update();
		$this->Centre( wxBOTH );
		
		// Connect Events
		$this->Connect( $this->m_menuConnect->GetId(), wxEVT_COMMAND_MENU_SELECTED, array($this, "onMenuConnect") );
		$this->Connect( $this->m_menuExit->GetId(), wxEVT_COMMAND_MENU_SELECTED, array($this, "onMenuQuit") );
		$this->Connect( $this->m_menuPreferences->GetId(), wxEVT_COMMAND_MENU_SELECTED, array($this, "onMenuEditPreferences") );
		$this->Connect( $this->m_menuContacts->GetId(), wxEVT_COMMAND_MENU_SELECTED, array($this, "onMenuEditContacts") );
		$this->m_send->Connect( wxEVT_COMMAND_BUTTON_CLICKED, array($this, "onSendClick") );
		$this->m_usersList->Connect( wxEVT_COMMAND_TREE_ITEM_RIGHT_CLICK, array($this, "onPeerRightClick") );
	}
	
	
	function __destruct( ){
		$this->m_mgr->UnInit();
		
	}
	
	
	// Virtual event handlers, overide them in your derived class
	function onMenuConnect( $event ){
		$event->Skip();
	}
	
	function onMenuQuit( $event ){
		$event->Skip();
	}
	
	function onMenuEditPreferences( $event ){
			$event->Skip();
	}
	
	function onMenuEditContacts( $event ){
			$event->Skip();
	}
	
	function onSendClick( $event ){
		$event->Skip();
	}
	
	function onPeerRightClick( $event ){
		$event->Skip();
	}
	
}

/*
 * Class PreferencesDialog
 */

class PreferencesDialog extends wxDialog {
	
	function __construct( $parent=null ){
		parent::__construct( $parent, wxID_ANY, "Preferences", wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE );
		
		$this->SetSizeHints( new wxSize( 300,100 ), wxDefaultSize );
		
		$bSizer8 = new wxBoxSizer( wxVERTICAL );
		
		$bSizer9 = new wxBoxSizer( wxHORIZONTAL );
		
		$this->m_staticText1 = new wxStaticText( $this, wxID_ANY, "Name:", wxDefaultPosition, wxDefaultSize, 0 );
		$this->m_staticText1->Wrap( -1 );
		$bSizer9->Add( $this->m_staticText1, 0, wxALIGN_CENTER_VERTICAL, 5 );
		
		$this->m_name = new wxTextCtrl( $this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
		$bSizer9->Add( $this->m_name, 1, wxALL|wxEXPAND, 5 );
		
		
		$bSizer8->Add( $bSizer9, 1, wxEXPAND, 5 );
		
		$this->m_save = new wxButton( $this, wxID_ANY, "Save", wxDefaultPosition, wxDefaultSize, 0 );
		$this->m_save->SetDefault(); 
		$bSizer8->Add( $this->m_save, 0, wxALIGN_RIGHT|wxALL, 5 );
		
		
		$this->SetSizer( $bSizer8 );
		$this->Layout();
		$bSizer8->Fit( $this );
		
		$this->Centre( wxBOTH );
		
		// Connect Events
		$this->m_save->Connect( wxEVT_COMMAND_BUTTON_CLICKED, array($this, "onSaveClick") );
	}
	
	
	function __destruct( ){
	}
	
	
	// Virtual event handlers, overide them in your derived class
	function onSaveClick( $event ){
		$event->Skip();
	}
	
}

?>
