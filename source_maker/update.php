<?php
/**
 * Script to just update the root source files that changed
 * after running the code generator
 */
 
$srcDir = ".";
$desDir = "..";

$srcArr = scandir($srcDir);
$desArr = scandir($desDir);

$argument = isset($argv[1])?$argv[1]:"";

$changed = array();
$unchanged = array();


foreach($srcArr as $srcFile)
{
	if(preg_match("/.+?\.(cpp|h)/",$srcFile,$match))
	{
		if(in_array($srcFile,$desArr))
			$desCRC = crc32(file_get_contents($desDir."/".$srcFile));
		else
			$desCRC="";
		
		$srcCRC = crc32(file_get_contents($srcDir."/".$srcFile));
		if($srcCRC==$desCRC && $argument!='all')
		{
			$unchanged[] = "\t".$srcFile."\n";
			continue;
		}
		
		$changed[] = "\t".$srcFile."\n";
		copy($srcDir."/".$srcFile,$desDir."/".$srcFile);
	}
}

if(count($changed) > 0)
	echo "Changed:\n";
	
foreach($changed as $output)
{
	echo $output;
}

if(count($unchanged) > 0)
	echo "Unchanged:\n";
	
foreach($unchanged as $output)
{
	echo $output;
}

?>
