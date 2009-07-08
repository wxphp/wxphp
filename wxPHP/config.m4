PHP_ARG_WITH(wxWidgets,for wxwidgets support,[  --with-wxwidgets[=DIR]       enable wxwdigets extension])

if test "$PHP_WXWIDGETS" != "no"; then

	PHP_REQUIRE_CXX()
	PHP_WXWIDGETS_CFLAGS=`wx-config --debug --cxxflags`
	PHP_WXWIDGETS_LIBS=`wx-config --debug --libs std,stc`
dnl     PHP_WXWIDGETS_LIBS=`wx-config --libs std,stc`
	CXXFLAGS="$CXXFLAGS $PHP_WXWIDGETS_CFLAGS"

dnl	AC_MSG_RESULT($PHP_WXWIDGETS_CFLAGS)
dnl	AC_MSG_RESULT($PHP_WXWIDGETS_LIBS)
dnl	AC_MSG_RESULT($CPPFLAGS)
dnl	AC_MSG_RESULT($CXXFLAGS)


	PHP_EVAL_INCLINE($PHP_WXWIDGETS_CFLAGS)
  	PHP_EVAL_LIBLINE($PHP_WXWIDGETS_LIBS, WXWIDGETS_SHARED_LIBADD)

        PHP_SUBST(WXWIDGETS_SHARED_LIBADD)
	PHP_ADD_LIBRARY(stdc++, 1 , WXWIDGETS_SHARED_LIBADD)

	PHP_NEW_EXTENSION(wxwidgets, app.cpp frame.cpp wxwidgets.cpp, $ext_shared,,,1)
dnl	CFLAGS="-x c++ `wx-config --cxxflags --debug=yes --libs std,stc`"
dnl     CFLAGS="`wx-config --cxxflags`"
dnl	CFLAGS="-x c++"
fi
