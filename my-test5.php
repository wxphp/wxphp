<?php
echo "new BusyInfo\n";
$busyInfo = new wxBusyInfo("FooBar");

echo "sleep\n";
sleep(10);

echo "unset\n";
unset($busyInfo);

