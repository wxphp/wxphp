# Maintainer: Jefferson González <jgmdev@gmail.com>

pkgname=php-wxwidgets-git
pkgver=20132012
_pkgver=3.0.0
pkgrel=1
pkgdesc="PHP bindings to the cross-platform wxWidgets GUI Toolkit library."
arch=('i686' 'x86_64')
url="http://wxphp.org"
license=('PHP')
depends=('gtk2' 'libgl' 'libxxf86vm' 'libsm' 'sdl' 'gstreamer' 'php' 'webkitgtk2')
makedepends=('mesa' 'glu' 'libxt' 'gstreamer' 'php' 'webkitgtk2')

pkgver() {
	date +%Y%m%d
}

source=(
	"http://downloads.sourceforge.net/wxwindows/wxWidgets-${_pkgver}.tar.bz2"
	"https://github.com/wxphp/wxphp/archive/master.zip"
)

sha1sums=(
	'756a9c54d1f411e262f03bacb78ccef085a9880a'
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
		--with-{gtk=2,libjpeg=sys,libpng=sys,libtiff=sys,libxpm=sys,opengl,regex=builtin,sdl} \
		--enable-{graphics_ctx,unicode,monolithic} \
		--disable-shared
		
	make
	make -C locale allmo
	make install
  
	cd "${srcdir}/wxphp-build"
	
	php tools/reference_generator.php
	
	WX_LDFLAGS="-L${srcdir}/wxWidgets-static/lib -pthread -lwx_gtk2u-3.0 -lwx_gtk2u_gl-3.0 -lwxregexu-3.0 -lwxscintilla-3.0"
	OTHER_LDFLAGS=`pkg-config --libs gstreamer-0.10 gstreamer-interfaces-0.10 gtk+-2.0 libpng zlib`
	
	LDFLAGS="${WX_LDFLAGS} ${OTHER_LDFLAGS} -ljpeg" \
	./configure \
		--with-wxwidgets="${srcdir}/wxWidgets-static" \
		--enable-wxwidgets-monolithic
		
	make
}

package() {
	mkdir -p "${pkgdir}/usr/share/doc/${pkgname}"
	
	cd "${srcdir}/wxphp-build"
	cp -rf doc/* "${pkgdir}/usr/share/doc/${pkgname}/"
	
	EXTENSIONS_DIR=`php-config --extension-dir`
	CHROOT_EXTENSION_DIR="${pkgdir}${EXTENSIONS_DIR}"
	
	mkdir -p "${CHROOT_EXTENSION_DIR}"
	strip -s modules/wxwidgets.so
	cp -rf modules/wxwidgets.so "${CHROOT_EXTENSION_DIR}"
}
