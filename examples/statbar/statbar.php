<?php
/**
 * wxStatusBar sample
 *
 * Ported from wxWidgets to wxPHP by Thomas Sahlin
 *
 * Original C++ wxWidgets version by Vadim Zeitlin
 */

// Load the wxPHP module

if (!extension_loaded('wxwidgets'))
  dl('wxwidgets.' . PHP_SHLIB_SUFFIX);

const SAMPLE_DIALOGS_TITLE  = "wxWidgets statbar sample";
const BITMAP_SIZE_X         = 32;
const BITMAP_SIZE_Y         = 15;

// IDs for the controls and the menu commands

const StatusBar_Quit    = wxID_EXIT;
const StatusBar_About   = wxID_ABOUT;

$ids = array(
  'StatusBar_SetFields',
  'StatusBar_SetField',
  'StatusBar_SetText',
  'StatusBar_PushText',
  'StatusBar_PopText',
  'StatusBar_SetFont',
  'StatusBar_ResetFieldsWidth',
  'StatusBar_ShowFieldsRect',

  'StatusBar_Recreate',
  'StatusBar_Toggle',
  'StatusBar_Checkbox',
  'StatusBar_SetPaneStyle',
  'StatusBar_SetPaneStyleNormal',
  'StatusBar_SetPaneStyleFlat',
  'StatusBar_SetPaneStyleRaised',

  'StatusBar_SetStyleSizeGrip',
  'StatusBar_SetStyleEllipsizeStart',
  'StatusBar_SetStyleEllipsizeMiddle',
  'StatusBar_SetStyleEllipsizeEnd',
  'StatusBar_SetStyleShowTips'
  );

foreach ($ids as $i => $name)
  define($name, wxID_HIGHEST + $i + 1);

// Define a new application type, each program should derive a class from wxApp
class MyApp extends wxApp
{
  public function OnExit()
  {
  }

  public function OnInit()
  {
    wxInitAllImageHandlers();

    // create the main application window
    $frame = new MyFrame("wxStatusBar sample",
                         new wxPoint(50, 50), new wxSize(450, 340));

    // and show it (the frames, unlike simple controls, are not shown when
    // created initially)
    $frame->Show();
  }
}

// A custom status bar which contains controls, icons
class MyStatusBar extends wxStatusBar
{
  const Field_Text              = 0;
  const Field_Checkbox          = 1;
  const Field_Bitmap            = 2;
  const Field_NumLockIndicator  = 3;
  const Field_Clock             = 4;
  const Field_CapsLockIndicator = 5;
  const Field_Max               = 6;

  public function __construct($parent, $style = wxSTB_DEFAULT_STYLE)
  {
    parent::__construct($parent, wxID_ANY, $style, "MyStatusBar");

    $this->timer = new wxTimer($this);

    // compute the size needed for num lock indicator pane
    $dc = new wxClientDC($this);
    $sizeNumLock = $dc->GetTextExtent(self::$numlockIndicators[0]);
    $sizeNumLock->IncTo($dc->GetTextExtent(self::$numlockIndicators[1]));

    $widths = array();
    $widths[self::Field_Text] = -1; // growable
    $widths[self::Field_Checkbox] = 150;
    $widths[self::Field_Bitmap] = BITMAP_SIZE_X;
    $widths[self::Field_NumLockIndicator] = $sizeNumLock->GetWidth();
    $widths[self::Field_Clock] = 100;
    $widths[self::Field_CapsLockIndicator] = $dc->GetTextExtent(self::$capslockIndicators[1])->GetWidth();

    $this->SetFieldsCount(self::Field_Max);
    $this->SetStatusWidths(self::Field_Max, $widths);

    $this->checkbox = new wxCheckBox($this, StatusBar_Checkbox, "&Toggle clock");
    $this->checkbox->SetValue(true);

    /*
     * TODO: This does not work
    $this->statbmp = new wxStaticBitmap($this, wxID_ANY,
      new wxIcon(__DIR__ . '/green.xpm', wxBITMAP_TYPE_XPM));
    */

    $this->statbmp = new wxStaticBitmap($this, wxID_ANY,
      new wxBitmap(__DIR__ . '/green.xpm', wxBITMAP_TYPE_XPM));

    $this->timer->Start(1000);

    $height = $this->statbmp->GetBestSize()->GetHeight();
    $height = max($height, $this->checkbox->GetBestSize()->GetHeight());

    $this->SetMinHeight($height);

    $this->UpdateClock();

    $this->Connect(wxEVT_SIZE, array($this, 'OnSize'));
    $this->Connect(StatusBar_Checkbox, wxEVT_COMMAND_CHECKBOX_CLICKED, array($this, 'OnToggleClock'));
    $this->Connect(wxID_ANY, wxEVT_TIMER, array($this, 'OnTimer'));
    $this->Connect(wxEVT_IDLE, array($this, 'OnIdle'));
  }

  public function Destroy()
  {
    if ($this->timer->IsRunning())
      $this->timer->Stop();

    parent::Destroy();
  }

  public function UpdateClock()
  {
    // TODO: wxDateTime does not exist
    // $this->SetStatusText(wxDateTime::Now()->FormatTime(), self::Field_Clock);

    $this->SetStatusText(date('H:i:s'), self::Field_Clock);
  }

  public function OnTimer()
  {
    $this->UpdateClock();
  }

  public function OnSize($event)
  {
    if (!$this->checkbox)
      return;

    $rect = new wxRect();

    if (!$this->GetFieldRect(self::Field_Checkbox, $rect))
    {
      $event->Skip();
      return;
    }

    $rectCheck = $rect;
    $rectCheck->Deflate(2);
    $this->checkbox->SetSize($rectCheck);

    $this->GetFieldRect(self::Field_Bitmap, $rect);
    $size = $this->statbmp->GetSize();

    $this->statbmp->Move($rect->x + ($rect->width - $size->GetWidth()) / 2,
                         $rect->y + ($rect->height - $size->GetHeight()) / 2);

    $event->Skip();
  }

  public function OnToggleClock()
  {
    $this->DoToggle();
  }

  public function OnIdle($event)
  {
    $this->SetStatusText(self::$numlockIndicators[wxGetKeyState(WXK_NUMLOCK)],
                         self::Field_NumLockIndicator);
    $this->SetStatusText(self::$capslockIndicators[wxGetKeyState(WXK_CAPITAL)],
                         self::Field_CapsLockIndicator);

    $event->Skip();
  }

  private function DoToggle()
  {
    if ($this->checkbox->GetValue())
    {
      $this->timer->Start(1000);

      $this->statbmp->SetIcon(
        new wxIcon(__DIR__ . '/green.xpm', wxBITMAP_TYPE_XPM)
        );

      $this->UpdateClock();
    }
    else // don't show clock
    {
      $this->timer->Stop();

      $this->statbmp->SetIcon(
        new wxIcon(__DIR__ . '/red.xpm', wxBITMAP_TYPE_XPM)
        );

      $this->SetStatusText("", self::Field_Clock);
    }
  }

  private $timer;
  private $checkbox;
  private $statbmp;

  private static $numlockIndicators = array("OFF", "NUM");
  private static $capslockIndicators = array("", "CAPS");
}

class MyFrame extends wxFrame
{
  const StatBar_Default   = 1;
  const StatBar_Custom    = 2;
  const StatBar_Max       = 3;

  public function __construct($title, $pos, $size)
  {
    parent::__construct(null, wxID_ANY, $title, $pos, $size);

    $this->SetIcon(new wxIcon(__DIR__ . '/sample.xpm', wxBITMAP_TYPE_XPM));

    $this->statbarPaneStyle = wxSB_NORMAL;
    $this->field = 1;

    // create a menu bar
    $menuFile = new wxMenu();
    $menuFile->Append(StatusBar_Quit, "E&xit\tAlt-X",
                      "Quit this program");

    $statbarMenu = new wxMenu();

    $statbarStyleMenu = new wxMenu();
    $statbarStyleMenu->Append(StatusBar_SetStyleSizeGrip, "wxSTB_SIZE_GRIP",
                              "Toggles the wxSTB_SIZE_GRIP style", true);
    $statbarStyleMenu->Append(StatusBar_SetStyleShowTips, "wxSTB_SHOW_TIPS",
                              "Toggles the wxSTB_SHOW_TIPS style", true);
    $statbarStyleMenu->AppendSeparator();
    $statbarStyleMenu->AppendCheckItem(StatusBar_SetStyleEllipsizeStart,
                                       "wxSTB_ELLIPSIZE_START",
                                       "Toggle wxSTB_ELLIPSIZE_START style");
    $statbarStyleMenu->AppendCheckItem(StatusBar_SetStyleEllipsizeMiddle,
                                       "wxSTB_ELLIPSIZE_MIDDLE",
                                       "Toggle wxSTB_ELLIPSIZE_MIDDLE style");
    $statbarStyleMenu->AppendCheckItem(StatusBar_SetStyleEllipsizeEnd,
                                       "wxSTB_ELLIPSIZE_END",
                                       "Toggle wxSTB_ELLIPSIZE_END style");
    $statbarMenu->Append(StatusBar_SetPaneStyle, "Status bar style",
                         $statbarStyleMenu);
    $statbarMenu->AppendSeparator();

    $statbarMenu->Append(StatusBar_SetField, "Set active field &number\tCtrl-N",
                         "Set the number of field used by the next commands.");
    $statbarMenu->Append(StatusBar_SetText, "Set field &text\tCtrl-T",
                         "Set the text of the selected field.");
    $statbarMenu->Append(StatusBar_PushText, "P&ush field text\tCtrl-P",
                         "Push a message on top the selected field.");
    $statbarMenu->Append(StatusBar_PopText, "&Pop field text\tShift-Ctrl-P",
                         "Restore the previous contents of the selected field.");
    $statbarMenu->AppendSeparator();

    $statbarMenu->Append(StatusBar_SetFields, "&Set field count\tCtrl-C",
                         "Set the number of status bar fields");
    $statbarMenu->Append(StatusBar_SetFont, "&Set field font\tCtrl-F",
                         "Set the font to use for status bar fields");

    $statbarPaneStyleMenu = new wxMenu();
    $statbarPaneStyleMenu->AppendCheckItem
        (
            StatusBar_SetPaneStyleNormal,
            "&Normal",
            "Sets the style of the first field to normal (sunken) look"
        );
    $statbarPaneStyleMenu->AppendCheckItem
        (
            StatusBar_SetPaneStyleFlat,
            "&Flat",
            "Sets the style of the first field to flat look"
        );
    $statbarPaneStyleMenu->AppendCheckItem
        (
            StatusBar_SetPaneStyleRaised,
            "&Raised",
            "Sets the style of the first field to raised look"
        );
    $statbarMenu->Append(StatusBar_SetPaneStyle, "Field style",
                         $statbarPaneStyleMenu);

    $statbarMenu->Append(StatusBar_ResetFieldsWidth, "Reset field widths",
                         "Sets all fields to the same width");
    $statbarMenu->Append(StatusBar_ShowFieldsRect,
                         "Sho&w field rectangles\tCtrl-W",
                         "Visually show field rectangles");
    $statbarMenu->AppendSeparator();

    $statbarMenu->AppendCheckItem(StatusBar_Toggle, "&Toggle Status Bar",
                                  "Toggle the status bar display");
    $statbarMenu->Append(StatusBar_Recreate, "&Recreate\tCtrl-R",
                         "Toggle status bar format");

    $helpMenu = new wxMenu();
    $helpMenu->Append(StatusBar_About, "&About\tCtrl-A",
                      "Show about dialog");

    // now append the freshly created menu to the menu bar...
    $menuBar = new wxMenuBar();
    $menuBar->Append($menuFile, "&File");
    $menuBar->Append($statbarMenu, "&Status bar");
    $menuBar->Append($helpMenu, "&Help");

    // ... and attach this menu bar to the frame
    $this->SetMenuBar($menuBar);

    // create default status bar to start with
    $this->DoCreateStatusBar(self::StatBar_Default, wxSTB_DEFAULT_STYLE);
    $this->SetStatusText("Welcome to wxWidgets!");

    $this->Connect(StatusBar_Quit, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnQuit'));
    $this->Connect(StatusBar_SetFields, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnSetStatusFields'));
    $this->Connect(StatusBar_SetField, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnSetStatusField'));
    $this->Connect(StatusBar_SetText, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnSetStatusText'));
    $this->Connect(StatusBar_PushText, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnPushStatusText'));
    $this->Connect(StatusBar_PopText, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnPopStatusText'));
    $this->Connect(StatusBar_SetFont, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnSetStatusFont'));
    $this->Connect(StatusBar_ResetFieldsWidth, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnResetFieldsWidth'));
    $this->Connect(StatusBar_ShowFieldsRect, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnShowFieldsRect'));
    $this->Connect(StatusBar_Recreate, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnRecreateStatusBar'));
    $this->Connect(StatusBar_About, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnAbout'));
    $this->Connect(StatusBar_Toggle, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnStatusBarToggle'));
    $this->Connect(StatusBar_SetPaneStyleNormal, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnSetPaneStyle'));
    $this->Connect(StatusBar_SetPaneStyleFlat, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnSetPaneStyle'));
    $this->Connect(StatusBar_SetPaneStyleRaised, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnSetPaneStyle'));

    $this->Connect(StatusBar_SetStyleSizeGrip, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnSetStyle'));
    $this->Connect(StatusBar_SetStyleEllipsizeStart, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnSetStyle'));
    $this->Connect(StatusBar_SetStyleEllipsizeMiddle, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnSetStyle'));
    $this->Connect(StatusBar_SetStyleEllipsizeEnd, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnSetStyle'));
    $this->Connect(StatusBar_SetStyleShowTips, wxEVT_COMMAND_MENU_SELECTED,
      array($this, 'OnSetStyle'));

    $this->Connect(StatusBar_SetFields, StatusBar_ResetFieldsWidth,
      wxEVT_UPDATE_UI, array($this, 'OnUpdateForDefaultStatusbar'));
    $this->Connect(StatusBar_Toggle, wxEVT_UPDATE_UI,
      array($this, "OnUpdateStatusBarToggle"));
    $this->Connect(StatusBar_SetPaneStyleNormal, StatusBar_SetPaneStyleRaised,
      wxEVT_UPDATE_UI, array($this, 'OnUpdateSetPaneStyle'));
    $this->Connect(StatusBar_SetStyleSizeGrip, StatusBar_SetStyleShowTips,
      wxEVT_UPDATE_UI, array($this, 'OnUpdateSetStyle'));
  }

  public function OnQuit()
  {
    $this->Close(true);
  }

  public function OnAbout()
  {
    $dlg = new MyAboutDialog($this);
    $dlg->ShowModal();
  }

  public function OnSetStatusField()
  {
    $sb = $this->GetStatusBar();

    if (!$sb)
      return;

    $rc = wxGetNumberFromUser
          (
            "Configure the field index to be used by the set, push " .
            "and pop text commands in the menu.\n" .
            "\n" .
            "0 corresponds to the first field, 1 to the second one " .
            "and so on.",
            "Field &index:",
            SAMPLE_DIALOGS_TITLE,
            $this->field,
            0,
            $sb->GetFieldsCount() - 1
          );

    if ($rc == -1)
      return;

    $this->field = $rc;

    wxLogStatus("Status bar text will be set for field #%d", $this->field);
  }

  public function OnSetStatusText()
  {
    $sb = $this->GetStatusBar();

    if (!$sb)
      return;

    $txt =  wxGetTextFromUser
            (
              sprintf("Enter the text from for the field #%d", $this->field),
              SAMPLE_DIALOGS_TITLE,
              $sb->GetStatusText($this->field),
              $this
            );

    if (!$txt)
      return;

    $sb->SetStatusText($txt, $this->field);
  }

  public function OnPushStatusText()
  {
    $sb = $this->GetStatusBar();

    if (!$sb)
      return;
    
    static $countPush = 0;

    $sb->PushStatusText(sprintf
                        (
                          "Pushed message #%d (depth = %d)",
                          ++$countPush, ++$this->gs_depth
                        ), $this->field);
  }

  public function OnPopStatusText()
  {
    $sb = $this->GetStatusBar();

    if (!$sb)
      return;

    if (!$this->gs_depth)
    {
      wxLogStatus("No message to pop.");
      return;
    }

    $this->gs_depth--;
    $sb->PopStatusText($this->field);
  }

  public function OnResetFieldsWidth()
  {
    $pStat = $this->GetStatusBar();

    if (!$pStat)
      return;

    $n = $pStat->GetFieldsCount();
    $pStat->SetStatusWidths($n, array_fill(0, $n, -1));   // TODO: SetStatusWidths should accept just an array as parameter
    for ($i = 0; $i < $n; $i++)
      $pStat->SetStatusText("same size", $i);
  }

  public function OnShowFieldsRect()
  {
    $pStat = $this->GetStatusBar();

    if (!$pStat)
      return;

    $dc = new wxClientDC($pStat);
    $dc->SetPen(wxRED_PEN);
    $dc->SetBrush(wxTRANSPARENT_BRUSH);

    $n = $pStat->GetFieldsCount();
    for ($i = 0; $i < $n; $i++)
    {
      $r = new wxRect();
      if ($pStat->GetFieldRect($i, $r))
        $dc->DrawRectangle($r);
    }
  }

  public function OnSetStatusFields()
  {
    $sb = $this->GetStatusBar();

    if (!$sb)
      return;

    $nFields =  wxGetNumberFromUser
                (
                  "Select the number of fields in the status bar",
                  "Fields:",
                  SAMPLE_DIALOGS_TITLE,
                  $sb->GetFieldsCount(),
                  1, 5,
                  $this
                );

    // we don't check if the number changed at all on purpose: calling
    // SetFieldsCount() with the same number of fields should be ok
    if ($nFields != -1)
    {
      $widthsFor2Fields = array(200, -1);
      $widthsFor3Fields = array(-1, -2, -1);
      $widthsFor4Fields = array(100, -1, 100, -2, 100);

      $widthsAll = array
      (
        array(-1),                // 1 field: default, TODO: SetFieldsCount cannot handle NULL
        $widthsFor2Fields,        // 2 fields: 1 fixed, 1 var
        $widthsFor3Fields,        // 3 fields: 3 var
        $widthsFor4Fields,        // 4 fields: 3 fixed, 2 vars
        array(-1, -1, -1, -1, -1) // 5 fields: default (all have same width), TODO: SetFieldsCount cannot handle NULL
      );

      $widths = $widthsAll[$nFields - 1];
      $sb->SetFieldsCount($nFields, $widths);

      for ($n = 0; $n < $nFields; $n++)
      {
        if ($widths)
        {
          if ($widths[$n] > 0)
            $s = sprintf("fixed (%d)", $widths[$n]);
          else
            $s = sprintf("variable (*%d)", -$widths[$n]);
        }
        else
          $s = "default";

        $this->SetStatusText($s, $n);
      }

      if ($this->field >= $nFields)
        $this->field = $nFields - 1;
    }
    else
      wxLogStatus($this, "Cancelled");
  }

  public function OnSetStatusFont()
  {
    $sb = $this->GetStatusBar();

    if (!$sb)
      return;

    $fnt = wxGetFontFromUser($this, $sb->GetFont(), "Choose status bar font");

    if ($fnt->IsOk())
    {
      $sb->SetFont($fnt);
      $sb->SetSize($sb->GetBestSize());
    }
  }

  public function OnRecreateStatusBar()
  {
    $this->DoCreateStatusBar($this->statbarKind == self::StatBar_Custom ?
                             self::StatBar_Default : self::StatBar_Custom,
                             wxSTB_DEFAULT_STYLE);
  }

  public function OnSetPaneStyle($event)
  {
    switch ($event->GetId())
    {
      case StatusBar_SetPaneStyleNormal:
        $this->statbarPaneStyle = wxSB_NORMAL;
        break;
      case StatusBar_SetPaneStyleFlat:
        $this->statbarPaneStyle = wxSB_FLAT;
        break;
      case StatusBar_SetPaneStyleRaised:
        $this->statbarPaneStyle = wxSB_RAISED;
        break;
    }

    $this->ApplyPaneStyle();
  }

  public function OnSetStyle($event)
  {
    $oldStyle = wxSTB_DEFAULT_STYLE;

    if ($this->GetStatusBar())
      $oldStyle = $this->GetStatusBar()->GetWindowStyle();

    $STB_ELLIPSIZE_MASK =
      wxSTB_ELLIPSIZE_START|wxSTB_ELLIPSIZE_MIDDLE|wxSTB_ELLIPSIZE_END;

    $newStyle = $oldStyle;
    $newStyleBit = 0;

    switch ($event->GetId())
    {
      case StatusBar_SetStyleSizeGrip:
        $newStyleBit = wxSTB_SIZEGRIP;
        break;

      case StatusBar_SetStyleShowTips:
        $newStyleBit = wxSTB_SHOW_TIPS;
        break;

      case StatusBar_SetStyleEllipsizeStart:
        $newStyleBit = wxSTB_ELLIPSIZE_START;
        $newStyle &= ~$STB_ELLIPSIZE_MASK;
        break;

      case StatusBar_SetStyleEllipsizeMiddle:
        $newStyleBit = wxSTB_ELLIPSIZE_MIDDLE;
        $newStyle &= ~$STB_ELLIPSIZE_MASK;
        break;

      case StatusBar_SetStyleEllipsizeEnd:
        $newStyleBit = wxSTB_ELLIPSIZE_END;
        $newStyle &= ~$STB_ELLIPSIZE_MASK;
        break;
    }

    $newStyle = $event->IsChecked() ? $newStyle | $newStyleBit :
                                      $newStyle & ~$newStyleBit;

    if ($newStyle != $oldStyle)
    {
      $this->DoCreateStatusBar($this->statbarKind, $newStyle);
      $this->SetStatusText("Status bar recreated with a new style");
    }
  }

  public function OnUpdateForDefaultStatusbar($event)
  {
    // only allow this feature for the default status bar
    $sb = $this->GetStatusBar();

    if (!$sb)
      return;

    $event->Enable($sb->GetName() == "wxStatusBar");
  }

  public function OnUpdateStatusBarToggle($event)
  {
    $event->Check($this->GetStatusBar() != null);
  }

  public function OnUpdateSetPaneStyle($event)
  {
    switch ($event->GetId())
    {
      case StatusBar_SetPaneStyleNormal:
        $event->Check($this->statbarPaneStyle == wxSB_NORMAL);
        break;

      case StatusBar_SetPaneStyleFlat:
        $event->Check($this->statbarPaneStyle == wxSB_FLAT);
        break;

      case StatusBar_SetPaneStyleRaised:
        $event->Check($this->statbarPaneStyle == wxSB_RAISED);
        break;
    }
  }

  public function OnUpdateSetStyle($event)
  {
    $currentStyle = wxSTB_DEFAULT_STYLE;

    if ($this->GetStatusBar())
      $currentStyle = $this->GetStatusBar()->GetWindowStyle();

    switch ($event->GetId())
    {
      case StatusBar_SetStyleSizeGrip:
        $event->Check(($currentStyle & wxSTB_SIZEGRIP) != 0);
        break;

      case StatusBar_SetStyleShowTips:
        $event->Check(($currentStyle & wxSTB_SHOW_TIPS) != 0);
        break;

      case StatusBar_SetStyleEllipsizeStart:
        $event->Check(($currentStyle & wxSTB_ELLIPSIZE_START) != 0);
        break;

      case StatusBar_SetStyleEllipsizeMiddle:
        $event->Check(($currentStyle & wxSTB_ELLIPSIZE_MIDDLE) != 0);
        break;

      case StatusBar_SetStyleEllipsizeEnd:
        $event->Check(($currentStyle & wxSTB_ELLIPSIZE_END) != 0);
        break;
    }
  }

  public function OnStatusBarToggle()
  {
    $statbarOld = $this->GetStatusBar();

    if ($statbarOld)
    {
      $this->SetStatusBar(null);
      $statbarOld->Destroy();
    }
    else
      $this->DoCreateStatusBar($this->statbarKind, wxSTB_DEFAULT_STYLE);
  }

  private function DoCreateStatusBar($kind, $style)
  {
    $statbarOld = $this->GetStatusBar();

    if ($statbarOld)
    {
      $this->SetStatusBar(null);
      $statbarOld->Destroy();
    }

    $statbarNew = null;

    switch ($kind)
    {
      case self::StatBar_Default:
        $statbarNew = new wxStatusBar($this, wxID_ANY, $style, "wxStatusBar");
        $statbarNew->SetFieldsCount(2);
        break;

      case self::StatBar_Custom:
        $statbarNew = new MyStatusBar($this, $style);
        break;

      default:
        wxFAIL_MSG("unknown status bar kind");
    }

    $this->SetStatusBar($statbarNew);
    $this->ApplyPaneStyle();
    // TODO: $this->PositionStatusBar();

    $this->statbarKind = $kind;
  }

  protected function ApplyPaneStyle()
  {
    $sb = $this->GetStatusBar();

    if (!$sb)
      return;

    $fields = $sb->GetFieldsCount();
    $styles = array();

    for ($i = 1; $i < $fields; $i++)
      $styles[$i] = wxSB_NORMAL;

    $styles[0] = $this->statbarPaneStyle;

    $sb->SetStatusStyles($fields, $styles);
  }

  private $statbarKind;
  private $statbarPaneStyle;

  // the index of the field used by some commands
  private $field;

  // the current depth of the stack used by Push/PopStatusText()
  private $gs_depth = 0;
}

// Our about dialog with its status bar
class MyAboutDialog extends wxDialog
{
  public function __construct($parent)
  {
    parent::__construct($parent, wxID_ANY, "About statbar", wxDefaultPosition,
      wxDefaultSize, wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER);

    $text = new wxStaticText($this, wxID_ANY,
                             "wxStatusBar sample\n" .
                             "(c) 2000 Vadim Zeitlin\n\n" .
                             "Ported to wxPHP by Thomas Sahlin");

    $btn = new wxButton($this, wxID_OK, "&Close");

    // create the top status bar without the size grip (default style),
    // otherwise it looks weird
    $statbarTop = new wxStatusBar($this, wxID_ANY, 0);
    $statbarTop->SetFieldsCount(3);
    $statbarTop->SetStatusText("This is a top status bar", 0);
    $statbarTop->SetStatusText("in a dialog", 1);
    $statbarTop->SetStatusText("Great, isn't it?", 2);

    $statbarBottom = new wxStatusBar($this, wxID_ANY);
    $statbarBottom->SetFieldsCount(2);
    $statbarBottom->SetStatusText("This is a bottom status bar", 0);
    $statbarBottom->SetStatusText("in a dialog", 1);

    $sizerTop = new wxBoxSizer(wxVERTICAL);
    $sizerTop->Add($statbarTop, 0, wxGROW);
    $sizerTop->Add(-1, 10, 1, wxGROW);
    $sizerTop->Add($text, 0, wxCENTRE | wxRIGHT | wxLEFT, 20);
    $sizerTop->Add(-1, 10, 1, wxGROW);
    $sizerTop->Add($btn, 0, wxCENTRE | wxRIGHT | wxLEFT, 20);
    $sizerTop->Add(-1, 10, 1, wxGROW);
    $sizerTop->Add($statbarBottom, 0, wxGROW);

    $this->SetSizerAndFit($sizerTop);
  }
}

$app = new MyApp();
wxApp::SetInstance($app);
wxEntry();

?>
