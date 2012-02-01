cp class_selector/classes.json dumps/
php parser.php
del ..\wxwidgets.cpp
php update.php
cp config.m4 ../
cp config.w32 ../
