<?php
	$mapClasses = array(
				"wxBoxSizer"
				,"wxSizer"
				,"wxSplitterWindow"
				,"wxMenuItem"
				,"wxMenu"
				,"wxMenuBar"
				,"wxToolBar"
				,"wxEvent"
				,"wxCommandEvent"
				,"wxPanel"
				,"wxFrame"
				,"wxImage"
				,"wxBitmap"
				,"wxStaticBitmap"
				,"wxGauge"
				,"wxButton"
				,"wxBitmapButton"
				,"wxToggleButton"
				,"wxCalendarCtrl"
				,"wxCheckBox"
				,"wxChoice"
				,"wxListBox"
				,"wxCheckListBox"
				,"wxTreeEvent"
				,"wxTreeItemId"
				,"wxTreeCtrl"
				,"wxListCtrl"
				,"wxDataViewCtrl"
				,"wxArrayString"
				,"wxIcon"
				,"wxTaskBarIcon"
				,"wxValidator"
				,"wxPoint"
				,"wxSize"
				,"wxTextCtrl"
				,"wxComboBox"
	);

	$doc = new DOMDocument();
	$doc->load('wx.xml');
	
	$xpath = new DOMXPath($doc);
	
	//variables;
	$defConsts = array();
	$entries = $xpath->evaluate('//EnumValue[@name]', $doc);
	for ($i = 0; $i < $entries->length; $i++) 
	{
		$k = $entries->item($i)->getAttribute('name');
		if(substr($k,0,2)=="wx")
			$defConsts[$k]=1;
	}
	echo "Found ".count($defConsts)." enumVariables\n";
	
	//mapped to another const index in Linux
	$entries = $xpath->evaluate('//Variable[@name and @type="_5372c"]', $doc);
	//$entries = $xpath->evaluate('//Variable[@name and @type="_4867c"]', $doc);
	//$entries = $xpath->evaluate('//Variable[@name and @type="_1405c"]', $doc);
	for ($i = 0; $i < $entries->length; $i++) 
	{
		$k = $entries->item($i)->getAttribute('name');
		if(substr($k,0,2)=="wx")
			$defConsts[$k]=1;
	}
	echo "Found ".count($defConsts)." variables\n";
	
	$hd = fopen("consts.dump","w");
	fwrite($hd,serialize($defConsts));
	fclose($hd);
	
	
	
	
	$_classes = array();
	$entries = $xpath->evaluate('//Class[@id]', $doc);
	for ($i = 0; $i < $entries->length; $i++) 
	{
		$_classes[$entries->item($i)->getAttribute('id')] =	array(
												"name"	=>$entries->item($i)->getAttribute('name')
												,"members"	=>$entries->item($i)->getAttribute('members')
												,"bases"	=>trim($entries->item($i)->getAttribute('bases'))
												);
	}
	echo "Found ".count($_classes)." classes\n";

	$_types = array();
	$entries = $xpath->evaluate('//FundamentalType[@id]', $doc);
	for ($i = 0; $i < $entries->length; $i++) 
	{
		$_types[$entries->item($i)->getAttribute('id')] = $entries->item($i)->getAttribute('name');
	}
	echo "Found ".count($_types)." types\n";
	
	$entries = $xpath->evaluate('//Enumeration[@id]', $doc);
	for ($i = 0; $i < $entries->length; $i++) 
	{
		$_types[$entries->item($i)->getAttribute('id')] = $entries->item($i)->getAttribute('name');//"int";//"long";//$entries->item($i)->getAttribute('name');
	}
	echo "Found ".count($_types)." types (enumerations)\n";
	
	$entries = $xpath->evaluate('//Typedef[@id]', $doc);
	for ($i = 0; $i < $entries->length; $i++) 
	{
		if(isset($_classes[$entries->item($i)->getAttribute('type')]))
		{
			$_types[$entries->item($i)->getAttribute('id')] = $_classes[$entries->item($i)->getAttribute('type')]['name'];
		}
		elseif(isset($_types[$entries->item($i)->getAttribute('type')]))
		{
			$_types[$entries->item($i)->getAttribute('id')] = $_types[$entries->item($i)->getAttribute('type')];
		}
	}
	echo "Found ".count($_types)." types (typedefs)\n";
	
	$entries = $xpath->evaluate('//CvQualifiedType[@id]', $doc);
	for ($i = 0; $i < $entries->length; $i++) 
	{
		if(isset($_classes[$entries->item($i)->getAttribute('type')]))
			$_types[$entries->item($i)->getAttribute('id')] = "const ".$_classes[$entries->item($i)->getAttribute('type')]['name'];
		elseif(isset($_types[$entries->item($i)->getAttribute('type')]))
			$_types[$entries->item($i)->getAttribute('id')] = "const ".$_types[$entries->item($i)->getAttribute('type')];
			
		//echo $entries->item($i)->getAttribute('id')."\n";
		/*else
			die("::".$entries->item($i)->getAttribute('id'));*/
	}
	echo "Found ".count($_types)." types\n";
	
	$entries = $xpath->evaluate('//PointerType[@id]', $doc);
	for ($i = 0; $i < $entries->length; $i++) 
	{
		if(isset($_classes[$entries->item($i)->getAttribute('type')]))
			$_types[$entries->item($i)->getAttribute('id')] = $_classes[$entries->item($i)->getAttribute('type')]['name']."*";
		elseif(isset($_types[$entries->item($i)->getAttribute('type')]))
		{
			$_types[$entries->item($i)->getAttribute('id')] =$_types[$entries->item($i)->getAttribute('type')]."*";
		}
		else
			$_types[$entries->item($i)->getAttribute('id')] = "ref:".$entries->item($i)->getAttribute('type');
	}
	echo "Found ".count($_types)." types (pointers)\n";
	
	//$entries = $xpath->evaluate('//PointerType[@id]', $doc);
	$entries = $xpath->evaluate('//ReferenceType[@id]', $doc);
	for ($i = 0; $i < $entries->length; $i++) 
	{
		if(isset($_classes[$entries->item($i)->getAttribute('type')]))
			$_types[$entries->item($i)->getAttribute('id')] =$_classes[$entries->item($i)->getAttribute('type')]['name']."&";
		elseif(isset($_types[$entries->item($i)->getAttribute('type')]))
			$_types[$entries->item($i)->getAttribute('id')] =$_types[$entries->item($i)->getAttribute('type')]."&";
		else
			$_types[$entries->item($i)->getAttribute('id')] = "ref:".$entries->item($i)->getAttribute('type');
	}
	echo "Found ".count($_types)." types\n";
	

	$_methods = array();
	$entries = $xpath->evaluate('//Constructor[@id and @access="public"]', $doc);
	for ($i = 0; $i < $entries->length; $i++) 
	{
		$_methods[$entries->item($i)->getAttribute('id')] =	array(
												"name"		=>$entries->item($i)->getAttribute('name')
												,"Argument"	=>array()
												,"returns"		=>$_types[$entries->item($i)->getAttribute('returns')].$_classes[$entries->item($i)->getAttribute('returns')]['name']
												);
												
		$args = $entries->item($i)->getElementsByTagName('Argument');
		for ($e = 0; $e < $args->length; $e++) 
		{
			if(isset($_types[$args->item($e)->getAttribute('type')]))	
				$_methods[$entries->item($i)->getAttribute('id')]["Argument"][$args->item($e)->getAttribute('name')] = 
					array(
							"type" 	=>$_types[$args->item($e)->getAttribute('type')]
					);
			else
				$_methods[$entries->item($i)->getAttribute('id')]["Argument"][$args->item($e)->getAttribute('name')] = 
					array(
							"type" 	=> $args->item($e)->getAttribute('type')
					);
			if($args->item($e)->hasAttribute('default'))
				$_methods[$entries->item($i)->getAttribute('id')]["Argument"][$args->item($e)->getAttribute('name')]["default"]= $args->item($e)->getAttribute('default');
		}
	}
	echo "Found ".count($_methods)." methods\n";
	$entries = $xpath->evaluate('//Method[@id and @access="public" or @access="protected"]', $doc);
	for ($i = 0; $i < $entries->length; $i++) 
	{
		$_methods[$entries->item($i)->getAttribute('id')] =	array(
												"name"		=>$entries->item($i)->getAttribute('name')
												,"Argument"	=>array()
												,"returns"		=>$_types[$entries->item($i)->getAttribute('returns')].$_classes[$entries->item($i)->getAttribute('returns')]['name']
												,"pure_virtual"	=> $entries->item($i)->getAttribute('pure_virtual') || $entries->item($i)->getAttribute('access')=="protected"
												);
		if($entries->item($i)->getAttribute('const'))
			$_methods[$entries->item($i)->getAttribute('id')]['const'] = true;
												
		$args = $entries->item($i)->getElementsByTagName('Argument');
		for ($e = 0; $e < $args->length; $e++) 
		{
			if(isset($_types[$args->item($e)->getAttribute('type')]))	
				$_methods[$entries->item($i)->getAttribute('id')]["Argument"][$args->item($e)->getAttribute('name')] = 
					array(
							"type" 	=>$_types[$args->item($e)->getAttribute('type')]
					);
			else
				$_methods[$entries->item($i)->getAttribute('id')]["Argument"][$args->item($e)->getAttribute('name')] = 
					array(
							"type" 	=> $args->item($e)->getAttribute('type')
					);
			if($args->item($e)->hasAttribute('default'))
				$_methods[$entries->item($i)->getAttribute('id')]["Argument"][$args->item($e)->getAttribute('name')]["default"]= $args->item($e)->getAttribute('default');
		}
	}
	echo "Found ".count($_methods)." methods\n";
	
	function iterateImplements($implements)
	{
		global $_classes;
		$implements = trim($implements);
		$implements = split(" ",$implements);
		
		$results = array();
		if($implements)
		foreach($implements as $impId)
		{
			if(isset($_classes[$impId]))
			{
				$results[] = $_classes[$impId]['name'];
				$results = array_merge($results,iterateImplements($_classes[$impId]['bases']));
			}
		}
		
		return $results;
	}
	
	
	$counter = 0;
	$defIni = array();
	$query = '//Namespace[@name="::"]';
	$entries = $xpath->evaluate($query, $doc);
	for ($i = 0; $i < $entries->length; $i++) {
		
		$members = split(" ",$entries->item($i)->getAttribute('members'));
		
		foreach($members as $memberId)
		{
			if(isset($_classes[$memberId]))
			{
				/*if(!in_array($_classes[$memberId]['name'],$mapClasses))
					continue;*/
				$defIni[$_classes[$memberId]['name']] = array();
				$ptr = &$defIni[$_classes[$memberId]['name']];
				
				$ptr['_implements'] = iterateImplements($_classes[$memberId]['bases']);
				
				echo $_classes[$memberId]['name']."::".(isset($_classes[$_classes[$memberId]['bases']])?$_classes[$_classes[$memberId]['bases']]['name']:"")."\n";
				$meths = split(" ",$_classes[$memberId]['members']);
				foreach($meths as $meth)
				{
					if(isset($_methods[$meth])) 
					{
						if($_methods[$meth]['pure_virtual']==1)
						{
							if(!isset($ptr['_pure_virtual']))
								$ptr['_pure_virtual'] = array($_methods[$meth]['name']);
							else
								$ptr['_pure_virtual'][] = $_methods[$meth]['name'];
						}
						if($_methods[$meth]['const']==1)
						{
							if(!isset($ptr['_const']))
								$ptr['_const'] = array($_methods[$meth]['name']);
							else
								$ptr['_const'][] = $_methods[$meth]['name'];
						}
						if(!isset($ptr[$_methods[$meth]['name']]))
							$ptr[$_methods[$meth]['name']] = array();
						
						$ptm = &$ptr[$_methods[$meth]['name']];
						$ptm[] = array($_methods[$meth]['returns']);
						$pta = &$ptm[count($ptm)-1];
						$ptm[] = array(array(1),array(null));
						$ptb = &$ptm[count($ptm)-1];
						
						echo "\t".$_methods[$meth]['name']." => ".$_methods[$meth]['returns']."\n";
						foreach($_methods[$meth]['Argument'] as $argk => $argv)
						{
							$pta[] = $argv['type'];
							if(!isset($argv['default']))
							{
								$ptb[0][]=1;
								$ptb[1][]=null;
							}
							else
								$ptb[1][]=$argv['default'];
							
							echo "\t\t".$argk." => ".$argv['type'].(isset($argv['default'])?" = ".$argv['default']:"")."\n";
						}
					}
				}
				/*if($count++ ==5)
					die();*/
			}
		}
	}
	
	$hd = fopen("classes.dump","w");
	fwrite($hd,serialize($defIni));
	fclose($hd);
	
	//print_r($defIni);

?>
