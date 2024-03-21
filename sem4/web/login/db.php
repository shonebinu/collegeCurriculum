<?php
$name = $_POST["name"];
$password = $_POST["password"];

$con = mysqli_connect("localhost", "root", "toor", "college");

if (!$con) {
    echo "Not connected";
    exit;
}

$result = mysqli_query($con, "SELECT * FROM login WHERE username='$name' AND password='$password'");

if (mysqli_num_rows($result) > 0) {
    $row = mysqli_fetch_array($result);
    $role = $row["userrole"];

    if ($role == "admin") {
        mysqli_query($con, "UPDATE login SET visit_count = visit_count + 1 WHERE username='$name' AND password = '$password'");
        header("location:adminhome.php");
    }
    else if ($role == "user") {
        mysqli_query($con, "UPDATE login SET visit_count = visit_count + 1 WHERE username='$name' AND password = '$password'");
        header("location:userhome.php");
    }
}

mysqli_close($con);
?>
