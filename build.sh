#!/bin/bash
# Script to facilitate the development process
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
if [ ! -e "app.h" ]; then
	echo "app.h not found: Please run this script from the wxphp root directory"
	exit 1
fi

# Copy the most recent classes binding file
cp source_maker/class_selector/classes.json source_maker/dumps

# Enter code generator directory
cd source_maker/

# Start the code generator
./go.sh

# Clean up source_maker dir and leave the discarded.log
rm *.h
rm *.cpp
rm config.*

# Return to main source directory
cd ..

# Get cpu cores for parallel faster build
CPU_CORES=`grep -i processor /proc/cpuinfo | wc -l`

# Start the build process
make -j $[(($CPU_CORES / 2) + 1)]

# Strip debugging symbols for smaller file
strip modules/wxwidgets.so

# Copy dynamic library to php extensions/modules directory
echo "Input root password to install the extension"

if [ -n `which sudo` ]; then
	sudo cp modules/wxwidgets.so $PHP_EXTENSIONS_DIR
else
	su cp modules/wxwidgets.so $PHP_EXTENSIONS_DIR
fi

# No errors
exit 0
