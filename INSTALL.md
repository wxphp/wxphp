**Note:** This document may be outdated, check also
[http://github.com/wxphp/wxphp/wiki](http://github.com/wxphp/wxphp/wiki)


# Table of Contents

* [Building on Windows](#building-on-windows)
* [Building and Installing on Linux/Unix Environments](#building-and-installing-on-linuxunix-environments)
* [Creating a DEB Package](#creating-a-deb-package)
* [Linking statically to wxWidgets on Linux/Unix/MacOSX](#linking-statically-to-wxwidgets-on-linuxunixmacosx)
* [Building on Mac OS X](#building-on-mac-os-x)
* [Running the examples](#running-the-examples)
* [Third Party Tools](#third-party-tools)
* [Development](#development)


## Building on Windows

### Requirements
	
* Windows SDK 6.1
* Visual C++ 2010 Express Edition
* wxWidgets 3.0.0
* PHP5 Sources
* wxPHP source code
* Read the README_MSW.txt
	
### Install Windows SDK 6.1 and Visual C++ 2008 Express Edition

1. Windows SDK 6.1 download links:

  [Web Setup](http://www.microsoft.com/download/en/details.aspx?displaylang=en&id=11310) or [DVD ISO](http://www.microsoft.com/downloads/details.aspx?FamilyId=F26B1AA4-741A-433A-9BE5-FA919850BDBF&displaylang=en)
		
2. Visual Studio download link:
	
  [2008 Express Edition](http://www.microsoft.com/visualstudio/en-us/products/2008-editions/express)
	
### Download and install wxWidgets 3.0.0

1. Clone git sources:
	
		git clone https://github.com/wxWidgets/wxWidgets.git wxWidgets.git
		git checkout tags/WX_3_0_0
	
2. Open Windows SDK 6.1 CMD Shell:
		
		setenv /release /x86 /xp
		cd wxWidgets_Installation_Path
		cd build\msw
		nmake -f makefile.vc BUILD=release

### Download and Install PHP sources

*NOTE: Compilation has been tested against PHP 5.3 and 5.4 it should 
work with any 5.3.x - 5.4.x version of php it also works with 5.5 but
there may be some issues that need to be fixed*

1. Download PHP 5:
	
  To check available versions for download:
		
   [http://windows.php.net/download/](http://windows.php.net/download/)
			
  Direct download link for 5.5.7:
		
   [http://windows.php.net/downloads/releases/php-5.5.7-src.zip](http://windows.php.net/downloads/releases/php-5.5.7-src.zip)
			
2. Create the directory:
		
		c:\php-sdk
	
3. Download PHP 5 binary tools:
		
  [http://windows.php.net/downloads/php-sdk/](http://windows.php.net/downloads/php-sdk/)
	
4. Extract the binary tools inside the directory c:\php-sdk leaving you with:
	
		c:\php-sdk\bin
		c:\php-sdk\script
		
5. Open the Windows SDK 6.1 CMD Shell and do the following:
		
		setenv /release /x86 /xp
		cd c:\php-sdk\
		bin\phpsdk_setvars.bat
		bin\phpsdk_buildtree.bat php53dev
		
6. Extract the php source files and place them on:
	
		c:\php-sdk\php55dev\vc9\x86\php5.5.x
		
7. Then compile the sources to see if everything is working:
	
		cd c:\php-sdk\php53dev\vc9\x86\php5.5.x
		buildconf
		configure --disable-all --disable-zts --enable-cli
		nmake

### Compile wxPHP

*Note: Make sure to read the README_MSW.txt for some compilation and linking fixes*

1. Get wxPHP sources:
		
		git clone git@github.com:wxphp/wxphp.git wxphp
	
2. Put the source code in the ext folder of your php build folder:
	
		c:\php-sdk\php53dev\vc9\x86\php5.5.x\ext\wxphp
		
3. Open the Windows SDK 6.1 CMD Shell and do the following:
	
		setenv /release /x86 /xp
		cd c:\php-sdk\
		bin\phpsdk_setvars.bat
		cd c:\php-sdk\php53dev\vc9\x86\php5.5.x
		buildconf
		configure --disable-all --disable-zts --enable-cli --with-wxwidgets=C:\wxWidgets_installation_path
		nmake
		
Copy the resulting php_wxwidgets.dll file on the Release directory 
to the php extensions directory of your current PHP 5 VC9 X86 Non 
Thread Safety setup.

If you want the wxWidget extension to be automatically loaded, 
add the following lines to the end of your php.ini:
	
	[PHP_WXWIDGETS]
	extension=php_wxwidgets.dll

	
	

## Building and Installing on Linux/Unix Environments

### Install C/C++ compilers and autoconf tools
	
Ubuntu and Debian based distros:
		
	sudo apt-get install build-essential

### Compile wxWidgets library and development packages

wxWebView, a web browser like control, was enabled on the wrapper, in 
order to compile wxWidgets with wxWebView support you will need to have
libwebkitgtk development files and library. On ubuntu and debian based 
distros this could be done with:
	
	sudo apt-get install libwebkitgtk-dev
	
Also wxMediaCtrl is binded so you need to install gconf and gstreamer
development files on linux platforms:

	sudo apt-get install libgconf2-dev libgstreamer0.10-dev libgstreamer-plugins-base0.10-dev

Download wxWidgets tar file and uncompress it on your directory of 
choice or git clone with:

*NOTE: Remember to use tar.bz2 when downloading sources, using the zip 
file results on compilation errors under linux, since file line endings 
are formatted for windows.*
	
	git clone https://github.com/wxWidgets/wxWidgets.git wxWidgets.git
	git checkout tags/WX_3_0_0

*NOTE: Currently we have tested with wxWidgets 3.0.0 version.*
	
On the console change to the wxWidgets directory and:
	
	./configure --prefix=/opt/wxWidgets
	make
	sudo make install
	
### Install php5 development packages 

Ubuntu and Debian based distros:
		
	apt-get install php5-dev
	
### Configure and build the extension
	
	cd wxphp
	phpize
	./configure --with-wxwidgets=/opt/wxWidgets
	make
	
### Installing the extension
	
After make a file named wxwidgets.so will be generated on the modules
directory. You can reduce the file size by stripping debugging symbols
by using the strip utility:
	
	strip modules/wxwidgets.so
		
Then you can copy the resulting wxwidgets.so file on the modules 
directory to the php extensions directory. PHP extensions directory 
is usually found on /usr/lib/php5/ On Ubuntu 10.04 - 12.04 this 
directory is /usr/lib/php5/<year month day of api>/

To automate the installation process just use:

	sudo make install
	
If you want the wxWidget extension to be automatically loaded, add the
following lines to your php.ini:
	
	; load php wxwidgets module
	extension=wxwidgets.so
		
If not, then enable dynamic loading on your php.ini usually on:
		
	/etc/php5/cli/php.ini
		
modify enable_dl = off to enable_dl = on
	



## Creating a DEB Package

Before creating a deb package you need the following dependencies to
be satisfied:

  * php5-dev
  * git
  * libwebkitgtk-dev
  * libgconf2-dev
  * libgstreamer0.10-dev
  * libgstreamer-plugins-base0.10-dev
		
On the root wxphp source tree execute:

	dpkg-buildpackage
		
That should take care of building and creating a deb package. We aren't
using upstream wxWidgets packages since they are sometimes compiled 
with less features and there aren't 3.0.0 packages of wxWidgets available
on ubuntu or debian repositories.




## Linking statically to wxWidgets on Linux/Unix/MacOSX

Statically linking is a good idea to package wxphp into rmp/deb files without
dependencies on third party wxGTK packages that may be incompatible. On 
64 bits static linking is impossible without the use of -fPIC or so that
has been my experience, so here is the steps involved to achieve it.

1. Compile wxWidgets with -fPIC

		CFLAGS="-fPIC -O2 -Wall -W" CXXFLAGS="-fPIC -O2" \
		../configure --prefix=/opt/wxWidgets-static --disable-shared --enable-monolithic
	
2. Run the generated wxphp configure script with custom ld flags
	
		LDFLAGS="-L/opt/wxWidgets-static/lib -pthread -lwx_gtk2u-3.0 -lwx_gtk2u_gl-3.0 -lwxregexu-3.0 -lwxscintilla-3.0 \
		./configure --with-wxwidgets=/opt/wxWidgets-static --enable-wxwidgets-monolithic
	
3. Strip debugging symbols for smaller library size

		strip modules/wxwidgets.so
	
If a smaller library size is wanted it could be achieved by playing with 
the GCC optimization flags, when compiling the wxWidgets library on the 
first step as on the second step. Some flags that could reduce the file 
size (a little bit) of final libraries as increase performance could be 
-Os and -s for example: 
	
	CFLAGS="-fPIC -Os -s" CXXFLAGS="-fPIC -Os -s"




## Building on Mac OS X

The process of building on mac is the same as on linux the only
differences are the way we configure wxWidgets build, as the applications
needed. We have tested with the php version available on homebrew.

*Note: In this example we will be building against Mac OS X Mavericks (10.9).
If you are running a different version of Mac OS, then replace references to 10.9
with the version you are running. You can find this in "About This Mac"*

### Requirements
    
1. [Xcode (for a working compiling environment)](https://developer.apple.com/technologies/tools/)
    
2. [Homebrew (for PHP development environment and binaries)](http://brew.sh/)

### Install PHP from Homebrew

This process could take a long time since homebrew
downloads php sources and dependency sources and compiles.

	brew install php55
	
*Note: You may need to run ```brew tap homebrew/php``` for the PHP packages to be available in homebrew*

### Get wxWidgets sources and build

	git clone https://github.com/wxWidgets/wxWidgets.git wxWidgets.git
	git checkout tags/WX_3_0_1
	cd wxWidgets.git
	mkdir mybuild
	cd mybuild
	../configure -with-osx_cocoa --disable-compat24 --with-macosx-version-min=10.9 --with-macosx-sdk=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk --prefix=/opt/wxWidgets CFLAGS="-arch x86_64" CXXFLAGS="-arch x86_64" CPPFLAGS="-arch x86_64" LDFLAGS="-arch x86_64" OBJCFLAGS="-arch x86_64" OBJCXXFLAGS="-arch x86_64"

*Note: if non 64 bit architecture just remove the x86_64 flags from the configure command*

	make
	sudo make install
	
*Note: The location of your Mac OS X SDK may vary depending on your version of OS X. It is most likely to be located in ```/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.x.sdk``` but may also be located in ```/Developer/SDKs/MacOSX10.x.sdk```*

### Compile wxPHP as usual

	cd wxphp
	phpize
	./configure --with-wxwidgets=/opt/wxWidgets
	make
	make install




## Running the examples

In order to run the examples provided you need to install php cli version.
On ubuntu this is done by running:

	sudo apt-get install php5-cli
	
To run the examples change on your console to the examples directory
and run the php interpreter on each file as follows:

	php thread.php
		
on windows you can also do
	
	php-win thread.php




## Third Party Tools

### wxFormBuilder - a RAD tool for wxWidgets GUI design.

We worked on adding php support to this great forms designer.
For more information visit the official website:
		
 * [http://wxformbuilder.org/](http://wxformbuilder.org/)
	
Also You can find the latest nightly builds for windows with
PHP support at:
	
 * [http://sourceforge.net/projects/wxformbuilder/files/](http://sourceforge.net/projects/wxformbuilder/files/)
		
Integration of PHP support wouldn't be possible without the help
of RedTide and the rest of wxFormBuilder team, Thanks a lot!
		
	


## Development

For those interested on helping improve this extension this section 
explains the basics of how it works. Almost every subdirectory
contains a README file explaining its content so be sure to check them
all ;)

### Code is auto generated

Almost all the wxPHP extension source code is generated by a set
of php scripts except app.h, app.cpp, references.h and references.cpp.
Even at a certain point config files are re-generated to update the list
of source files that need to be compiled. The PHP script that
generates the source code uses as input the xml files produced by doxygen
from the wxWidgets docs. This xml files are parsed by another tool 
and then converted into json files for easy mapping into php arrays 
using json_decode function.
	
### XML Parser

On the tools directory you will find the script on charge of
parsing the xml files and converting them to json files. This
script uses the xml files on the xml directory as input. In order 
to regenerate this xml files with the most recent changes you would 
need a copy of wxWidgets source code then inside of the wxWidgets 
directory:
	
	cd docs\doxygen
	./regen.sh xml
		
This will produce hundreds of xml files that constitute the wxWidgets
documentation. You would need to copy all the files on out/xml 
to the xml directory on the root directory of wxPHP. After you run 
the json_generator script with:
	
	php tools/json_generator.php
		
Some json files will be generated on the json dir, this files are
	
	classes.json, consts.json, global_variables.json, typedef.json
	class_groups.json, enums.json, includes.json, class_variables.json,
	functions.json
	
*NOTE: For some other details check the README file on the xml, json and tools directories.*

### Code Generator

Inside tools/source_maker directory resides the php script in charge of
all the C/C++ code generation (code_generator.php) that forms the wxPHP 
extension. As said before this script depends on the json files 
generated by json_generator.php, you will find a copy of all these files. 
The source maker will read the json files and create a set of headers 
and source files wrapping the wxWidgets classes defined on classes.json
	
It starts by decoding all json files and cleaning methods with 
unsupported parameter types as other qualities not handled correctly 
by the generator. All the cleaning activity is logged on a file 
named discarded.log. Then it process each class using a php template
system. The templates directory holds the source of what will form 
the skeleton of the wrapping code.
	
After generating the classes binding code it generates binding code
to the global wxWidgets functions and store them on functions.cpp.
Then it populates the files on source_templates directory with
all the code needed to initialize each binded class, function, global
variable, etc... At the final stage, it uses the config_templates
directory to retrieve the configuration files skeleton and populate it
with the list of files that need to be compiled.

Use the go.sh/bat utility script to automate some of the steps necessary
or regen.sh script on the wxPHP root directory.
	
*NOTE: For more information about the code generator check the README 
file on tools/source_maker directory.*
		  
### Class/Methods Selector

An GUI utility on tools/source_maker/class_selector/selector.php was created
using wxPHP itself in order to facilitate the selection of the class
methods that are going to be binded. To use this utility you need to
have a working wxPHP.
	
This utility uses the file named full_classes_set.json that is actually
a copy of the classes.json generated by the xml parser. When saving
the selected methods it creates a file named classes.json that is the
one actually used by the code generator. This file automatically replaces
the one on dumps directory each time the go.sh/bat utility is ran to
generate the code.

*NOTE: For more information about the utility check the README file on 
source_maker/class_selector directory.*
