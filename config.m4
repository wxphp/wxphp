PHP_ARG_WITH(wxwidgets,for wxWidgets support,
[  --with-wxwidgets[=DIR]    enable wxWidgets extension (requires wxWidgets >= 2.9.3).])

PHP_ARG_ENABLE(wxwidgets-debug, whether to enable debugging support in wxPHP,
[  --enable-wxwidgets-debug
                          Enable debugging messages support in wxPHP], no, no)

if test "$PHP_WXWIDGETS" != "no"; then

	dnl Instruct the PHP build system to use a C++ compiler
	PHP_REQUIRE_CXX()
	
	dnl Default wx-config command
	WXCONFIG_PATH=wx-config
	
	dnl Check if user passed the optional wxWidgets installation path
	if test "$PHP_WXWIDGETS" != "yes"; then
		if test -n "$PHP_WXWIDGETS"; then
			if test -f "$PHP_WXWIDGETS/bin/wx-config"; then
				WXCONFIG_PATH="$PHP_WXWIDGETS/bin/wx-config"
			elif test -f "$PHP_WXWIDGETS/wx-config"; then
				WXCONFIG_PATH="$PHP_WXWIDGETS/wx-config"
			else
				AC_MSG_ERROR([wx-config not found on the provided wxWidgets path])
			fi
		fi
	fi
	
	dnl Check whether to enable debugging messages
	if test "$PHP_WXWIDGETS_DEBUG" != "no"; then
		dnl Yes, so set the C macro
		AC_DEFINE(USE_WXPHP_DEBUG,1,[Include debugging support in wxPHP])
	fi
	
	dnl Retreive and store wxWidgets compiler flags
	PHP_WXWIDGETS_CFLAGS=`$WXCONFIG_PATH --cxxflags`
	
	dnl Retreive and store wxWidgets library flags
	PHP_WXWIDGETS_LIBS=`$WXCONFIG_PATH --libs`
	
	dnl Append wxWidgets flags to the compiler flags and suppress warning flags
	CXXFLAGS="$CXXFLAGS $PHP_WXWIDGETS_CFLAGS"

	dnl Add header search paths to the PHP build system
	PHP_EVAL_INCLINE($PHP_WXWIDGETS_CFLAGS)
	
	dnl Add libraries and or library search paths to the PHP build system 
  	PHP_EVAL_LIBLINE($PHP_WXWIDGETS_LIBS, WXWIDGETS_SHARED_LIBADD)

	dnl Adds variable with value into Makefile for example CC = gcc
	PHP_SUBST(WXWIDGETS_SHARED_LIBADD)
	
	dnl Link the C++ standard library
	PHP_ADD_LIBRARY(stdc++, 1 , WXWIDGETS_SHARED_LIBADD)

	dnl PHP_NEW_EXTENSION(extname, sources [, shared [, sapi_class [, extra-cflags [, cxx [, zend_ext]]]]])
	PHP_NEW_EXTENSION(wxwidgets, app.cpp references.cpp appmanagement.cpp cfg.cpp bookctrl.cpp dnd.cpp cmndlg.cpp containers.cpp ctrl.cpp data.cpp dc.cpp docview.cpp events.cpp file.cpp gdi.cpp grid.cpp html.cpp help.cpp logging.cpp managedwnd.cpp menus.cpp misc.cpp miscwnd.cpp media.cpp pickers.cpp printing.cpp ribbon.cpp richtext.cpp rtti.cpp stc.cpp streams.cpp threading.cpp validator.cpp vfs.cpp aui.cpp winlayout.cpp xml.cpp xrc.cpp dvc.cpp others.cpp functions.cpp wxwidgets.cpp, $ext_shared,,,1)
fi
