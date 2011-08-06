#!/bin/bash

php parser.php classes.out consts.dump
rm ../wxwidgets.cpp
php update.php
