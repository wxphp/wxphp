#!/bin/bash
# Script to facilitate the development process
#
# This script should only be used after initializing for build
# by calling phpize and ./configure [options]

# Point this variable to the directory where the resulting wxwidgets.so
# will go (usually the extensions dir of your php installation)
PHP_EXTENSIONS_DIR=/usr/lib/php5/20090626/

# Copy the most recent classes bindings files
cp source_maker/class_selector/classes.json source_maker/dumps

# Enter code generator directory
cd source_maker/

# Start the code generator
./go.sh

# Return to main source directory
cd ..

# Start the build process
make

# Strip debugging symbols for smaller file
strip modules/wxwidgets.so

# Copy dynamic library to php extensions/modules directory
cp modules/wxwidgets.so $PHP_EXTENSIONS_DIR
