<?php

include("../include/functions.php");

$cls = unserialize_json(file_get_contents('classes.json'));

print "\nTotal of classes enabled: " .  count($cls) . "\n";


?>
