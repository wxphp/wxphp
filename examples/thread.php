<?php
/**
 * @author Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * Small application for converting pdf documents to ready to use swf
 * documents for the web using viewers like flexpaper. This script relies
 * on the swftools pdf2swf utility, so you need to have it set on your path.
 * 
 * @note 
 * Parts of the GUI generated with wxFormBuilder
 * 
 */
 
//Load the wxPHP module
if(!extension_loaded('wxwidgets'))
{
	dl('wxwidgets.' . PHP_SHLIB_SUFFIX);
}

class DocumentConverter extends wxThread
{
    function __construct($parent)
    {
		parent::__construct(wxTHREAD_JOINABLE);
		
		$this->parent = $parent;
    }
    
    function SetDocuments($documents, $output_dir)
    {
		$this->documents = $documents;
		$this->output_dir = $output_dir;
	}

    function Entry()
    {
        $total = count($this->documents);
		$document = 0;
		
		foreach($this->documents as $input)
		{
			$path_array = explode("/", str_replace("\\", "/", $input));
			
			$file_name = $path_array[count($path_array)-1];
			
			$output = $this->output_dir . "/" . str_ireplace(".pdf", ".swf", $file_name);
			
			`pdf2swf "$input" -o "$output" -f -T 9 -t -s storeallcharacters -G`;
			
			$document++;
			
			$this->parent->m_status->SetValue(($document / $total) * 100);
		}
		
		$this->parent->onDocumentsConverted();
		
        return;
	}
}


/*
 * Class ConvertFrame
 */

class ConvertFrame extends wxFrame {
	
	function __construct( $parent=null ){
		
		parent::__construct ( $parent, wxID_ANY, "Simple PDF to SWF", wxDefaultPosition, new wxSize( 700,500 ), wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		$this->SetSizeHints( wxDefaultSize, wxDefaultSize );
		
		$mainSizer = new wxBoxSizer( wxHORIZONTAL );
		
		$leftSizer = new wxBoxSizer( wxVERTICAL );
		
		$this->fileNavigator = new wxGenericDirCtrl( $this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDIRCTRL_3D_INTERNAL|wxSUNKEN_BORDER, "PDF Files (*.pdf)|*.pdf", 0 );
		
		$this->fileNavigator->ShowHidden( false );
		$leftSizer->Add( $this->fileNavigator, 1, wxALL|wxEXPAND, 5 );
		
		
		$mainSizer->Add( $leftSizer, 1, wxEXPAND, 5 );
		
		$rightSizer = new wxBoxSizer( wxVERTICAL );
		
		$bSizer4 = new wxBoxSizer( wxHORIZONTAL );
		
		$this->m_lblDocumentsToConvert = new wxStaticText( $this, wxID_ANY, "Documents to convert:", wxDefaultPosition, wxDefaultSize, 0 );
		$this->m_lblDocumentsToConvert->Wrap( -1 );
		$bSizer4->Add( $this->m_lblDocumentsToConvert, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
		
		$this->m_clear = new wxButton( $this, wxID_ANY, "Clear List", wxDefaultPosition, wxDefaultSize, 0 );
		$bSizer4->Add( $this->m_clear, 0, wxALIGN_RIGHT|wxALL, 5 );
		
		
		$rightSizer->Add( $bSizer4, 0, wxEXPAND, 5 );
		
		$m_pdfListChoices = array();
		$this->m_pdfList = new wxCheckListBox( $this, wxID_ANY, wxDefaultPosition, wxDefaultSize, $m_pdfListChoices, 0 );
		$rightSizer->Add( $this->m_pdfList, 1, wxALL|wxEXPAND, 5 );
		
		$bSizer5 = new wxBoxSizer( wxHORIZONTAL );
		
		$this->m_lblOutputDir = new wxStaticText( $this, wxID_ANY, "Output:", wxDefaultPosition, wxDefaultSize, 0 );
		$this->m_lblOutputDir->Wrap( -1 );
		$bSizer5->Add( $this->m_lblOutputDir, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
		
		$this->m_outpurDir = new wxDirPickerCtrl( $this, wxID_ANY, wxEmptyString, "Select the output directory", wxDefaultPosition, wxDefaultSize, wxDIRP_DEFAULT_STYLE );
		$bSizer5->Add( $this->m_outpurDir, 1, wxALL|wxEXPAND, 5 );
		
		$this->m_convert = new wxButton( $this, wxID_ANY, "Convert All", wxDefaultPosition, wxDefaultSize, 0 );
		$bSizer5->Add( $this->m_convert, 0, wxALIGN_CENTER|wxALL, 5 );
		
		
		$rightSizer->Add( $bSizer5, 0, wxEXPAND, 5 );
		
		$this->m_status = new wxGauge( $this, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL );
		$rightSizer->Add( $this->m_status, 0, wxALL|wxEXPAND, 5 );
		
		
		$mainSizer->Add( $rightSizer, 1, wxEXPAND, 5 );
		
		
		$this->SetSizer( $mainSizer );
		$this->Layout();
		
		$this->Centre( wxBOTH );
		
		$this->converting = false;
		$this->m_timer = new wxTimer($this);
		
		$this->document_converter = new DocumentConverter($this);
		
		// Connect Events
		$this->fileNavigator->Connect( wxEVT_KEY_DOWN, array($this, "onFileNagivationKeyDown") );
		$this->fileNavigator->GetTreeCtrl()->Connect( wxEVT_LEFT_DCLICK, array($this, "onFileNavigationDClick") );
		$this->m_clear->Connect( wxEVT_COMMAND_BUTTON_CLICKED, array($this, "onClearClick") );
		$this->m_pdfList->Connect( wxEVT_COMMAND_CHECKLISTBOX_TOGGLED, array($this, "onPdfListItemToggled") );
		$this->m_convert->Connect( wxEVT_COMMAND_BUTTON_CLICKED, array($this, "onConvertClick") );
		$this->Connect(wxEVT_TIMER, array($this, "onTimer"));
	}
	
	
	function __destruct( ){
	}
	
	function AddFile()
	{
		if(is_file($this->fileNavigator->GetPath()) && "".$this->m_pdfList->FindString($this->fileNavigator->GetPath())."" == "-1")
		{
			$this->m_pdfList->InsertItems(array($this->fileNavigator->GetPath()), $this->m_pdfList->GetCount());
			$this->m_pdfList->Check($this->m_pdfList->GetCount()-1);
		}
	}
	
	function onTimer($event)
	{
		if(!$this->converting)
		{
			wxMessageBox("Documents converted!");
			
			$this->fileNavigator->Enable();
			$this->m_clear->Enable();
			$this->m_convert->Enable();
			$this->m_outpurDir->Enable();
				
			$this->m_pdfList->Clear();
			$this->m_status->SetValue(0);
			
			$this->m_timer->Stop();
		}
	}
	
	function onDocumentsConverted()
	{	
		$this->converting = false;
	}

	// Virtual event handlers, overide them in your derived class
	function onFileNagivationKeyDown( $event ){
		if($event->GetKeyCode() == WXK_RETURN)
		{
			$this->AddFile();
		}
	}
	
	function onFileNavigationDClick( $event ){
		$this->AddFile();
		
		$event->Skip();
	}
	
	function onClearClick( $event ){
		if(wxMessageBox("Are you sure you want to clear the added files?", "", wxYES_NO) == wxYES)
		{
			$this->m_pdfList->Set(array(), null);
		}
	}
	
	function onPdfListItemToggled( $event ){
		$this->m_pdfList->Delete($event->GetSelection());
	}
	
	function onConvertClick( $event ){
		if($this->m_pdfList->GetCount() == 0)
		{
			wxMessageBox("You need to add some files first");
		}
		else
		{
			$this->fileNavigator->Disable();
			$this->m_clear->Disable();
			$this->m_convert->Disable();
			$this->m_outpurDir->Disable();
			
			$total = $this->m_pdfList->GetCount();
			$documents = array();
			$output_dir = $this->m_outpurDir->GetPath();
			
			for($i=0; $i<$total; $i++)
			{
				$documents[] = $this->m_pdfList->GetString($i);
			}
			
			$this->converting = true;
			$this->m_timer->Start(500);
			
			$this->document_converter->SetDocuments($documents, $output_dir);
			$this->document_converter->Create();
			$this->document_converter->Run();
		}
	}
	
}

//Application initialization start point
class myApp extends wxApp 
{
	function OnInit()
	{
		$zs = new ConvertFrame();
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

$pdf2SwfApp = new myApp();

wxApp::SetInstance($pdf2SwfApp);
wxEntry();

?>
