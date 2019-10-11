<?php

class MyDialog extends wxDialog
{
    public function __construct()
    {
        parent::__construct(null, -1, 'Foobar', wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE);

        $gridSizer = new wxGridSizer(0, 2, 0, 0);

        $label = new wxStaticText($this, -1, 'label', wxDefaultPosition, wxDefaultSize, 0);
        $gridSizer->Add($label, 0, 0, 1);

        $button = new wxButton($this, wxID_ANY, 'ok', wxDefaultPosition, wxDefaultSize, 0);
        $gridSizer->Add($button, 0, 0, 2);

        $button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, array($this, '_onClick'));

        $this->SetSizer($gridSizer);
        $this->Layout();
    }

    public function _onClick($event)
    {
        echo 'Hallo Welt';
    }
}

$dialog = new MyDialog();
$dialog->ShowModal();
