#!/bin/bash

# Calculate cpu cores to use more than 1 if possible to speed up
# build time.
CPU_CORES=`grep processor /proc/cpuinfo | wc -l`
CORES_COUNT=$[(($CPU_CORES / 2) + 1)]

# Download wxWidgets from sourceforge
if [ ! -e "wxWidgets-3.0.0" ]; then
    wget http://downloads.sourceforge.net/wxwindows/wxWidgets-3.0.0.tar.bz2
    tar -xjf wxWidgets-3.0.0.tar.bz2
    rm wxWidgets-3.0.0.tar.bz2
fi

# Build wxWidgets if not already build
cd wxWidgets-3.0.0

mkdir mybuild
cd mybuild

WX_BUILD_DIR=`pwd | sed "s/wxWidgets-3.0.0\/mybuild//"`wxWidgets-build

CFLAGS="-fPIC -O2 -Wall -W" CXXFLAGS="-fPIC -O2"  \
../configure --prefix=$WX_BUILD_DIR --disable-shared --enable-monolithic

make -j $CORES_COUNT 
make install

cd ../../

# Generate documentation
php tools/reference_generator.php

# Generate configure script
phpize5

WX_LDFLAGS="-LwxWidgets-build/lib -pthread -lwx_gtk2u-3.0 -lwxregexu-3.0 -lwxscintilla-3.0"
OTHER_LDFLAGS=`pkg-config --libs gstreamer-0.10 gstreamer-interfaces-0.10 gtk+-2.0  libpng zlib`

dh_auto_configure -- \
    LDFLAGS="$LDFLAGS $WX_LDFLAGS $OTHER_LDFLAGS -ljpeg" \
    --with-php-config=/usr/bin/php-config5 \
    --with-wxwidgets=wxWidgets-build \
    --enable-wxwidgets-monolithic
