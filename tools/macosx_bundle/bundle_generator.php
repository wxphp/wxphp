#!/usr/bin/env php
<?php
/**
 * @author Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * Generates a ready to use macosx bundle with wxphp.
 * 
 * To run it execute: php bundle_generator.php
*/

// Here you can set the php version to compile and mirror
$php_file = "php-5.5.10.tar.bz2";
$php_mirror = "http://www.php.net/get/$php_file/from/this/mirror";
$php_mirror_provider = "Yahoo! Inc";

// Store the directory where the script was called and the bundle is going to be generated
$cwd = getcwd();

// Ask for bundle details
while(!($bundle_file = read_input("Bundle filename e.g. myapp")));

while(!($bundle_identifier = read_input("Bundle identifer e.g. com.mycompany.myapp")));

while(!($application_name = read_input("Application name e.g. My Application")));

while(!($application_information = read_input("Application information e.g. My Application version 1.0, (c) 2014 Provider")));

while(!($short_version = read_input("Short version e.g. 1.0")));

while(!($long_version = read_input("Long version e.g. 1.0 beta 2014/08/23")));

while(!($copyright = read_input("Copyright e.g. Copyright 2014 Provider")));

// Start generating the bundle skeleton
if(!file_exists("$bundle_file.app"))
{
    mkdir("$bundle_file.app");
}

if(!file_exists("$bundle_file.app/Contents"))
{
    mkdir("$bundle_file.app/Contents");
}

if(!file_exists("$bundle_file.app/Contents/MacOS"))
{
    mkdir("$bundle_file.app/Contents/MacOS");
}

if(!file_exists("$bundle_file.app/Contents/Resources"))
{
    mkdir("$bundle_file.app/Contents/Resources");
}

$info_plist = <<<VALUE
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
	<key>CFBundleInfoDictionaryVersion</key>
	<string>6.0</string>
	<key>CFBundleIdentifier</key>
	<string>$bundle_identifier</string>
	<key>CFBundleDevelopmentRegion</key>
	<string>English</string>
	<key>CFBundleLocalizations</key>
	<array>
		<string>de</string>
		<string>en</string>
		<string>fr</string>
		<string>it</string>
	</array>
	<key>CFBundleExecutable</key>
	<string>launcher</string>
	<key>CFBundleIconFile</key>
	<string>icon.icns</string>
	<key>CFBundleName</key>
	<string>$application_name</string>
	<key>CFBundlePackageType</key>
	<string>APPL</string>
	<key>CFBundleSignature</key>
	<string>????</string>
	<key>CFBundleVersion</key>
	<string>1.0</string>
	<key>CFBundleShortVersionString</key>
	<string>$short_version</string>
	<key>CFBundleGetInfoString</key>
	<string>$application_information</string>
	<key>CFBundleLongVersionString</key>
	<string>$long_version</string>
	<key>NSHumanReadableCopyright</key>
	<string>$copyright</string>
	<key>LSRequiresCarbon</key>
	<true/>
	<key>CSResourcesFileMapped</key>
	<false/>
</dict>
</plist>
VALUE;

file_put_contents("$bundle_file.app/Contents/info.plist", $info_plist);

file_put_contents("$bundle_file.app/Contents/PkgInfo", "APPL????");

copy(__DIR__ . "/launcher.cpp", "$bundle_file.app/Contents/MacOS/launcher.cpp");

copy(__DIR__ . "/launcher.sh", "$bundle_file.app/Contents/MacOS/launcher.sh");

copy(__DIR__ . "/shell_header.txt", "$bundle_file.app/Contents/MacOS/shell_header.txt");

chdir(__DIR__);
chdir("../../");

copy("artwork/icon.icns", $cwd . "/$bundle_file.app/Contents/Resources/icon.icns");

chdir("$cwd/$bundle_file.app/Contents/MacOS");

// Compile the bundle launcher
exec("g++ -mmacosx-version-min=10.5 launcher.cpp -o launcher");

chdir(__DIR__);

// Download and compile php if not already compiled
if(!is_dir("php"))
{
    $php_src_dir = str_replace(".tar.bz2", "", $php_file);

    if(!file_exists($php_src_dir))
    {
        print "Downloading php source from $php_mirror_provider...\n\n";
        download_file($php_mirror, $php_file);

        print "Uncompressing $php_file...\n\n";
        exec("tar -xjf $php_file");
        
        unlink($php_file);
    }
    
    chdir($php_src_dir);

    $php_prefix = str_replace($php_src_dir, "php", getcwd());
    
    $php_configure = 'CFLAGS="-mmacosx-version-min=10.5" '
        . 'CXXFLAGS="-mmacosx-version-min=10.5" '
        . './configure '
        . '--prefix="'.$php_prefix.'" '
        . '--disable-cgi '
        . '--enable-maintainer-zts '
        . '--enable-ftp '
        //. '--enable-intl ' Dependencies unmet
        . '--enable-zip '
        . '--enable-pcntl '
        . '--enable-shmop '
        . '--enable-sockets '
        . '--enable-sysvmsg '
        . '--enable-sysvsem '
        . '--enable-sysvshm '
        . '--enable-mysqlnd '
        . '--enable-mbstring '
        . '--with-pdo-mysql '
        . '--with-zlib '
        . '--with-bz2 '
        . '--with-curl '
        //. '--with-gd '     Dependencies unmet
    ;

    print "Starting configure script with:\n";
    print $php_configure . "\n\n";
    
    exec($php_configure);

    print "Modifying main/build-defs.h paths to be relative...\n\n";
    $build_defs = file_get_contents("main/build-defs.h");
    
    $build_defs = str_replace(
        $php_prefix, 
        "./php", 
        $build_defs
    );

    file_put_contents("main/build-defs.h", $build_defs);

    print "Compiling php...\n\n";
    exec("make && make install");

    chdir(__DIR__);
}

chdir("../../");

$phpize_path = getcwd() . "/tools/macosx_bundle/php/bin/phpize";
$phpconfig_path = getcwd() . "/tools/macosx_bundle/php/bin/php-config";

print "Starting wxphp configuration process...\n\n";
exec($phpize_path);

$wxphp_configure = './configure '
    . '--enable-wxwidgets-macosx '
    . '--with-php-config="'.$phpconfig_path.'"'
;

exec($wxphp_configure);

print "Compiling wxphp...\n\n";
exec("make && make install");

chdir(__DIR__);

print "Copying php into the application bundle...\n\n";
exec("cp -r php '$cwd/$bundle_file.app/Contents/MacOS/'");

print "Done!\n";

chdir($cwd);

function read_input($message)
{
    echo $message . ": ";
    $input = trim(fgets(STDIN));
    return $input;
}

function download_file($url, $path)
{
    $file = fopen($url, "rb");

    if($file)
    {
        $newf = fopen($path, "wb");

        if($newf)
        {
            while(!feof($file))
            {
                fwrite($newf, fread($file, 1024 * 8), 1024 * 8);
            }
        }
    }

    if($file)
    {
        fclose($file);
    }

    if($newf)
    {
        fclose($newf);
    }
}