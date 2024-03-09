<?php

	if ($_POST["len"]) {
		echo strlen($_POST["str"]);
	}

	if ($_POST["rev"]) {
		echo "Reverse of ".$_POST["str"]." : ".strrev($_POST["str"]);
	}

	if ($_POST["up"]) {
		echo "Uppercase : ". strtoupper($_POST["str"]);
	}
	
	if ($_POST["low"]) {
		echo "Lowercase : ".strtolower($_POST["str"]);
	}
?>
