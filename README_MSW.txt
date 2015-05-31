Windows Compilation Issues:
========================================================================

I. wxWidgets Source Changes
------------------------------------------------------------------------
		
1. wxPosScriptDC not enabled by default on wxMSW

	Note: This should be done before compiling wxWidgets.

	Fix: On wxWidgets source directory open:
	
		* include\wx\msw\setup.h 
		* include\wx\setup_inc.h
		
	then change 'wxUSE_POSTSCRIPT 0' to:
		
		wxUSE_POSTSCRIPT 1
		
	Crashes where occurring on Windows XP and the culprit was 
	the "COMPILER_TLS" feature. So to fix the crashes on windows xp
	is needed to disable wxUSE_COMPILER_TLS by setting it to 0:
	
		wxUSE_COMPILER_TLS 0
		
	I'm not really sure but I noticed that changing include\wx\msw\setup.h 
	didn't had any effect on the final setup.h generated for the compiled
	libraries so just in case I also recommend to modify include\wx\setup_inc.h

		
2. Linking errors where produced when linking wxphp to wxwidgets
from some deprecated methods that seemed to be implemented on 
log.cpp but strangely enough are producing linking errors.

	Note: You should do this after wxWidgets was compiled and before
	compiling the wxPHP extension.

	Fix: Comment out the following declarations/prototypes from the 
	     wxwidgets include/wx/log.h

	a. wxLogFormatter::FormatTime(long)const
	
		The line should look like this:
	
		virtual wxString FormatTime(time_t t) const;
	
	b. wxLog::DoLog(unsigned long,wchar_t const *,long)
	   wxLog::DoLog(unsigned long,char const *,long)
		   
		The lines should look like these:
	
		wxDEPRECATED_BUT_USED_INTERNALLY(
			virtual void DoLog(wxLogLevel level, const char *szString, time_t t)
		);

		wxDEPRECATED_BUT_USED_INTERNALLY(
			virtual void DoLog(wxLogLevel level, const wchar_t *wzString, time_t t)
		);

		
Notes (no changes needed, this is just a reminder)
===================================================

Here I write some methods I needed to disable on the binding since
they aren't implemented, what produces linking errors. Should be 
reported to wxWidgets as a bug.

	wxRichToolTip::SetTitleFont(class wxFont const &)
	wxPoint2DDouble::SetPolarCoordinates(double,double)
	wxPoint2DInt::SetPolarCoordinates(int,int)
	

II. PHP Source Changes
------------------------------------------------------------------------

Note: All these changes should be applied before compiling wxphp.

1. mode_t is defined on wxWidgets and PHP at the same time which causes
   a re-declaration conflict to the compiler.

	Fix: On TSRM/tsrm_virtual_cwd.h substitute:
		
		typedef unsigned short mode_t;
		
	with
		
		#ifndef __WXMSW__
		typedef unsigned short mode_t;
		#endif
		
	
2. wx.rc Needed on php.exe

It seems that some wxWidgets components rely on cursors and icons that 
need to be embedded on the main application executable, like for example 
wxStyledTextCtrl. In this case the application executable is php.exe 
or php-win.exe

	Steps to include wx.rc on these executables:

	Open: win32/build/template.rc and replace

		#ifdef WANT_LOGO
		0 ICON win32\build\php.ico
		#endif

	with

		#ifdef WANT_LOGO
		0 ICON win32\build\php.ico
		#include <wx/msw/wx.rc>
		#endif
		
	Note: This may not be the case anymore, since the Windows OS
	pecl automated builds administrator (welting) reported
	success on builds without doing this change.

3. in order to only include the wx.rc file when the system is building
the php.exe or php-win.exe.

	Modify: win32/build/confutils.js and replace all occurences of

		$(RC)

	with

		$(RC) /I PATH_TO_WXWIDGETS\\include

	where PATH_TO_WXWIDGETS can be C:\\wxWidgets. This is to ensure that
	the resource compiler fines the file wx.rc.

Important: If this steps are omitted the php executable will crash 
each time a wxWidgets component that relies on some specific resources 
is loaded.
