<?php

dl('wxwidgets.so');

class MyDialog extends wxDialog
{
    public function __construct()
    {
        parent::__construct(null, -1, 'Foobar', new wxPoint(10, 10), new wxSize(100, 100), 0);

        $gridSizer = new wxGridSizer(0, 2, 0, 0);

        $label = new wxStaticText($this, -1, 'label', new wxPoint(-1, -1), new wxSize(-1, -1), 0);
        $gridSizer->Add($label);
        /*
                $textBox = new wxTextCtrl($this, -1, '', new wxPoint(-1, -1), new wxSize(-1, -1), 0);
                $gridSizer->Add($textBox, 0, 0, 5);*/

        $this->SetSizer($gridSizer);
        $this->Layout();
    }
}

$dialog = new MyDialog();
$dialog->ShowModal();
