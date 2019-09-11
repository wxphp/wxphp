/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * This file was auto-generated by the wxPHP source maker
*/

#ifndef WXPHP_FILE_H_GUARD
#define WXPHP_FILE_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_file_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxFFile_entry;
void php_wxFFile_destruction_handler(zend_resource * TSRMLS_DC);

class wxFFile_php: public wxFFile{
	public:
	
	wxFFile_php(const wxString& filename, const wxString& mode="r"):wxFFile(filename, mode){}
	wxFFile_php():wxFFile(){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFFile{
    wxFFile_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFFile;

void php_wxFFile_free(void *object TSRMLS_DC);
zend_object* php_wxFFile_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFFile_functions[] = {
	PHP_ME(php_wxFFile, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxFFile, Write, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFFile, Tell, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFFile, SeekEnd, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFFile, Seek, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFFile, Read, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFFile, Open, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFFile, Length, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFFile, IsOpened, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFFile, GetKind, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFFile, Flush, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFFile, Error, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFFile, Eof, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFFile, Close, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxFFile * php_wxFFile_fetch_object(zend_object *obj) {
      return (zo_wxFFile *)((char *)obj - XtOffsetOf(zo_wxFFile, zo));
}

#define Z_wxFFile_P(zv) php_wxFFile_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxFile_entry;
void php_wxFile_destruction_handler(zend_resource * TSRMLS_DC);

class wxFile_php: public wxFile{
	public:
	
	wxFile_php():wxFile(){}
	wxFile_php(const wxString& filename, wxFile::OpenMode mode=wxFile::read):wxFile(filename, mode){}
	wxFile_php(int fd):wxFile(fd){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFile{
    wxFile_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFile;

void php_wxFile_free(void *object TSRMLS_DC);
zend_object* php_wxFile_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFile_functions[] = {
	PHP_ME(php_wxFile, Seek, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFile, SeekEnd, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFile, Tell, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFile, Write, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFile, fd, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFile, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxFile, Open, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFile, Length, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFile, IsOpened, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFile, GetLastError, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFile, GetKind, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFile, Flush, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFile, Exists, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFile, Eof, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFile, Create, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFile, Close, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFile, ClearLastError, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFile, Attach, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFile, Detach, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFile, Access, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxFile * php_wxFile_fetch_object(zend_object *obj) {
      return (zo_wxFile *)((char *)obj - XtOffsetOf(zo_wxFile, zo));
}

#define Z_wxFile_P(zv) php_wxFile_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxPathList_entry;
void php_wxPathList_destruction_handler(zend_resource * TSRMLS_DC);

class wxPathList_php: public wxPathList{
	public:
	
	wxPathList_php():wxPathList(){}
	wxPathList_php(const wxArrayString& arr):wxPathList(arr){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxPathList{
    wxPathList_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxPathList;

void php_wxPathList_free(void *object TSRMLS_DC);
zend_object* php_wxPathList_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPathList_functions[] = {
	PHP_ME(php_wxPathList, Add, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPathList, AddEnvList, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPathList, EnsureFileAccessible, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPathList, FindAbsoluteValidPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPathList, FindValidPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPathList, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif


static inline zo_wxPathList * php_wxPathList_fetch_object(zend_object *obj) {
      return (zo_wxPathList *)((char *)obj - XtOffsetOf(zo_wxPathList, zo));
}

#define Z_wxPathList_P(zv) php_wxPathList_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxFileName_entry;
void php_wxFileName_destruction_handler(zend_resource * TSRMLS_DC);

class wxFileName_php: public wxFileName{
	public:
	
	wxFileName_php(const wxFileName& filename):wxFileName(filename){}
	wxFileName_php():wxFileName(){}
	wxFileName_php(const wxString& fullpath, wxPathFormat format=wxPATH_NATIVE):wxFileName(fullpath, format){}
	wxFileName_php(const wxString& path, const wxString& name, wxPathFormat format=wxPATH_NATIVE):wxFileName(path, name, format){}
	wxFileName_php(const wxString& path, const wxString& name, const wxString& ext, wxPathFormat format=wxPATH_NATIVE):wxFileName(path, name, ext, format){}
	wxFileName_php(const wxString& volume, const wxString& path, const wxString& name, const wxString& ext, wxPathFormat format=wxPATH_NATIVE):wxFileName(volume, path, name, ext, format){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFileName{
    wxFileName_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFileName;

void php_wxFileName_free(void *object TSRMLS_DC);
zend_object* php_wxFileName_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFileName_functions[] = {
	PHP_ME(php_wxFileName, AppendDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, InsertDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, Assign, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxFileName, Touch, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, StripExtension, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, SplitVolume, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, SplitPath, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, SetVolume, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, SetTimes, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, SetPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, SetName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, SetFullName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, SetExt, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, SetEmptyExt, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, SetCwd, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, SameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, Rmdir, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, ReplaceHomeDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, ReplaceEnvVariable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, RemoveLastDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, RemoveDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, PrependDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, AssignCwd, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, AssignDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, AssignHomeDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, AssignTempFileName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, Clear, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, ClearExt, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, CreateTempFileName, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, DirExists, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, DirName, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, FileExists, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, FileName, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetCwd, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetDirCount, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetDirs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetExt, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetForbiddenChars, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetFormat, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetFullName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetFullPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetHomeDir, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetHumanReadableSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetLongPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetModificationTime, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetPathSeparators, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetPathTerminators, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetPathWithSep, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetShortPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetTempDir, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetVolumeSeparator, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, GetVolume, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, HasExt, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, HasName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, HasVolume, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, IsAbsolute, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, IsCaseSensitive, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, IsDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, IsDirReadable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, IsDirWritable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, IsFileExecutable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, IsFileReadable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, IsFileWritable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, IsMSWUniqueVolumeNamePath, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, IsRelative, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, MakeAbsolute, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, MakeRelativeTo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, Mkdir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileName, Normalize, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxFileName * php_wxFileName_fetch_object(zend_object *obj) {
      return (zo_wxFileName *)((char *)obj - XtOffsetOf(zo_wxFileName, zo));
}

#define Z_wxFileName_P(zv) php_wxFileName_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxFSFile_entry;
void php_wxFSFile_destruction_handler(zend_resource * TSRMLS_DC);

class wxFSFile_php: public wxFSFile{
	public:
	
	wxFSFile_php(wxInputStream* stream, const wxString& location, const wxString& mimetype, const wxString& anchor, wxDateTime modif):wxFSFile(stream, location, mimetype, anchor, modif){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFSFile{
    wxFSFile_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFSFile;

void php_wxFSFile_free(void *object TSRMLS_DC);
zend_object* php_wxFSFile_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFSFile_functions[] = {
	PHP_ME(php_wxFSFile, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxFSFile, GetStream, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFSFile, GetModificationTime, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFSFile, GetMimeType, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFSFile, GetLocation, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFSFile, GetAnchor, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFSFile, DetachStream, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxFSFile * php_wxFSFile_fetch_object(zend_object *obj) {
      return (zo_wxFSFile *)((char *)obj - XtOffsetOf(zo_wxFSFile, zo));
}

#define Z_wxFSFile_P(zv) php_wxFSFile_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxFileSystemWatcher_entry;
void php_wxFileSystemWatcher_destruction_handler(zend_resource * TSRMLS_DC);

class wxFileSystemWatcher_php: public wxFileSystemWatcher{
	public:
	
	wxFileSystemWatcher_php():wxFileSystemWatcher(){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFileSystemWatcher{
    wxFileSystemWatcher_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFileSystemWatcher;

void php_wxFileSystemWatcher_free(void *object TSRMLS_DC);
zend_object* php_wxFileSystemWatcher_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFileSystemWatcher_functions[] = {
	PHP_ME(php_wxFileSystemWatcher, Add, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystemWatcher, AddTree, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystemWatcher, GetWatchedPathsCount, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystemWatcher, Remove, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystemWatcher, RemoveAll, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystemWatcher, RemoveTree, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystemWatcher, SetOwner, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileSystemWatcher, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif


static inline zo_wxFileSystemWatcher * php_wxFileSystemWatcher_fetch_object(zend_object *obj) {
      return (zo_wxFileSystemWatcher *)((char *)obj - XtOffsetOf(zo_wxFileSystemWatcher, zo));
}

#define Z_wxFileSystemWatcher_P(zv) php_wxFileSystemWatcher_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxStandardPaths_entry;
void php_wxStandardPaths_destruction_handler(zend_resource * TSRMLS_DC);

class wxStandardPaths_php: public wxStandardPaths{
	public:
	
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxStandardPaths{
    wxStandardPaths_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxStandardPaths;

void php_wxStandardPaths_free(void *object TSRMLS_DC);
zend_object* php_wxStandardPaths_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxStandardPaths_functions[] = {
	PHP_ME(php_wxStandardPaths, Get, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStandardPaths, GetAppDocumentsDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStandardPaths, GetConfigDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStandardPaths, GetDataDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStandardPaths, GetDocumentsDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStandardPaths, GetExecutablePath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStandardPaths, GetLocalDataDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStandardPaths, GetPluginsDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStandardPaths, GetResourcesDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStandardPaths, GetTempDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStandardPaths, GetUserConfigDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStandardPaths, GetUserDataDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStandardPaths, GetUserLocalDataDir, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStandardPaths, UseAppInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxStandardPaths * php_wxStandardPaths_fetch_object(zend_object *obj) {
      return (zo_wxStandardPaths *)((char *)obj - XtOffsetOf(zo_wxStandardPaths, zo));
}

#define Z_wxStandardPaths_P(zv) php_wxStandardPaths_fetch_object(Z_OBJ_P(zv))
#endif //WXPHP_FILE_H_GUARD
