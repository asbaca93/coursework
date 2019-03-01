<!-- Code for form found at:
https://www.w3schools.com/php/showphp.asp?filename=demo_form_validation_escapechar
-->
<!DOCTYPE HTML>  
<html>
<head>
<style>
.error {color: #FF0000;}
</style>
</head>
<body>

<?php
include 'con.php';

// define variables and set to empty values
$sqlbulkloadInsertErr = "";
$sqlbulkloadInsert = "";
$sql = "";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
  if (empty($_POST["sqlbulkloadInsert"])) {
    $sqlbulkloadInsertErr = "Filename required";
  } else {
    $sqlbulkloadInsert = ($_POST["sqlbulkloadInsert"]);
  }
}

function test_input($data) {
  $data = trim($data);
  $data = stripslashes($data);
  $data = htmlspecialchars($data);
  return $data;
}

$handle = fopen($sqlbulkloadInsert, "r");

if ($handle) {
    while (($line = fgets($handle)) !== false) {
	$sql .= $line;
    }
    fclose($handle);
} else {
    echo "This is not a legit File!!!!!!";
} 
echo "************************************ <br><br>";
echo $sql;
echo "<br><br> FINISH <br><br>";

$time = -microtime(true);

if (mysqli_multi_query($con,$sql))
{
  do
    {
    // Store first result set
    if ($result=mysqli_store_result($con)) {
      // Fetch one and one row
      while ($row=mysqli_fetch_row($result))
        {
        printf("%s\n",$row[0]);
        }
      // Free result set
      mysqli_free_result($result);
      }
    }
  while (mysqli_next_result($con));
}

$time += microtime(true); 
echo '<br>Process Time of Query: ' . $time . '<br>';


$con->close();
?>

</body>
</html>
