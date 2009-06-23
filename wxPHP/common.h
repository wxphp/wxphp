#ifdef PHP_WIN32
	#include <winsock2.h>
#endif

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif


#if !wxUSE_THREADS
    #error "This sample requires thread support!"
#endif // wxUSE_THREADS

#if !wxUSE_UNICODE
#define tcscmp strcmp
#else
#define tcscmp wcscmp
#endif // wxUSE_UNICODE

#include <wx/thread.h>



#include <wx/txtstrm.h>
#include <wx/wfstream.h>
#include <wx/string.h>
#include <wx/log.h>
#include <wx/tglbtn.h>
#include <wx/calctrl.h>
#include <wx/treectrl.h>
#include <wx/taskbar.h>
#include <wx/splitter.h>
#include <wx/listctrl.h>
#include <wx/dataview.h>
#include <wx/notebook.h>
#include <wx/print.h>
#include <wx/splash.h>
#include <wx/protocol/http.h>
#include <wx/dataview.h>
#include <wx/stc/stc.h>
#include <wx/imaglist.h>
#include <wx/process.h>

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef WORDS_BIGENDIAN
	#undef WORDS_BIGENDIAN
#endif

#ifdef M_PI
	#undef M_PI
#endif

#ifdef _WIN32_WINNT
	#undef _WIN32_WINNT
#endif

/* Include PHP Standard Header */
extern "C" {
#include "php.h"
}
