#!/bin/bash
# Script to facilitate the development process on unix environments 
#
# This script should only be used after initializing for build
# by calling phpize and ./configure [options]

# Point this variable to the directory where the resulting wxwidgets.so
# will go (usually the extensions dir of your php installation)
PHP_EXTENSIONS_DIR=`php-config --extension-dir`

# Check if needed applications are installed
if [ -z `which php` ]; then
	echo "php not found: Please install PHP"
	exit 1
fi

if [ -z `which php-config` ]; then
	echo "php-config not found: Please install PHP development files"
	exit 1
fi

if [ -z `which make` ]; then
	echo "make not found: Please install Development utilities and compiler"
	exit 1
fi

# Check the user ran phpize and configure before running this script
if [ ! -e "config.h" ]; then
	echo "config.h not found: Please run phpize and configure before running this script"
	exit 1
fi

# Check if running script from wxphp root
#if [ ! -e "includes/app.h" ]; then
#	echo "app.h not found: Please run this script from the wxphp root directory"
#	exit 1
#fi

# Copy the most recent classes binding file
cp tools/source_maker/class_selector/classes.json json

# Enter code generator directory
cd tools/source_maker/

# Run the code generator
cp class_selector/classes.json ./../../json/
php code_generator.php

# Copy non dynamic template files
if [ ! -e "./../../src/app.cpp" ]; then
	cp source_templates/app.h ./../../includes/
	cp source_templates/app.cpp ./../../src/
fi

if [ ! -e "./../../src/references.cpp" ]; then
	cp source_templates/references.h ./../../includes/
	cp source_templates/references.cpp ./../../src/
fi

# Return to main source directory
cd ../../

# Get cpu cores for parallel faster build
CPU_CORES=`grep processor /proc/cpuinfo | wc -l`

# Start the build process
make -j $[(($CPU_CORES / 2) + 1)]

# Strip debugging symbols for smaller file
# strip modules/wxwidgets.so

# Copy dynamic library to php extensions/modules directory
echo "Input root password to install the extension"

if [ -n `which sudo` ]; then
	sudo cp modules/wxwidgets.so $PHP_EXTENSIONS_DIR
else
	su cp modules/wxwidgets.so $PHP_EXTENSIONS_DIR
fi

# No errors
exit 0
