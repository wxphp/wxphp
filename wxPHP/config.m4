PHP_ARG_WITH(wxWidgets,for wxWidgets support,[  --with-wxWidgets[=DIR]       enable wxWdigets extension])

if test "$PHP_WXWIDGETS" != "no"; then

	PHP_REQUIRE_CXX
	PHP_WXWIDGETS_CFLAGS=`wx-config --cxxflags`
	PHP_WXWIDGETS_LIBS=`wx-config --debug=no --libs`
	CXXFLAGS="$CXXFLAGS $PHP_WXWIDGETS_CFLAGS"

	AC_MSG_RESULT($PHP_WXWIDGETS_CFLAGS)
	AC_MSG_RESULT($PHP_WXWIDGETS_LIBS)
	AC_MSG_RESULT($CPPFLAGS)
	AC_MSG_RESULT($CXXFLAGS)


	PHP_EVAL_INCLINE($PHP_WXWIDGETS_CFLAGS)
  PHP_EVAL_LIBLINE($PHP_WXWIDGETS_LIBS, WXWIDGETS_SHARED_LIBADD)
	PHP_ADD_LIBRARY(stdc++, , WXWIDGETS_SHARED_LIBADD)
	PHP_SUBST(WXWIDGETS_SHARED_LIBADD)

	PHP_NEW_EXTENSION(wxWidgets, app.c frame.c wxwidgets.c, $ext_shared,,,1)
	CFLAGS="-x c++ `wx-config --cxxflags --debug=no --libs`"
fi
