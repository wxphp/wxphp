<?php
/**
 * @author Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * To facilitate the generation of changes file by using the svn
 * commits log by month.
 * 
 * To run: php changes_generator.php
 */

error_reporting(E_ALL ^ E_NOTICE ^ E_WARNING);

//Change to correct working directory to be able to execute the script from everywhere
if($argv[0] == $_SERVER["SCRIPT_NAME"])
{
	chdir(str_replace("changes_generator.php" , "", $argv[0]));
}
else
{
	chdir(getcwd() . "/" . str_replace($_SERVER["SCRIPT_NAME"] , "", $_SERVER["PHP_SELF"]));
}

//Change to wxPHP root directory
chdir("../");

//Generate temporary svn revisions log
echo "Running svn log > changes.log...\n";
`svn log > changes.log`;

$changes = file("changes.log");

//Remove temporary svn revisions log
unlink("changes.log");

echo "Generating CHANGES file...\n";

$lines_count = count($changes);
$current_parsed_month = "";
$changes_log = array();

for($i=0; $i<$lines_count; $i++)
{
	$revision_data = array();
	$reading_revision_message = false;
	
	if($changes[$i]{0} == "r")
	{
		$reading_revision_message = true;	
		$revision_data = explode("|", $changes[$i]);
		
		$revision = str_replace("r", "revision ", trim($revision_data[0]));
		$date = trim($revision_data[2]);
		$date_elements = explode(" (", $date);
		$date = date("F Y", strtotime($date_elements[0]));
		
		//Skip to message
		$i+=2;
	}
	
	
	while($reading_revision_message)
	{
		if(trim($changes[$i]) != "")
		{
			$changes_log[$date][] = "-$revision: {$changes[$i]}";
			$i++;
		}
		else
		{
			$reading_revision_message = false;
		}
	}
}

$output = "";

foreach($changes_log as $date=>$messages)
{
	$output .= "$date\n\n";
	$output .= "\tChange log:\n";
	
	foreach($messages as $message)
	{
		$output .= "\t\t$message";
	}
	
	$output .= "\n\n";
}

file_put_contents("CHANGES", $output);

echo "Done...\n";
?>
