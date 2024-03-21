<?php
$id = $_POST["id"];
$title = $_POST["title"];
$author = $_POST["author"];
$price = $_POST["price"];

$btnValue = $_POST["btn"];

$con = mysqli_connect("localhost", "root", "toor", "college");

if(!$con) {
    echo "Not connected";
    exit;
}

if ($btnValue == "Insert") {
    mysqli_query($con, "INSERT INTO book VALUES($id, '$title', '$author', '$price')");
    echo "Record added";
}

if ($btnValue == "Display") {
    $result = mysqli_query($con, "SELECT DISTINCT title FROM book");
    echo "<h2>Distinct Titles: </h2>";

    while ($row = mysqli_fetch_array($result)) {
        echo "<li><a href='book_details.php?title=" . $row['title'] . "'>" . $row['title'] . "</a></li>";
    }
}

mysqli_close($con);
?>
