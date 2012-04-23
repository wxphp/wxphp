/**
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * Some parts of this file are auto-generated.
*/

#ifdef PHP_WIN32
	#include <winsock2.h>
#endif

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif


#if !wxUSE_THREADS
    #error "This sample requires thread support!"
#endif

#if !wxUSE_UNICODE
	#define tcscmp strcmp
#else
	#define tcscmp wcscmp
#endif

#include <wx/thread.h>
#include <wx/aui/aui.h>
#include <wx/fs_zip.h>

/**
 * Space reserved for autogenerated #include declarations
 */
// entries --->
// <--- entries


/**
 * Import configure options when building outside 
 * of the PHP source tree
 */
#ifdef HAVE_CONFIG_H
	#include "config.h"
#endif

#ifdef WORDS_BIGENDIAN
	#undef WORDS_BIGENDIAN
#endif

#ifdef M_PI
	#undef M_PI
#endif

#ifdef _WIN32_WINNT
	#undef _WIN32_WINNT
#endif

/**
 * Include PHP Standard Header
 */
extern "C" {
#include "php.h"
#include "zend_API.h" //Declaration for zend_declare_class_constant_long
#include "ext/standard/info.h" //Declaration of ini functions like php_info_print_table_start()

//For backward compatibility with older versions of php that didnt
//implemented this macro
#ifndef PHP_FE_END
	#define PHP_FE_END {NULL, NULL, NULL}
#endif
}