PHP_ARG_WITH(wxwidgets,for wxWidgets support,
[  --with-wxwidgets[=DIR]    enable wxWidgets extension (requires wxWidgets >= 2.9.3).])

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
	AC_MSG_CHECKING([for wx-config existance and wxWidgets version >= 2.9.x])
	for directory in "$PHP_WXWIDGETS" "$PHP_WXWIDGETS/bin" /usr /usr/bin /usr/local /usr/local/bin; do
		if test -e "$directory/wx-config"; then
			wxwidgets_version=`$directory/wx-config --version`
			version_check=`echo $wxwidgets_version | grep "2.9" && echo $wxwidgets_version | grep "3.[0-9]"`
			if test -n "$version_check"; then
				WXCONFIG_PATH="$directory/wx-config"
				AC_MSG_RESULT([version $wxwidgets_version found])
				break
			fi
		fi
	done
	
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
	if test -n "$ext_srcdir"; then
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
		PHP_WXWIDGETS_LIBS=`$WXCONFIG_PATH --libs all`
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
	PHP_NEW_EXTENSION(wxwidgets, src/app.cpp src/references.cpp <?=$source_files?> src/functions.cpp wxwidgets.cpp, $ext_shared,,,1)
fi
