#!/bin/bash
# Script to regenerate the sources.

# Check if running script from wxphp root
if [ ! -e "php_wxwidgets.h" ]; then
	echo "php_wxwidgets.h not found: Please run this script from the wxphp root directory"
	exit 1
fi

# Copy the most recent classes binding file
cp tools/source_maker/class_selector/classes.json json

# Enter code generator directory
cd tools/source_maker/

# Run the code generator
php code_generator.php

# Copy non dynamic template files
rm ./../../includes/app.h
rm ./../../src/app.cpp
cp source_templates/app.h ./../../includes/
cp source_templates/app.cpp ./../../src/

rm ./../../includes/references.h
rm ./../../src/references.cpp
cp source_templates/references.h ./../../includes/
cp source_templates/references.cpp ./../../src/

# Return to main source directory
cd ../../

echo ""
echo "================================================="
echo "Sources successfully regenerated. To compile use:"
echo ""
echo "  phpize"
echo "  configure"
echo "  make"
echo ""
echo "in order to build the extension."
echo "================================================="
