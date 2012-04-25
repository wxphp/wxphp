copy class_selector\classes.json dumps\ /Y
php parser.php
del ..\wxwidgets.cpp
php update.php
copy config.m4 ..\ /Y
copy config.w32 ..\ /Y
