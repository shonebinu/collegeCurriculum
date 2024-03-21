<?php
$con = mysqli_connect("localhost", "root", "toor", "college");

if(!$con) {
    echo "Not connected";
    exit;
}

$title = $_GET["title"];

$result = mysqli_query($con, "SELECT * FROM book WHERE title='$title'");

if (mysqli_num_rows($result) > 0) {
    echo "<h2>Book Details</h2>";
    echo "<table border='1'>";
    echo "<tr>";
    echo "<th>Book ID</th>";
    echo "<th>Title</th>";
    echo "<th>Author</th>";
    echo "<th>Price</th>";
    echo "</tr>";
    while($row = mysqli_fetch_array($result)) {
         echo "<tr>";
         echo "<td>" . $row['id'] . "</td>";
         echo "<td>" . $row['title'] . "</td>";
         echo "<td>" . $row['author'] . "</td>";
         echo "<td>" . $row['price'] . "</td>";
         echo "</tr>";
     }
    echo "</table>";
 }
?>
