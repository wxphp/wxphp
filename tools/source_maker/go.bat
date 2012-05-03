del ..\..\includes\*.h
del ..\..\src\*.cpp

copy class_selector\classes.json ..\..\json\ /Y
php code_generator.php

copy source_templates/app.h ..\..\includes\ /Y
copy source_templates/app.cpp ..\..\src\ /Y

copy source_templates/references.h ..\..\includes\ /Y
copy source_templates/references.cpp ..\..\src\ /Y
