#!/bin/bash

# Generate documentation
php tools/reference_generator.php

# Generate configure script
phpize5

# Start configure process
dh_auto_configure -- \
    --with-php-config=/usr/bin/php-config5
