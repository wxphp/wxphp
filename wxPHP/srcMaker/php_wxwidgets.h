#include "common.h"

#ifndef PHP_WXWIDGETS_H
/* Prevent double inclusion */
#define PHP_WXWIDGETS_H

/* Define Extension Properties */
#define PHP_WXWIDGETS_EXTNAME    "wxWidgets"
//#define PHP_WXWIDGETS_EXTVER    "1.0"
#define PHP_WXWIDGETS_VERSION	"1.0"

/* Import configure options
   when building outside of
   the PHP source tree */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

/* Include PHP Standard Header */
#include "php.h"

/* Define the entry point symbol
 * Zend will use when loading this module
 */
extern zend_module_entry wxWidgets_module_entry;
#define phpext_sample_ptr &wxWidgets_module_entry


class wxPhpClientData : public wxClientData
{
public:
        wxPhpClientData(zval* phpObj){
                this->phpObj = phpObj;
        }
        zval* phpObj;
};

PHP_METHOD(php_wxApp, helloWorld);
PHP_METHOD(php_wxApp, __construct);
PHP_METHOD(php_wxApp, SetInstance);
PHP_METHOD(php_wxApp, Yield);

// entries --->
PHP_METHOD(php_wxBoxSizer, __construct);
PHP_METHOD(php_wxBoxSizer, RecalcSizes);
PHP_METHOD(php_wxBoxSizer, GetOrientation);
PHP_METHOD(php_wxBoxSizer, AddStretchSpacer);
PHP_METHOD(php_wxSizer, Add);
PHP_METHOD(php_wxWindow, SetSizer);
PHP_METHOD(php_wxWindow, Connect);
PHP_METHOD(php_wxSplitterWindow, __construct);
PHP_METHOD(php_wxSplitterWindow, SetSplitMode);
PHP_METHOD(php_wxSplitterWindow, SetMinimumPaneSize);
PHP_METHOD(php_wxSplitterWindow, UpdateSize);
PHP_METHOD(php_wxSplitterWindow, SetSashSize);
PHP_METHOD(php_wxSplitterWindow, Unsplit);
PHP_METHOD(php_wxSplitterWindow, Initialize);
PHP_METHOD(php_wxSplitterWindow, ReplaceWindow);
PHP_METHOD(php_wxSplitterWindow, SplitHorizontally);
PHP_METHOD(php_wxSplitterWindow, SplitVertically);
PHP_METHOD(php_wxSplitterWindow, IsSplit);
PHP_METHOD(php_wxSplitterWindow, GetMinimumPaneSize);
PHP_METHOD(php_wxSplitterWindow, GetSashPosition);
PHP_METHOD(php_wxSplitterWindow, GetSplitMode);
PHP_METHOD(php_wxSplitterWindow, Connect);
PHP_METHOD(php_wxMenu, __construct);
PHP_METHOD(php_wxMenu, Append);
PHP_METHOD(php_wxMenu, AppendCheckItem);
PHP_METHOD(php_wxMenuBar, __construct);
PHP_METHOD(php_wxMenuBar, Append);
PHP_METHOD(php_wxToolBar, __construct);
PHP_METHOD(php_wxToolBar, GetToolsCount);
PHP_METHOD(php_wxToolBar, AddSeparator);
PHP_METHOD(php_wxToolBar, Realize);
PHP_METHOD(php_wxToolBar, AddTool);
PHP_METHOD(php_wxCommandEvent, __construct);
PHP_METHOD(php_wxCommandEvent, IsChecked);
PHP_METHOD(php_wxCommandEvent, GetString);
PHP_METHOD(php_wxCommandEvent, GetSelection);
PHP_METHOD(php_wxPanel, __construct);
PHP_METHOD(php_wxPanel, Connect);
PHP_METHOD(php_wxFrame, __construct);
PHP_METHOD(php_wxFrame, Show);
PHP_METHOD(php_wxFrame, SetMenuBar);
PHP_METHOD(php_wxFrame, CreateToolBar);
PHP_METHOD(php_wxFrame, SetIcon);
PHP_METHOD(php_wxFrame, Connect);
PHP_METHOD(php_wxImage, __construct);
PHP_METHOD(php_wxBitmap, __construct);
PHP_METHOD(php_wxStaticBitmap, __construct);
PHP_METHOD(php_wxStaticBitmap, Connect);
PHP_METHOD(php_wxGauge, __construct);
PHP_METHOD(php_wxGauge, GetBezelFace);
PHP_METHOD(php_wxGauge, GetRange);
PHP_METHOD(php_wxGauge, GetShadowWidth);
PHP_METHOD(php_wxGauge, SetRange);
PHP_METHOD(php_wxGauge, SetValue);
PHP_METHOD(php_wxGauge, IsVertical);
PHP_METHOD(php_wxGauge, SetBezelFace);
PHP_METHOD(php_wxGauge, SetShadowWidth);
PHP_METHOD(php_wxGauge, GetValue);
PHP_METHOD(php_wxGauge, Pulse);
PHP_METHOD(php_wxGauge, Connect);
PHP_METHOD(php_wxButton, __construct);
PHP_METHOD(php_wxButton, GetLabel);
PHP_METHOD(php_wxButton, SetDefault);
PHP_METHOD(php_wxButton, GetDefaultSize);
PHP_METHOD(php_wxButton, SetLabel);
PHP_METHOD(php_wxButton, Connect);
PHP_METHOD(php_wxBitmapButton, __construct);
PHP_METHOD(php_wxBitmapButton, GetBitmapDisabled);
PHP_METHOD(php_wxBitmapButton, GetBitmapFocus);
PHP_METHOD(php_wxBitmapButton, GetBitmapHover);
PHP_METHOD(php_wxBitmapButton, GetBitmapLabel);
PHP_METHOD(php_wxBitmapButton, GetBitmapSelected);
PHP_METHOD(php_wxBitmapButton, SetBitmapDisabled);
PHP_METHOD(php_wxBitmapButton, SetBitmapFocus);
PHP_METHOD(php_wxBitmapButton, SetBitmapHover);
PHP_METHOD(php_wxBitmapButton, SetBitmapLabel);
PHP_METHOD(php_wxBitmapButton, SetBitmapSelected);
PHP_METHOD(php_wxBitmapButton, Connect);
PHP_METHOD(php_wxToggleButton, __construct);
PHP_METHOD(php_wxToggleButton, GetValue);
PHP_METHOD(php_wxToggleButton, SetValue);
PHP_METHOD(php_wxToggleButton, Connect);
PHP_METHOD(php_wxCalendarCtrl, __construct);
PHP_METHOD(php_wxCalendarCtrl, SetDate);
PHP_METHOD(php_wxCalendarCtrl, GetDate);
PHP_METHOD(php_wxCalendarCtrl, EnableYearChange);
PHP_METHOD(php_wxCalendarCtrl, EnableMonthChange);
PHP_METHOD(php_wxCalendarCtrl, EnableHolidayDisplay);
PHP_METHOD(php_wxCalendarCtrl, Connect);
PHP_METHOD(php_wxCheckBox, __construct);
PHP_METHOD(php_wxCheckBox, GetValue);
PHP_METHOD(php_wxCheckBox, Is3rdStateAllowedForUser);
PHP_METHOD(php_wxCheckBox, Is3State);
PHP_METHOD(php_wxCheckBox, IsChecked);
PHP_METHOD(php_wxCheckBox, SetValue);
PHP_METHOD(php_wxCheckBox, Connect);
PHP_METHOD(php_wxChoice, __construct);
PHP_METHOD(php_wxChoice, GetColumns);
PHP_METHOD(php_wxChoice, GetCurrentSelection);
PHP_METHOD(php_wxChoice, SetColumns);
PHP_METHOD(php_wxChoice, Connect);
PHP_METHOD(php_wxListBox, __construct);
PHP_METHOD(php_wxListBox, Deselect);
PHP_METHOD(php_wxListBox, InsertItems);
PHP_METHOD(php_wxListBox, IsSelected);
PHP_METHOD(php_wxListBox, Set);
PHP_METHOD(php_wxListBox, SetFirstItem);
PHP_METHOD(php_wxListBox, Connect);
PHP_METHOD(php_wxCheckListBox, __construct);
PHP_METHOD(php_wxCheckListBox, Check);
PHP_METHOD(php_wxCheckListBox, IsChecked);
PHP_METHOD(php_wxCheckListBox, Connect);
PHP_METHOD(php_wxTreeEvent, GetLabel);
PHP_METHOD(php_wxTreeEvent, GetItem);
PHP_METHOD(php_wxTreeItemId, IsOk);
PHP_METHOD(php_wxTreeCtrl, __construct);
PHP_METHOD(php_wxTreeCtrl, AddRoot);
PHP_METHOD(php_wxTreeCtrl, AppendItem);
PHP_METHOD(php_wxTreeCtrl, ItemHasChildren);
PHP_METHOD(php_wxTreeCtrl, CollapseAll);
PHP_METHOD(php_wxTreeCtrl, GetItemText);
PHP_METHOD(php_wxTreeCtrl, ExpandAll);
PHP_METHOD(php_wxTreeCtrl, Connect);
PHP_METHOD(php_wxListCtrl, __construct);
PHP_METHOD(php_wxListCtrl, InsertColumn);
PHP_METHOD(php_wxListCtrl, Connect);
PHP_METHOD(php_wxDataViewCtrl, __construct);
PHP_METHOD(php_wxDataViewCtrl, AppendTextColumn);
PHP_METHOD(php_wxDataViewCtrl, Connect);
PHP_METHOD(php_wxArrayString, __construct);
PHP_METHOD(php_wxArrayString, Clear);
PHP_METHOD(php_wxArrayString, Empty);
PHP_METHOD(php_wxArrayString, Add);
PHP_METHOD(php_wxArrayString, Count);
PHP_METHOD(php_wxArrayString, GetCount);
PHP_METHOD(php_wxArrayString, RemoveAt);
PHP_METHOD(php_wxArrayString, Sort);
PHP_METHOD(php_wxIcon, __construct);
PHP_METHOD(php_wxTaskBarIcon, __construct);
PHP_METHOD(php_wxTaskBarIcon, SetIcon);
PHP_METHOD(php_wxTaskBarIcon, RemoveIcon);
PHP_METHOD(php_wxSize, __construct);
PHP_METHOD(php_wxTextCtrl, __construct);
PHP_METHOD(php_wxTextCtrl, Connect);
PHP_METHOD(php_wxComboBox, __construct);
PHP_METHOD(php_wxComboBox, CanCopy);
PHP_METHOD(php_wxComboBox, CanCut);
PHP_METHOD(php_wxComboBox, CanPaste);
PHP_METHOD(php_wxComboBox, CanRedo);
PHP_METHOD(php_wxComboBox, CanUndo);
PHP_METHOD(php_wxComboBox, Copy);
PHP_METHOD(php_wxComboBox, Cut);
PHP_METHOD(php_wxComboBox, Paste);
PHP_METHOD(php_wxComboBox, Redo);
PHP_METHOD(php_wxComboBox, Undo);
PHP_METHOD(php_wxComboBox, GetCurrentSelection);
PHP_METHOD(php_wxComboBox, GetInsertionPoint);
PHP_METHOD(php_wxComboBox, SetInsertionPoint);
PHP_METHOD(php_wxComboBox, SetInsertionPointEnd);
PHP_METHOD(php_wxComboBox, SetSelection);
PHP_METHOD(php_wxComboBox, GetSelection);
PHP_METHOD(php_wxComboBox, Remove);
PHP_METHOD(php_wxComboBox, Replace);
PHP_METHOD(php_wxComboBox, GetValue);
PHP_METHOD(php_wxComboBox, SetValue);
PHP_METHOD(php_wxComboBox, Connect);

// <--- entries


#endif /* PHP_WXWIDGETS_H */
