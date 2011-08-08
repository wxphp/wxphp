#!/bin/bash

php parser.php classes.out consts.dump enums.dump
rm ../wxwidgets.cpp
php update.php
