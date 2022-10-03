<?php

class CredentialsDialog extends wxDialog
{
    const MAGIC_NUMBER = 41;

    protected $usernameTextBox;
    protected $passwordTextBox;
    protected $domainTextBox;
    protected $savePasswordCheckBox;
    protected $submitButton;
    protected $cancelButton;
    protected $showDomainField;
    protected $allowPasswordSave;
    protected $allowCancel;
    protected $domain;
    protected $result;

    public function __construct(
        $title,
        $showDomainField = true,
        $allowPasswordSave = false
    ) {
        parent::__construct(null, wxID_ANY, $title, wxDefaultPosition, wxDefaultSize,
            wxDEFAULT_DIALOG_STYLE | wxSTAY_ON_TOP);

        $this->showDomainField = $showDomainField;
        $this->allowPasswordSave = $allowPasswordSave;
        $this->allowCancel = true;
        $this->result = 'result';

        $this->constructDialog();
    }

    /**
     * Construct the dialog with wxPHP
     * The code has been generated with wxFormBuilder
     */
    protected function constructDialog()
    {
        // Set window size
        $windowSize = new wxSize(350, 170);
        if ($this->showDomainField === true) {
            $windowSize->SetHeight($windowSize->GetHeight() + 40);
        }
        if ($this->allowPasswordSave === true) {
            $windowSize->SetHeight($windowSize->GetHeight() + 20);
        }
        $this->SetSize($windowSize);

        // Grid sizer
        $gridSizer = new wxGridSizer(0, 2, 0, 0);

        // Username label
        $usernameLabel = new wxStaticText($this, wxID_ANY, 'username', wxDefaultPosition,
            wxDefaultSize, 0);
        $usernameLabel->Wrap(-1);
        $gridSizer->Add($usernameLabel, 0, wxALL | wxALIGN_CENTER_VERTICAL | wxALIGN_RIGHT, 5);

        // Username textbox
        $this->usernameTextBox = new wxTextCtrl($this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
        $gridSizer->Add($this->usernameTextBox, 0,
            wxALL | wxALIGN_CENTER_VERTICAL | wxALIGN_CENTER_HORIZONTAL | wxEXPAND, 5);
        $this->usernameTextBox->Connect(wxEVT_KEY_DOWN, array($this, '_keyEventHandler'));

        // Password label
        $passwordLabel = new wxStaticText($this, wxID_ANY, 'password', wxDefaultPosition,
            wxDefaultSize, 0);
        $passwordLabel->Wrap(-1);
        $gridSizer->Add($passwordLabel, 0, wxALL | wxALIGN_CENTER_VERTICAL | wxALIGN_RIGHT, 5);

        // Password textbox
        $this->passwordTextBox = new wxTextCtrl($this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize,
            wxTE_PASSWORD);
        $gridSizer->Add($this->passwordTextBox, 0,
            wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL | wxALIGN_CENTER_HORIZONTAL, 5);
        $this->passwordTextBox->Connect(wxEVT_KEY_DOWN, array($this, '_keyEventHandler'));

        if ($this->showDomainField === true) {
            // Domain label
            $domainLabel = new wxStaticText($this, wxID_ANY, 'domain', wxDefaultPosition,
                wxDefaultSize, 0);
            $domainLabel->Wrap(-1);
            $gridSizer->Add($domainLabel, 0, wxALL | wxALIGN_CENTER_VERTICAL | wxALIGN_RIGHT, 5);

            // Domain textbox
            $this->domainTextBox = new wxTextCtrl($this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize,
                0);
            $gridSizer->Add($this->domainTextBox, 0,
                wxALL | wxALIGN_CENTER_VERTICAL | wxALIGN_CENTER_HORIZONTAL | wxEXPAND, 5);
            $this->domainTextBox->Connect(wxEVT_KEY_DOWN, array($this, '_keyEventHandler'));
        }

        if ($this->allowPasswordSave === true) {
            // Static line (for aesthetics)
            $staticLine = new wxStaticLine($this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);
            $gridSizer->Add($staticLine, 0, wxEXPAND | wxALL, 5);

            // Save password checkbox
            $this->savePasswordCheckBox = new wxCheckBox($this, wxID_ANY, 'savePassword',
                wxDefaultPosition,
                wxDefaultSize, 0);
            $gridSizer->Add($this->savePasswordCheckBox, 0, wxALL | wxALIGN_CENTER_VERTICAL | wxALIGN_CENTER_HORIZONTAL,
                5);
            $this->savePasswordCheckBox->Connect(wxEVT_KEY_DOWN, array($this, '_keyEventHandler'));
        }

        // OK button
        $this->submitButton = new wxButton($this, wxID_ANY, 'ok', wxDefaultPosition,
            wxDefaultSize, 0);
        $gridSizer->Add($this->submitButton, 0, wxALL | wxALIGN_CENTER_VERTICAL | wxALIGN_CENTER_HORIZONTAL, 5);
        $this->submitButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, array($this, '_submitEventHandler'));

        if ($this->allowCancel) {
            // Cancel button
            $this->cancelButton = new wxButton($this, wxID_ANY, 'cancel', wxDefaultPosition,
                wxDefaultSize, 0);
            $gridSizer->Add($this->cancelButton, 0, wxALL | wxALIGN_CENTER_VERTICAL | wxALIGN_CENTER_HORIZONTAL, 5);
            $this->cancelButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, array($this, '_cancelEventHandler'));
        }

        $this->Connect(wxEVT_CLOSE_WINDOW, array($this, '_closeEventHandler'));

        // Layout everything
        $this->SetSizer($gridSizer);
        $this->Layout();
    }

    /**
     * Show the dialog and return a CredentialsDialogResult when done
     *
     * @return CredentialsDialogResult
     */
    public function show()
    {
        $this->ShowModal();

        return $this->result;
    }

    /**
     * Set the usernameTextBox value to the given username and set the focus to the passwordTextBox
     *
     * @param $username
     *
     * @return $this
     */
    public function setUsername($username)
    {
        if (!empty($username)) {
            $this->usernameTextBox->SetValue($username);
            $this->passwordTextBox->SetFocus();
        }

        return $this;
    }

    /**
     * Set the domainTextBox to the given domain, or set the domain private variable if the domainfield is supposed to
     * be hidden
     *
     * @param $domain
     *
     * @return $this
     */
    public function setDomain($domain)
    {
        if (!empty($domain)) {
            if ($this->showDomainField) {
                $this->domainTextBox->SetValue($domain);
            } else {
                $this->domain = $domain;
            }
        }

        return $this;
    }

    public function _keyEventHandler($event)
    {
        $keyCode = $event->GetKeyCode();

        switch ($keyCode) {
            case 13: // Enter
            case 370: // Num-Enter
                $this->_submitEventHandler(null);
                break;

            case 27: // Esc
                $this->_cancelEventHandler(null);
                break;

            default:
                $event->Skip();
                break;
        }
    }

    /**
     * Handle click on the submit button
     *
     * @param $event
     */
    public function _submitEventHandler($event)
    {
        $this->result = 'result';

        $this->Close(false);
    }

    /**
     * Handle click on the cancel button
     *
     * @param $event
     */
    public function _cancelEventHandler($event)
    {
        if ($this->allowCancel) {
            $this->result = 'result';
            $this->Close(false);
        } else {
            $event->Cancel();
        }
    }

    /**
     * Handle close requests to the dialog
     *
     * @param $event
     */
    public function _closeEventHandler($event)
    {
        if (!$this->allowCancel) {
            $event->Veto();
        } else {
            $this->Destroy();
        }
    }
}

$dialog = new CredentialsDialog('Foo', true, true);
$result = $dialog->show();

exit(42);
