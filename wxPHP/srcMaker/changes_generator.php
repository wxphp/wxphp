<?php
/**
 * To facilitate the generation of changes file by using the svn
 * commits log by month.
 * 
 * To run: php changes_generator.php
 */

error_reporting(E_ALL ^ E_NOTICE ^ E_WARNING);

//Generate svn revisions log
echo "Running svn log > changes.log...\n";
`svn log > changes.log`;

$changes = file("changes.log");

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
