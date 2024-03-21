<?php
$con = mysqli_connect("localhost", "root", "toor", "college"); // connect to the db directly

if (!$con) {
    echo "Connection Unsuccesful";
    exit;
}

$btnValue = $_POST["btn"];

if ($btnValue == "Insert") {
    $id = $_POST["id"];
    $name = $_POST["name"];
    $email = $_POST["email"];

    if (mysqli_query($con, "INSERT INTO employee VALUES($id, '$name', '$email')")) 
        echo "Record Succesfully Inserted";
}

if ($btnValue == "Display") {
   $result = mysqli_query($con, "SELECT * FROM employee"); 

    echo "<h1>Employee Records</h2>";
    echo "<table border=1><tr><th>Employee ID</th><th>Name</th><th>Email</th></tr>";
    
    while ($row = mysqli_fetch_array($result)) {
        echo "<tr><td>".$row["id"]."</td><td>".$row["name"]."</td><td>".$row["email"]."</td></tr>";
    }

    echo "</table>";
}
?>
