PHP_ARG_WITH(wxwidgets,for wxWidgets support,
[  --with-wxwidgets[=DIR]    Enable wxWidgets extension (requires wxWidgets >= 3.0.0).])

PHP_ARG_WITH(wxwidgets-version,set wxWidgets version,
[  --with-wxwidgets[=VERSION]
                             Explicitly set wxWidgets version to download and compile], no, no)

PHP_ARG_ENABLE(wxwidgets-debug, whether to enable debugging support in wxPHP,
[  --enable-wxwidgets-debug
                          Enable debugging messages support in wxPHP], no, no)

PHP_ARG_ENABLE(wxwidgets-static, whether to link to static build of wxWidgets,
[  --enable-wxwidgets-static
                          Link to static build of wxWidgets], no, no)

PHP_ARG_ENABLE(wxwidgets-monolithic, whether to link to monolithic build of wxWidgets,
[  --enable-wxwidgets-monolithic
                          Link to monolithic build of wxWidgets], no, no)

if test "$PHP_WXWIDGETS" != "no"; then

    dnl Set the wxWidgets version to download and compile
    PHP_WX_VERSION="3.0.4"

    if test "$PHP_WXWIDGETS_VERSION" != "no"; then
        PHP_WX_VERSION=$PHP_WXWIDGETS_VERSION
    fi

    dnl Instruct the PHP build system to use a C++ compiler
    PHP_REQUIRE_CXX()

    dnl Default wx-config command
    WXCONFIG_PATH=wx-config

    dnl Check if we are building for mac
    IS_MAC=`uname -a | grep Darwin`
    if test "$IS_MAC" != ""; then
        PHP_WXWIDGETS_MACOSX="yes"
    else
        PHP_WXWIDGETS_MACOSX="no"
    fi

    dnl Check for the installation path of wx-config
    if test "$PHP_WXWIDGETS" != "yes"; then
        AC_MSG_CHECKING([for wx-config existance and wxWidgets version >= 3.0.x])
        for directory in "$PHP_WXWIDGETS" "$PHP_WXWIDGETS/bin" /usr /usr/bin /usr/local /usr/local/bin; do
            dnl search for know command names (prefered first)
            for cmd in wx-config-3.0 wx-config; do
                if test -e "$directory/$cmd"; then
                    wxwidgets_version=`$directory/$cmd --version`
                    version_check=`echo $wxwidgets_version | grep "3.0" && echo $wxwidgets_version | grep "0.[0-9]"`
                    if test -n "$version_check"; then
                        WXCONFIG_PATH="$directory/$cmd"
                        AC_MSG_RESULT([version $wxwidgets_version found])
                        break 2
                    fi
                fi
            done
        done
    else
        dnl If not building for macosx check dependencies are met
        if test "$PHP_WXWIDGETS_MACOSX" == "no"; then
            AC_MSG_CHECKING([for webkitgtk include files])
            WEBKITGTK=`find /usr/include -name "webkit.h" -or -name "webkit2.h"`
            if test "$WEBKITGTK" != ""; then
                AC_MSG_RESULT([found])
            else
                AC_MSG_RESULT([not found])
                AC_MSG_ERROR([webkitgtk include files where not found])
            fi

            AC_MSG_CHECKING([for gstreamer include files])
            if test -e "/usr/include/gstreamer-1.0/gst/gst.h"; then
                AC_MSG_RESULT([found])
            else
                AC_MSG_RESULT([not found])
                AC_MSG_ERROR([gstreamer include files where not found])
            fi

            AC_MSG_CHECKING([for gstreamer plugins include files])
            if test -e "/usr/include/gstreamer-1.0/gst/video/video.h"; then
                AC_MSG_RESULT([found])
            else
                AC_MSG_RESULT([not found])
                AC_MSG_ERROR([gstreamer plugins include files where not found])
            fi

            AC_MSG_CHECKING([for SDL include files])
            if test -e "/usr/include/SDL/SDL.h"; then
                AC_MSG_RESULT([found])
            else
                AC_MSG_RESULT([not found])
                AC_MSG_ERROR([SDL include files where not found])
            fi

            AC_MSG_CHECKING([for SDL audio include files])
            if test -e "/usr/include/SDL/SDL_audio.h"; then
                AC_MSG_RESULT([found])
            else
                AC_MSG_RESULT([not found])
                AC_MSG_ERROR([SDL audio include files where not found])
            fi

            AC_MSG_CHECKING([for libjpeg include files])
            LIBJPEG=`find /usr/include -name "jpeglib.h"`
            if test "$LIBJPEG" != ""; then
                AC_MSG_RESULT([found])
            else
                AC_MSG_RESULT([not found])
                AC_MSG_ERROR([libjpeg include files where not found])
            fi
        fi

        AC_MSG_CHECKING([for a CLI downloading tool like wget or curl])
        PHP_WXWIDGETS_DOWNLOADER="wget"
        WGET=`which wget`
        CURL=`which curl`
        if test "$WGET" != ""; then
            AC_MSG_RESULT([found])
        else
            if test "$CURL" != ""; then
                PHP_WXWIDGETS_DOWNLOADER="curl -L -o wxWidgets-${PHP_WX_VERSION}.tar.bz2"
                AC_MSG_RESULT([found])
            else
                AC_MSG_RESULT([not found])
                AC_MSG_ERROR([wget and curl was not found])
            fi
        fi

        if test ! -e "wxWidgets-${PHP_WX_VERSION}"; then
            echo "Downloading wxWidgets..."
            $PHP_WXWIDGETS_DOWNLOADER https://github.com/wxWidgets/wxWidgets/releases/download/v$PHP_WX_VERSION/wxWidgets-$PHP_WX_VERSION.tar.bz2
            tar -xjf wxWidgets-$PHP_WX_VERSION.tar.bz2
            rm wxWidgets-$PHP_WX_VERSION.tar.bz2
        fi

        dnl Build wxWidgets if not already build
        echo "Starting a custom build of wxWidgets..."

        cd wxWidgets-$PHP_WX_VERSION

        mkdir mybuild
        cd mybuild

        WX_BUILD_DIR=`pwd | sed "s/wxWidgets-${PHP_WX_VERSION}\/mybuild//"`wxWidgets-build

        WX_FLAGS="-fPIC -O2"
        if test "$PHP_WXWIDGETS_DEBUG" != "no"; then
            dnl Enable debugging on wxWidgets.
            WX_FLAGS="-fPIC -O0 -g"
        fi

        if test ! -e "Makefile"; then
            if test "$PHP_WXWIDGETS_MACOSX" == "no"; then
                CFLAGS="$WX_FLAGS" CXXFLAGS="$WX_FLAGS"  \
                ../configure --prefix=$WX_BUILD_DIR --disable-shared \
                --enable-monolithic --with-{gtk=3,sdl}
            else
                CFLAGS="$WX_FLAGS" CXXFLAGS="$WX_FLAGS" \
                ../configure --prefix=$WX_BUILD_DIR --disable-shared \
                --enable-monolithic --with-osx_cocoa
            fi
        fi

        make -j `nproc`
        make install

        cd ../../

        WXCONFIG_PATH="wxWidgets-build/bin/wx-config"
        PHP_WXWIDGETS_STATIC="yes"
        PHP_WXWIDGETS_MONOLITHIC="yes"
    fi

    dnl Show error if wxWidgets was not found
    if test ! -e $WXCONFIG_PATH; then
        AC_MSG_RESULT([not found])
        AC_MSG_ERROR([A matching wxWidgets installation was not found])
    fi

    dnl Enable static mode
    if test "$PHP_WXWIDGETS_STATIC" != "no"; then
        WXCONFIG_PATH="$WXCONFIG_PATH --static"
    fi

    dnl Check whether to enable debugging messages
    if test "$PHP_WXWIDGETS_DEBUG" != "no"; then
        dnl Yes, so set the C macro
        AC_DEFINE(USE_WXPHP_DEBUG,1,[Include debugging support in wxPHP])

        CFLAGS="$CFLAGS -O0 -g"
        CXXFLAGS="$CXXFLAGS -O0 -g"
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
    WXWIDGETS_CFLAGS=`$WXCONFIG_PATH --cxxflags`

    dnl Add some header paths required for wxWindow::GetHandle()
    if test "$PHP_WXWIDGETS_MACOSX" == "no"; then
        WXWIDGETS_IS_GTK2=`$WXCONFIG_PATH --list | grep "config is gtk2"`
        WXWIDGETS_IS_GTK3=`$WXCONFIG_PATH --list | grep "config is gtk3"`

        if test "$WXWIDGETS_IS_GTK2" != ""; then
            GTK2_CFLAGS=`pkg-config gtk+-2.0 --cflags`
            WXWIDGETS_CFLAGS="$WXWIDGETS_CFLAGS $GTK2_CFLAGS"
        elif test "$WXWIDGETS_IS_GTK3" != ""; then
            GTK3_CFLAGS=`pkg-config gtk+-3.0 --cflags`
            WXWIDGETS_CFLAGS="$WXWIDGETS_CFLAGS $GTK3_CFLAGS"
        fi
    fi

    dnl Append wx-config flags to wxphp compiler flags
    PHP_WXWIDGETS_CFLAGS="$PHP_WXWIDGETS_CFLAGS $WXWIDGETS_CFLAGS"

    dnl Add gstreamer and sdl ldflags if on linux
    PHP_WXWIDGETS_OTHER_LDFLAGS=""
    if test "$PHP_WXWIDGETS_MACOSX" == "no"; then
        if test "$PHP_WXWIDGETS_STATIC" != "no"; then
            PHP_WXWIDGETS_OTHER_LDFLAGS=`pkg-config --libs sdl gstreamer-1.0 gstreamer-video-1.0`
        fi
    else
        if test "$PHP_WXWIDGETS_STATIC" != "no"; then
            PHP_WXWIDGETS_OTHER_LDFLAGS="-framework QTKit"
            CC=`$WXCONFIG_PATH --cc`
            CXX=`$WXCONFIG_PATH --cxx`
        fi
    fi

    dnl Retreive and store wxWidgets library flags
    if test "$PHP_WXWIDGETS_MONOLITHIC" != "no"; then
        PHP_WXWIDGETS_LIBS=`$WXCONFIG_PATH --libs`

        WEBKIT_LIB="-lwebkitgtk-3.0"
        if find /usr/include -name "webkit2.h" ; then
            WEBKIT_LIB="-lwebkit2gtk-4.0"
        fi

        dnl Append wxscintilla and gstreamer if static build
        if test "$PHP_WXWIDGETS_STATIC" != "no"; then
            PHP_WXWIDGETS_LDFLAGS="$PHP_WXWIDGETS_LIBS -lwxscintilla-3.0 $WEBKIT_LIB $PHP_WXWIDGETS_OTHER_LDFLAGS"
            LDFLAGS="$LDFLAGS $PHP_WXWIDGETS_LDFLAGS"
        fi
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
    PHP_ADD_LIBRARY(stdc++, 1, WXWIDGETS_SHARED_LIBADD)

    dnl PHP_NEW_EXTENSION(extname, sources [, shared [, sapi_class [, extra-cflags [, cxx [, zend_ext]]]]])
    PHP_NEW_EXTENSION(wxwidgets, src/app.cpp src/references.cpp <?=$source_files?> src/functions.cpp wxwidgets.cpp, $ext_shared,,,1)
fi
