#!/bin/bash

# Clean the root source directory from build files
phpize5 --clean
rm -rf doc
rm -rf wxWidgets-build
rm -rf wxWidgets.git/mybuild
rm tools/discarded.log
dh_clean
