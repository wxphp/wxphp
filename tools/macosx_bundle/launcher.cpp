/**
 * @author Jefferson González
 * 
 * @license This file is part of wxPHP check the LICENSE 
 * file for information.
 * 
 * Code for main executable of a mac bundle that executes a
 * shell script named launcher.sh
 * 
 * To compile run something like:
 * 
 * (for 32 bits)
 * g++ -mmacosx-version-min=10.5 -arch i386 launcher.cpp -o launcher
 * 
 * (for 64 bits)
 * g++ -mmacosx-version-min=10.5 -arch x86_64 launcher.cpp -o launcher
 * 
 * (for universal binary)
 * g++ -mmacosx-version-min=10.5 -arch i386 -arch x86_64 -arch ppc \
       launcher.cpp -o launcher
 * 
*/

#include <cstdio>
#include <cstdlib>
#include <sys/param.h>
#include <sys/mount.h>
#include <mach-o/dyld.h>
#include <unistd.h>
#include <string>
#include <iostream>

using namespace::std;

string app_binary_name = "launcher";

char* get_app_path()
{
	char exe_path[MAXPATHLEN];
	char link_path[MAXPATHLEN];

	uint32_t size = sizeof(exe_path);

	_NSGetExecutablePath(exe_path, &size);

	realpath(exe_path, link_path);

	return link_path;
}

int main(int argc, char** argv)
{
	string app_path = get_app_path();
    
    int app_name_len = app_binary_name.length();
	
	app_path.replace(app_path.length()-app_name_len, app_name_len, "");

	string command = "cd ";

	command += app_path;

	command += "; ";

	command += "chmod 0744 launcher.sh ; ";

	command += "./launcher.sh ";

	system(command.c_str());

	return 0;
}
