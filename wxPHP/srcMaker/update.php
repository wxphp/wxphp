<?php
	$srcDir = ".";
	$desDir = "..";
	
	$srcArr = scandir($srcDir);
	$desArr = scandir($desDir);
	
	
	foreach($srcArr as $srcFile)
	{
		if(preg_match("/.+?\.(cpp|h)/",$srcFile,$match))
		{
			if(in_array($srcFile,$desArr))
				$desCRC = crc32(file_get_contents($desDir."/".$srcFile));
			else
				$desCRC="";
			
			$srcCRC = crc32(file_get_contents($srcDir."/".$srcFile));
			if($srcCRC==$desCRC && $argv[1]!='all')
				continue;
			
			echo "Changed: ".$srcFile."\n";
			copy($srcDir."/".$srcFile,$desDir."/".$srcFile);
		}
	}
	

?>
