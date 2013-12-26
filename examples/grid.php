<?php

//Load the wxPHP module
if(!extension_loaded('wxwidgets'))
{
    dl('wxwidgets.' . PHP_SHLIB_SUFFIX);
}
 
class wxGridButtonRenderer extends wxGridCellRenderer
{
    public function __construct($label)
    {
        $this->label = $label;
    }
    
    public function Draw ( wxGrid $grid, wxGridCellAttr $attr, wxDC $dc, wxRect $rect, $row, $col, $isSelected )
    {
        
        // fill the background
        $dc->SetBrush(new wxBrush(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNFACE)));
        $dc->DrawRectangle( $rect->GetX(), $rect->GetY(), $rect->GetWidth(), $rect->GetHeight());
 
        // draw a shaded rectangle to emulate a button
        $strength = 1;
        
        $pen = new wxPen(new wxColour(255,255,255), $strength);
        $dc->SetPen($pen);
        $dc->DrawLine($rect->GetLeft()+$strength-1, $rect->GetTop()+$strength-1, $rect->GetLeft()+$strength-1, $rect->GetBottom()-$strength+1);
        $dc->DrawLine($rect->GetLeft()+$strength-1, $rect->GetTop()+$strength-1, $rect->GetRight()-$strength, $rect->GetTop()+$strength-1);
        
        $pen = new wxPen(new wxColour(0,0,0), $strength);
        $dc->SetPen($pen);
        $dc->DrawLine($rect->GetRight()-$strength, $rect->GetTop(), $rect->GetRight()-$strength, $rect->GetBottom());
        $dc->DrawLine($rect->GetLeft(), $rect->GetBottom(), $rect->GetRight() - $strength, $rect->GetBottom());

        // draw the button-label
        $dc->SetBackgroundMode( wxPENSTYLE_TRANSPARENT );
        $dc->SetTextForeground( $attr->GetTextColour() );
        $dc->SetFont( $attr->GetFont() );
        $dc->DrawLabel( $this->label, $rect, wxALIGN_CENTER_VERTICAL | wxALIGN_CENTER_HORIZONTAL);
    }
}

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
        
        # Set renderer for last column
        $this->attr = new wxGridCellAttr();
        $this->attr->SetReadOnly(true);
        $this->attr->SetRenderer(new wxGridButtonRenderer("..."));
        $this->m_grid1->SetColAttr(4, $this->attr); 
        
        # Add grid left click event
        $this->m_grid1->Connect( wxEVT_GRID_CELL_LEFT_CLICK, array($this, "OnGridCellLeftClick") );
        
        
        $this->SetSizer( $bSizer1 );
        $this->Layout();
        
        $this->Centre( wxBOTH );
        
        $font = $this->GetFont();
        var_dump($font->GetFaceName());
    }
    
    function OnGridCellLeftClick($event)
    {
        if($event->GetCol() == 4)
            wxMessageBox("Row: " . $event->GetRow());
            
        $event->Skip();
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
