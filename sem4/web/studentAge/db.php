<?php
$id = $_POST["id"];
$name = $_POST["name"];
$age = $_POST["age"];
$address = $_POST["address"];
$mobile = $_POST["mobile"];
$btnValue = $_POST["btn"];

$con = mysqli_connect("localhost", "root", "toor");
if (!$con) {
	die("Not connected");
} 

$db = mysqli_select_db($con, "college");
if (!$db) {
	echo "db not connected<br>";
}

if ($btnValue == "INSERT") {
    if ($age < 18) {
        echo "Age needs to be above 18";
        exit;
    }

	$query = "INSERT INTO student VALUES($id, '$name', $age, '$address', '$mobile')";
	if (mysqli_query($con, $query))
		echo "Successfully inserted<br>";
	else
		echo "Not inserted<br>";
}

mysqli_close($con);
?>

