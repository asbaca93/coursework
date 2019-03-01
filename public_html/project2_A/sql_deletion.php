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
include 'sql_connection.php';

// define variables and set to empty values
$sqldeletionErr = "";
$sqldeletion = "";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
  if (empty($_POST["sqldeletion"])) {
    $sqldeletionErr = "Deletion required";
  } else {
    $sqldeletion = test_input($_POST["sqldeletion"]);
  }
}

function test_input($data) {
  $data = trim($data);
  $data = stripslashes($data);
  $data = htmlspecialchars($data);
  return $data;
}

//$sqldeletion = delete from players where player_id = 13;

$delete = substr($sqldeletion, 0, 6);
if ($sqldeletion != "") {
	switch($delete) {
		case 'insert';
			echo "Cannot Insert Here!!!! Go to the Insert Command!!!!";
			break;
		case 'delete';
			echo "Performed Delete: " . $sqldeletion;
			mysqli_query($con, $sqldeletion);
			break;
		default: echo "wrong Input!!! must start with \"insert\"";
			break;
	}
}


$con->close();
?>

</body>
</html>
