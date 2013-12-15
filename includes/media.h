/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * This file was auto-generated by the wxPHP source maker
*/

#ifndef WXPHP_MEDIA_H_GUARD
#define WXPHP_MEDIA_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_media_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxMediaCtrl_entry;
void php_wxMediaCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxMediaCtrl_php: public wxMediaCtrl{
	public:
	
	wxMediaCtrl_php():wxMediaCtrl(){}
	wxMediaCtrl_php(wxWindow* parent, wxWindowID id, const wxString& fileName=wxEmptyString, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=0, const wxString& szBackend=wxEmptyString, const wxValidator& validator=wxDefaultValidator, const wxString& name="mediaCtrl"):wxMediaCtrl(parent, id, fileName, pos, size, style, szBackend, validator, name){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxMediaCtrl 
{
    zend_object zo;
    wxMediaCtrl_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxMediaCtrl_free(void *object TSRMLS_DC);
zend_object_value php_wxMediaCtrl_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxMediaCtrl_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, Connect, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, AddFilter, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, AddPendingEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, DeletePendingEvents, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, GetEvtHandlerEnabled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, GetNextHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, GetPreviousHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, IsUnlinked, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, ProcessEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, ProcessEventLocally, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, ProcessPendingEvents, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, QueueEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, RemoveFilter, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, SafelyProcessEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, SetEvtHandlerEnabled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, Unlink, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Show, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, FindWindowById, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, FindWindow, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Enable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Disable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Close, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetSizer, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetSizerAndFit, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetToolTip, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetWindowStyle, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Update, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, UpdateWindowUI, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Validate, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, WarpPointer, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, WindowToClientSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, UnsetToolTip, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, UnreserveControlId, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, TransferDataToWindow, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, TransferDataFromWindow, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, ToggleWindowStyle, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Thaw, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, ShouldInheritColours, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetVirtualSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetValidator, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetTransparent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetSizeHints, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetScrollbar, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetScrollPos, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, AcceptsFocus, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, AcceptsFocusFromKeyboard, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, AcceptsFocusRecursively, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, AddChild, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, AlwaysShowScrollbars, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, CacheBestSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, CanScroll, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, CanSetTransparent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, CaptureMouse, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Center, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, CenterOnParent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Centre, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, CentreOnParent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, ClearBackground, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, ClientToScreen, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, ClientToWindowSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, ConvertDialogToPixels, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, ConvertPixelsToDialog, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, DragAcceptFiles, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, DoUpdateWindowUI, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, FindFocus, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, FindWindowByLabel, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, FindWindowByName, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Fit, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, FitInside, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Freeze, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetAutoLayout, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetBackgroundColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetBackgroundStyle, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetBestVirtualSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetBorder, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetCapture, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetCaret, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetCharHeight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetCharWidth, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Destroy, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, DestroyChildren, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetClientAreaOrigin, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetClientRect, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetClientSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetContainingSizer, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetCursor, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetEffectiveMinSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetEventHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetExtraStyle, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetForegroundColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetGrandParent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetHelpText, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetHelpTextAtPoint, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetMaxClientSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetMaxHeight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetMaxSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetMaxWidth, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetMinClientSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetMinHeight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetMinSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetMinWidth, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetNextSibling, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetParent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetPopupMenuSelectionFromUser, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetPosition, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetPrevSibling, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetRect, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetScreenPosition, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetScreenRect, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetScrollPos, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetScrollRange, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetScrollThumb, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetSizer, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetTextExtent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetToolTip, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetToolTipText, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetUpdateClientRect, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetUpdateRegion, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetValidator, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetVirtualSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetWindowBorderSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetWindowStyle, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetWindowStyleFlag, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetWindowVariant, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, HandleAsNavigationKey, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, HandleWindowEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, HasCapture, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, HasExtraStyle, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, HasFlag, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, HasFocus, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, HasMultiplePages, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, HasScrollbar, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, HasTransparentBackground, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Hide, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, HitTest, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, GetLayoutDirection, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, InitDialog, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, InheritAttributes, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, InformFirstDirection, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, InvalidateBestSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, IsBeingDeleted, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, IsDoubleBuffered, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, IsEnabled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, IsExposed, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, IsFrozen, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, IsRetained, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, IsScrollbarAlwaysShown, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, IsShown, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, IsShownOnScreen, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, IsThisEnabled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, IsTopLevel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Layout, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, LineDown, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, LineUp, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Lower, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Move, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, MoveAfterInTabOrder, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, MoveBeforeInTabOrder, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Navigate, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, NavigateIn, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, NewControlId, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, PageDown, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, PageUp, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, PopupMenu, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, PostSizeEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, PostSizeEventToParent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, ProcessWindowEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, ProcessWindowEventLocally, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, PushEventHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Raise, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Refresh, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, RefreshRect, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, ReleaseMouse, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, RemoveChild, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, RemoveEventHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, Reparent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, ScreenToClient, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, ScrollLines, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, ScrollPages, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SendSizeEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SendSizeEventToParent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetAutoLayout, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetBackgroundColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetBackgroundStyle, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetCanFocus, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetCaret, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetClientSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetConstraints, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetContainingSizer, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetCursor, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetDropTarget, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetEventHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetExtraStyle, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetFocus, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetFocusFromKbd, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetForegroundColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetHelpText, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetInitialSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetLayoutDirection, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetMaxClientSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetMaxSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetMinClientSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetMinSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetNextHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetOwnBackgroundColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetOwnFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetOwnForegroundColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetPalette, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetPosition, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetPreviousHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetThemeEnabled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWindow, SetWindowVariant, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxControl, GetLabelText, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxControl, SetLabelMarkup, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxControl, SetLabelText, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxControl, RemoveMnemonics, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxControl, SetLabel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxControl, GetLabel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxControl, EscapeMnemonics, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxControl, Command, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMediaCtrl, Load, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMediaCtrl, Create, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMediaCtrl, GetBestSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMediaCtrl, GetPlaybackRate, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMediaCtrl, GetVolume, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMediaCtrl, Length, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMediaCtrl, LoadURI, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMediaCtrl, LoadURIWithProxy, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMediaCtrl, Pause, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMediaCtrl, Play, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMediaCtrl, Seek, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMediaCtrl, SetPlaybackRate, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMediaCtrl, SetVolume, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMediaCtrl, ShowPlayerControls, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMediaCtrl, Stop, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMediaCtrl, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxMediaCtrl, GetState, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMediaCtrl, Tell, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxSound_entry;
void php_wxSound_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxSound_php: public wxSound{
	public:
	
	wxSound_php():wxSound(){}
	wxSound_php(const wxString& fileName, bool isResource=false):wxSound(fileName, isResource){}
	wxSound_php(size_t size, const void* data):wxSound(size, data){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxSound 
{
    zend_object zo;
    wxSound_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxSound_free(void *object TSRMLS_DC);
zend_object_value php_wxSound_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxSound_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSound, Create, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSound, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSound, Play, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSound, Stop, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSound, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

#endif //WXPHP_MEDIA_H_GUARD
