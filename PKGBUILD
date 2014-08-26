# Maintainer: Jefferson González <jgmdev@gmail.com>

pkgname=php-wxwidgets-git
pkgver=20140810
_pkgver=3.0.1
pkgrel=1
pkgdesc="PHP bindings to the cross-platform wxWidgets GUI Toolkit library."
arch=('i686' 'x86_64')
url="http://wxphp.org"
license=('PHP')
depends=('gtk3' 'libgl' 'libxxf86vm' 'libsm' 'sdl' 'sdl_sound' 'gstreamer' 'php' 'webkitgtk')
makedepends=('mesa' 'glu' 'libxt' 'gstreamer' 'sdl' 'sdl_sound' 'php' 'webkitgtk')

pkgver() {
	date +%Y%m%d
}

source=(
	"http://downloads.sourceforge.net/wxwindows/wxWidgets-${_pkgver}.tar.bz2"
	"https://github.com/wxphp/wxphp/archive/master.zip"
)

sha1sums=(
	'73e58521d6871c9f4d1e7974c6e3a81629fddcf8'
	'SKIP'
)

prepare() {
	rm -fr "${srcdir}/wxWidgets-static"
	rm -fr "${srcdir}/wxWidgets-build"
	cp -R "${srcdir}/wxWidgets-${_pkgver}" "${srcdir}/wxWidgets-build"
  
	rm -fr "${srcdir}/wxphp-build"
	cp -R "${srcdir}/wxphp-master" "${srcdir}/wxphp-build"
	cd "${srcdir}/wxphp-build"
	
	phpize
}

build() {
	cd "${srcdir}/wxWidgets-build"
	
	CFLAGS="-fPIC -O2 -Wall -W" CXXFLAGS="-fPIC -O2" \
	./configure --prefix="${srcdir}/wxWidgets-static" \
		--with-{gtk=3,libjpeg=sys,libpng=sys,libtiff=sys,libxpm=sys,opengl,regex=builtin,sdl} \
		--enable-{graphics_ctx,unicode,monolithic} \
		--disable-shared
		
	make
	make -C locale allmo
	make install
  
	cd "${srcdir}/wxphp-build"
	
	php tools/reference_generator.php
	
	./configure \
		--with-wxwidgets="${srcdir}/wxWidgets-static" \
		--enable-wxwidgets-monolithic \
		--enable-wxwidgets-static
		
	make
}

package() {
	mkdir -p "${pkgdir}/usr/bin"
	mkdir -p "${pkgdir}/usr/share/doc/${pkgname}"
	
	# Add documentation to package
	cd "${srcdir}/wxphp-build"
	cp -rf doc/* "${pkgdir}/usr/share/doc/${pkgname}/"
	
	# Add wxphp shell script to package
 	echo "#!/bin/sh" > "${pkgdir}/usr/bin/wxphp"
 	echo "exec /usr/bin/php -d extension=wxwidgets.so \"\$@\"" >> "${pkgdir}/usr/bin/wxphp"
 	chmod 0755 "${pkgdir}/usr/bin/wxphp"
 	
 	# Copy wxwidgets php module
	EXTENSIONS_DIR=`php-config --extension-dir`
	CHROOT_EXTENSION_DIR="${pkgdir}${EXTENSIONS_DIR}"
	
	mkdir -p "${CHROOT_EXTENSION_DIR}"
	strip -s modules/wxwidgets.so
	cp -rf modules/wxwidgets.so "${CHROOT_EXTENSION_DIR}"
}
