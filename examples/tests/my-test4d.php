<?php

class MyDialog extends wxDialog
{
    public function __construct()
    {
        parent::__construct(null, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize,
            wxCAPTION | wxDIALOG_NO_PARENT | wxTAB_TRAVERSAL | wxCLOSE_BOX);

        $gridSizer = new wxGridSizer(1, 1, 0, 0);
        $gridBagSizer = new wxGridBagSizer(0, 0);
        $button = new wxButton($this, wxID_ANY, null, wxDefaultPosition, new wxSize(100, 100), 0);

        $bitmap = $this->getButtonIcon();
        $button->SetBitmap($bitmap);
        $button->Connect(wxEVT_BUTTON, array($this, 'onButtonClick'));

        $gridBagSizer->Add($button, new wxGBPosition(0, 0), new wxGBSpan(1, 1), wxALL, 10);
        $gridSizer->Add($gridBagSizer, 0, wxALL, 10);

        $this->SetSizer($gridSizer);
        $gridSizer->Fit($this);
    }

    private function getButtonIcon()
    {
        $iconSize = new wxSize(48, 48);
        $bitmapSize = new wxSize(120, 120);
        $iconPath = 'artwork/icon.png';

        // Load text and bitmap
        $label = "FooBar";
        $bitmap = new wxBitmap($iconPath, wxBITMAP_TYPE_PNG);

        // Convert bitmap to image for manipulation
        // Rescale the bitmap to $iconSize, then artificially resize the image to $bitmapSize
        $image = $bitmap->ConvertToImage();
        $image->Rescale($iconSize->GetWidth(), $iconSize->GetHeight());
        $image->Resize(new wxSize($bitmapSize->GetWidth(), $bitmapSize->GetHeight()),
            new wxPoint(($bitmapSize->GetWidth() - $iconSize->GetWidth()) / 2,
                ($bitmapSize->GetHeight() - $iconSize->GetHeight()) / 4));
        $bitmap = new wxBitmap($image);

        // Calculate text size and draw label into the bitmap
        // The 5 is a magic number to make it look better :/
        $dc = new wxMemoryDC($bitmap);
        $textSize = $dc->GetMultiLineTextExtent($label);
        $dc->DrawText($label, ($bitmapSize->GetWidth() - $textSize->GetWidth()) / 2,
            $bitmapSize->GetHeight() - $textSize->GetHeight() - 5);

        // Clear dc
        $dc->SelectObject(wxNullBitmap);

        return $bitmap;
    }

    private function getButtonIcon2($iconName)
    {
        $iconSize = new wxSize(64, 64);
        $bitmapSize = new wxSize(120, 120);
        $iconPath = "/opt/rangee/kommbox/web/icons/{$iconName}.png";

        // Load text and bitmap
        $label = $iconName;
        $bitmap = new wxBitmap($iconPath, wxBITMAP_TYPE_PNG);

        // Convert bitmap to image for manipulation
        // Rescale the bitmap to $iconSize, then artificially resize the image to $bitmapSize
        $image = $bitmap->ConvertToImage();
        $image->Rescale($iconSize->GetWidth(), $iconSize->GetHeight());
        $image->Resize(new wxSize($bitmapSize->GetWidth(), $bitmapSize->GetHeight()),
            new wxPoint(($bitmapSize->GetWidth() - $iconSize->GetWidth()) / 2,
                ($bitmapSize->GetHeight() - $iconSize->GetHeight()) / 4));
        $bitmap = new wxBitmap($image);

        // Calculate text size and draw label into the bitmap
        // The 5 is a magic number to make it look better :/
        $dc = new wxMemoryDC($bitmap);
        $textSize = $dc->GetMultiLineTextExtent($label);
        $dc->DrawText($label, ($bitmapSize->GetWidth() - $textSize->GetWidth()) / 2,
            $bitmapSize->GetHeight() - $textSize->GetHeight() - 5);

        // Clear dc
        $dc->SelectObject(wxNullBitmap);

        return $bitmap;
    }


    public function onButtonClick(wxCommandEvent $event)
    {
        $this->Close();
    }
}

$dialog = new MyDialog();
$dialog->ShowModal();
