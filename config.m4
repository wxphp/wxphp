PHP_ARG_WITH(wxwidgets,for wxWidgets support,
[  --with-wxwidgets[=DIR]    enable wxWidgets extension (requires wxWidgets >= 3.0.0).])

PHP_ARG_ENABLE(wxwidgets-debug, whether to enable debugging support in wxPHP,
[  --enable-wxwidgets-debug
                          Enable debugging messages support in wxPHP], no, no)
                          
PHP_ARG_ENABLE(wxwidgets-monolithic, whether to link to monolithic build of wxWidgets,
[  --enable-wxwidgets-monolithic
                          Link to monolithic build of wxWidgets], no, no)

if test "$PHP_WXWIDGETS" != "no"; then

	dnl Instruct the PHP build system to use a C++ compiler
	PHP_REQUIRE_CXX()
	
	dnl Default wx-config command
	WXCONFIG_PATH=wx-config
	
	dnl Check for the installation path of wx-config
	if test "$PHP_WXWIDGETS" != "yes"; then
		AC_MSG_CHECKING([for wx-config existance and wxWidgets version >= 3.0.x])
		for directory in "$PHP_WXWIDGETS" "$PHP_WXWIDGETS/bin" /usr /usr/bin /usr/local /usr/local/bin; do
			if test -e "$directory/wx-config"; then
				wxwidgets_version=`$directory/wx-config --version`
				version_check=`echo $wxwidgets_version | grep "3.0" && echo $wxwidgets_version | grep "0.[0-9]"`
				if test -n "$version_check"; then
					WXCONFIG_PATH="$directory/wx-config"
					AC_MSG_RESULT([version $wxwidgets_version found])
					break
				fi
			fi
		done
	else
		AC_MSG_CHECKING([for webkitgtk include files])
		WEBKITGTK=`find /usr/include -name "webkit.h"`
		if test "$WEBKITGTK" != ""; then
			AC_MSG_RESULT([found])
		else
			AC_MSG_RESULT([not found])
			AC_MSG_ERROR([webkitgtk include files where not found])
		fi
		
		AC_MSG_CHECKING([for gconf2 include files])
		if test -e "/usr/include/gconf/2/gconf/gconf.h"; then
			AC_MSG_RESULT([found])
		else
			AC_MSG_RESULT([not found])
			AC_MSG_ERROR([gconf include files where not found])
		fi
		
		AC_MSG_CHECKING([for gstreamer include files])
		if test -e "/usr/include/gstreamer-0.10/gst/gst.h"; then
			AC_MSG_RESULT([found])
		else
			AC_MSG_RESULT([not found])
			AC_MSG_ERROR([gstreamer include files where not found])
		fi
		
		AC_MSG_CHECKING([for gstreamer plugins include files])
		if test -e "/usr/include/gstreamer-0.10/gst/audio/audio.h"; then
			AC_MSG_RESULT([found])
		else
			AC_MSG_RESULT([not found])
			AC_MSG_ERROR([gstreamer plugins include files where not found])
		fi
		
		AC_MSG_CHECKING([for libjpeg include files])
		LIBJPEG=`find /usr/include -name "jpeglib.h"`
		if test "$LIBJPEG" != ""; then
			AC_MSG_RESULT([found])
		else
			AC_MSG_RESULT([not found])
			AC_MSG_ERROR([libjpeg include files where not found])
		fi
		
		AC_MSG_CHECKING([for wget availability])
		WGET=`which wget`
		if test "$WGET" != ""; then
			AC_MSG_RESULT([found])
		else
			AC_MSG_RESULT([not found])
			AC_MSG_ERROR([wget was not found])
		fi
		
		if test ! -e "wxWidgets-3.0.0"; then
			echo "Downloading wxWidgets..."
			wget http://downloads.sourceforge.net/wxwindows/wxWidgets-3.0.0.tar.bz2
			tar -xjf wxWidgets-3.0.0.tar.bz2
			rm wxWidgets-3.0.0.tar.bz2
		fi

		dnl Build wxWidgets if not already build
		if test ! -e "wxWidgets-3.0.0/mybuild"; then
			echo "Starting a custom build of wxWidgets..."
			
			cd wxWidgets-3.0.0

			mkdir mybuild
			cd mybuild

			WX_BUILD_DIR=`pwd | sed "s/wxWidgets-3.0.0\/mybuild//"`wxWidgets-build

			CFLAGS="-fPIC -O2 -Wall -W" CXXFLAGS="-fPIC -O2"  \
			../configure --prefix=$WX_BUILD_DIR --disable-shared --enable-monolithic

			make
			make install
			
			cd ../../
		fi
		
		WXCONFIG_PATH="wxWidgets-build/bin/wx-config"
		PHP_WXWIDGETS_MONOLITHIC="yes"
		
		PHP_WXWIDGETS_OTHER_LDFLAGS=`pkg-config --libs gstreamer-0.10 gstreamer-interfaces-0.10 gtk+-2.0  libpng zlib`
		
		PHP_WXWIDGETS_LDFLAGS="-LwxWidgets-build/lib -pthread -lwx_gtk2u-3.0 -lwxregexu-3.0 -lwxscintilla-3.0"
		PHP_WXWIDGETS_LDFLAGS="$PHP_WXWIDGETS_LDFLAGS $PHP_WXWIDGETS_OTHER_LDFLAGS -ljpeg"
		
		LDFLAGS="$LDFLAGS $PHP_WXWIDGETS_LDFLAGS"
	fi
	
	dnl Show error if wxWidgets was not found
	if test ! -e $WXCONFIG_PATH; then
		AC_MSG_RESULT([not found])
		AC_MSG_ERROR([A matching wxWidgets installation was not found])
	fi
	
	dnl Check whether to enable debugging messages
	if test "$PHP_WXWIDGETS_DEBUG" != "no"; then
		dnl Yes, so set the C macro
		AC_DEFINE(USE_WXPHP_DEBUG,1,[Include debugging support in wxPHP])
	fi
	
	dnl Add additional includes directory
	PHP_WXWIDGETS_PEAR=`pwd | grep pear`
	if test "$PHP_WXWIDGETS_PEAR" != ""; then
		PHP_WXWIDGETS_CFLAGS="-I/tmp/pear/temp/wxwidgets/includes";
	elif test -n "$ext_srcdir"; then
		PHP_WXWIDGETS_CFLAGS="-I$ext_srcdir/includes";
	else
		PHP_WXWIDGETS_CFLAGS="-Iincludes";
	fi
	
	dnl Retreive and store wxWidgets compiler flags
	WXWIDGETS_CONFIG_FLAGS=`$WXCONFIG_PATH --cxxflags`
	
	dnl Append wx-config flags to wxphp compiler flags 
	PHP_WXWIDGETS_CFLAGS="$PHP_WXWIDGETS_CFLAGS $WXWIDGETS_CONFIG_FLAGS"
	
	dnl Retreive and store wxWidgets library flags
	if test "$PHP_WXWIDGETS_MONOLITHIC" != "no"; then
		PHP_WXWIDGETS_LIBS=`$WXCONFIG_PATH --libs`
	else
		PHP_WXWIDGETS_LIBS=`$WXCONFIG_PATH --libs xrc,webview,stc,richtext,ribbon,propgrid,aui,html,qa,adv,core,xml,net,media,base`
	fi
	
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
	PHP_NEW_EXTENSION(wxwidgets, src/app.cpp src/references.cpp src/appmanagement.cpp src/aui.cpp src/bookctrl.cpp src/cfg.cpp src/cmndlg.cpp src/containers.cpp src/ctrl.cpp src/data.cpp src/dc.cpp src/dnd.cpp src/docview.cpp src/dvc.cpp src/events.cpp src/file.cpp src/gdi.cpp src/grid.cpp src/help.cpp src/html.cpp src/logging.cpp src/managedwnd.cpp src/media.cpp src/menus.cpp src/misc.cpp src/miscwnd.cpp src/net.cpp src/pickers.cpp src/printing.cpp src/ribbon.cpp src/richtext.cpp src/rtti.cpp src/stc.cpp src/streams.cpp src/threading.cpp src/validator.cpp src/vfs.cpp src/webview.cpp src/winlayout.cpp src/xml.cpp src/xrc.cpp src/others.cpp src/functions.cpp wxwidgets.cpp, $ext_shared,,,1)
fi
