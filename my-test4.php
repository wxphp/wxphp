<?php

class MyDialog extends wxDialog
{
    public function __construct()
    {
        parent::__construct(null, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize,
            wxCAPTION | wxDIALOG_NO_PARENT | wxTAB_TRAVERSAL | wxCLOSE_BOX);

        $gridSizer = new wxGridSizer(1, 1, 0, 0);
        $button = new wxButton($this, wxID_ANY, null, wxDefaultPosition, new wxSize(100, 100), 0);

        $bitmap = $this->getButtonIcon();
        $button->SetBitmap($bitmap);

        $button->Connect(wxEVT_BUTTON, array($this, 'onButtonClick'));
        $gridSizer->Add($button, 0, wxALL, 10);
        $this->SetSizer($gridSizer);
    }

    private function getButtonIcon()
    {
        $originalBitmap = new wxBitmap('artwork/icon.png', wxBITMAP_TYPE_PNG);

        $image = $originalBitmap->ConvertToImage();
        $image->Resize(new wxSize(100, 100), new wxPoint(0, 0));
        $modifiedBitmap = new wxBitmap($image);

        $dc = new wxMemoryDC($modifiedBitmap);
        $dc->SelectObject(wxNullBitmap);

        return $modifiedBitmap;
    }

    public function onButtonClick(wxCommandEvent $event)
    {
        $this->Close();
    }
}

$dialog = new MyDialog();
$dialog->ShowModal();
