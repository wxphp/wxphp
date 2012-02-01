#!/bin/bash

cp class_selector/classes.json dumps/
rm ../wxwidgets.cpp
php parser.php
php update.php
cp config.m4 ../
cp config.w32 ../
