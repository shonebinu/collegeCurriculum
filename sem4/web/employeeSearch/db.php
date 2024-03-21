<?php
$con = mysqli_connect("localhost", "root", "toor", "college"); // connect to the db directly

if (!$con) {
    echo "Connection Unsuccesful";
    exit;
}

$btnValue = $_POST["btn"];

if ($btnValue == "Search") {
    $name = $_POST["name"];

    $result = mysqli_query($con, "SELECT * FROM employee WHERE name='$name'");

    if (mysqli_num_rows($result) != 1) {
        echo "An employee with this ID can't be found.";
        exit;
    }

    $resArray = mysqli_fetch_array($result);

    echo "<h1>Employee Record</h1>";
    echo "<h2>ID: ".$resArray["id"]."</h2>";
    echo "<h2>Name: ".$name."</h2>";
    echo "<h2>Email: ".$resArray["email"]."</h2>";
}

if ($btnValue == "Update") {
    $id = $_POST["id"];
    $name = $_POST["uname"];
    $email = $_POST["email"];

    $result = mysqli_query($con, "UPDATE employee SET name='$name', email='$email' WHERE id=$id");
    echo "Succesfully Updated the name and email of the employee with ID: ".$id;
}
?>
