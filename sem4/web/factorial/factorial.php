<?php
	$a = $_POST["num"];
	$fact = 1;
	while ($a > 0) {
		$fact *= $a;
		$a--;
	}
	
	echo "Factorial of ".$_POST["num"]." : ".$fact;
?>
