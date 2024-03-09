<html>
<head>
	<title>PHP Validation</title>
	<style type="text/css">
	.error {
		color: red;
	}
	</style>
</head>
<body>

<?php
$nameErr = $addErr = $dobErr = $genderErr = $mobErr = "";
$name = $address = $dob = $gender = $mobile = "";

if ($_POST) {
	if (empty($_POST["name"])) 
		$nameErr = "Name is required.";
	else 
		$name = $_POST["name"];

	if (empty($_POST["address"])) 
		$addErr = "Address is required.";
	else
		$address = $_POST["address"];

	if (empty($_POST["dob"]))
		$dobErr = "Date of Birth is required.";
	else
		$dob = $_POST["dob"];

	if (empty($_POST["gender"]))
		$genderErr = "Gender is required.";
	else
		$gender = $_POST["gender"];

	if (empty($_POST["mobile"]))
		$mobErr = "Mobile number is required.";
	else if (!is_numeric($_POST["mobile"]))
		$mobErr = "Must be an integer";
	else if (strlen($_POST["mobile"]) != 10)
		$mobErr = "Mobile number should be 10 digits.";
	else
		$mobile = $_POST["mobile"];
}
?>

<form method="POST">
	Name: <input type="text" name="name">
	<span class="error"><?php echo $nameErr; ?></span><br>
	Address: <textarea name="address"></textarea>
	<span class="error"><?php echo $addErr; ?></span><br>
	DOB: <input type="text" name="dob">
	<span class="error"><?php echo $dobErr; ?></span><br>
	Gender: <input type="radio" name="gender" value="M">Male
		<input type="radio" name="gender" value="F">Female
		<span class="error"><?php echo $genderErr; ?></span><br>
	Mobile No: <input type="text" name="mobile">
	<span class="error"><?php echo $mobErr; ?></span><br>
	<input type="submit" name="btn" value="VALIDATE">
</form>

<?php
echo "<h2>Your Input: </h2><br>";
echo "Name: ".$name."<br>";
echo "Address: ".$address."<br>";
echo "Date of Birth: ".$dob."<br>";
echo "Gender: ".$gender."<br>";
echo "Mobile: ".$mobile;
?>
</body>
</html>
