#!/bin/bash

rm ./../../includes/*.h
rm ./../../src/*.cpp

cp class_selector/classes.json ./../../json/
php code_generator.php

cp source_templates/app.h ./../../includes/
cp source_templates/app.cpp ./../../src/

cp source_templates/references.h ./../../includes/
cp source_templates/references.cpp ./../../src/
