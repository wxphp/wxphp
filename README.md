[![Build Status](https://img.shields.io/travis/wxphp/wxphp/master.svg?style=flat-square)](https://travis-ci.org/wxphp/wxphp)
[![Download wxPHP](https://img.shields.io/sourceforge/dw/wxphp.svg)](https://sourceforge.net/projects/wxphp/files/latest/download)
[![Project Stats](https://www.openhub.net/p/wxphp/widgets/project_thin_badge?format=gif)](https://www.openhub.net/p/wxphp)

**[Homepage](http://wxphp.org/)**
|
**[Documentation](http://github.com/wxphp/wxphp/wiki)**
|
**[Downloads](http://wxphp.org/download)**
|
**[Applications](http://wxphp.org/applications)**
|
**[News](http://wxphp.org/news)**
|
**[Chat](http://wxphp.org/chat)**

---

[![wxPHP Logo](http://wxphp.org/themes/wxphp/images/logo.png)](http://wxphp.org)

wxPHP stands for "wxwidgets for PHP" and it is a php binding/wrapper
for the cross-platform library [wxWidgets](http://wxwidgets.org/),
which gives you the ability to develop desktop applications using the
php programming language. This applications can be executed on windows,
linux and macosx using the same code base with a native look and feel.

One of the ideas is that you can use your php web applications code
base and logic to create native desktop applications that communicate
to them transparently. This way you can give your users a seamless and
native experience from the desktop while staying in sync with your
web apps.

There are many more use cases, but we invite you to download and
try this project by your self. We hope everyone can enjoy it as much
as we have enjoyed developing it.

## wxFormBuilder

wxFormBuilder is a RAD tool for wxWidgets GUI design. So to make
development with wxPHP more easier we added php support to it.
For more information visit the [project page](http://wxformbuilder.org/).

Integration of PHP support wouldn't be possible without the help
of [RedTide](https://github.com/redtide) and the rest of
[wxFormBuilder team](https://sourceforge.net/p/wxformbuilder/_members/),
Thanks a lot!

## PHP 8 Note
To use PHP 8 in debug mode you need to change the function `zend_internal_call_should_throw` 
to instantly return 0 at the beginning of the function inside the file `Zend/zend_execute.c` 
and then recompile PHP 8.

The main problem is that PHP 8 enforces the usage of arginfo which is not entirely possible
in this project stated here [#100](https://github.com/wxphp/wxphp/issues/100)


## Support

Any problems, please file an issue or visit the forums:

* [http://github.com/wxphp/wxphp/issues](http://github.com/wxphp/wxphp/issues)
* [http://forums.wxphp.org/](http://forums.wxphp.org/)
* [https://groups.google.com/forum/#!forum/wxphp](https://groups.google.com/forum/#!forum/wxphp)

GitHub.com project page where development occurs:

* [https://github.com/wxphp/wxphp](https://github.com/wxphp/wxphp)

SourceForge.net project page which hosts the binary builds.

* [https://sourceforge.net/projects/wxphp](https://sourceforge.net/projects/wxphp)

## Contributors & Sponsors

This project is possible thanks to the following people and all of
those that report issues on the issue tracker. Thanks to Everyone!

<a href="https://github.com/wxphp/wxphp/graphs/contributors">
  <img src="https://contributors-img.firebaseapp.com/image?repo=wxphp/wxphp" />
</a>

Made with [contributors-img](https://contributors-img.firebaseapp.com).

PHP 7 upgrade has been sponsored by

<a href="https://rangee.com/">
  <img src="https://rangee.com/wp-content/uploads/2018/09/Rangee_Logo_2018_small.jpg"/>
</a>
