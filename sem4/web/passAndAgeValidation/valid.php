<?php
$age = $_POST["age"];
$pass = $_POST["pass"];

if (!$age || !$pass) {
	echo "Age and password should be present.<br>";
	return;
} 

if ($age < 18 || $age > 40) {
	echo "Invalid age, age need's to be between 18 and 40.<br>";
	return;
}

if (strlen($pass) < 8) {
	echo "Password length should be greater than or equal to 8.<br>";
	return;
} 

if (!preg_match('/\d/', $pass)) {
	echo "Password should contain atleast one numeric.<br>";
	return;	
}

if (!preg_match('/\W/', $pass)) {
	echo "Password should contain atleast one special character.<br>"; 
	return;
}

echo "Your age and password is valid.";
?>
