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
$sqlinsertionErr = "";
$sqlinsertion = "";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
  if (empty($_POST["sqlinsertion"])) {
    $sqlinsertionErr = "Insertion required";
  } else {
    $sqlinsertion = test_input($_POST["sqlinsertion"]);
  }
}

function test_input($data) {
  $data = trim($data);
  $data = stripslashes($data);
  $data = htmlspecialchars($data);
  return $data;
}

echo "hhhheeeeerrrrrreeeeee";
//$sqlinsertion = insert into players values(00013, 'Yolo Hash', 'Team1', 'QB', 0, 120, 100000);
//$sqldeletion = delete from players where player_ID = 13;

$insert = substr($sqlinsertion, 0, 6);
if ($sqlinsertion != "") {
	switch($insert) {
		case 'insert';
			echo "Row Inserted for " . $sqlinsertion;
			mysqli_query($con, $sqlinsertion);
			break;
		case 'delete';
			echo "Cannot Perform Deletion Here!!!!! Go to Delete Command!!!";
			break;
		default: echo "wrong Input!!! must start with \"insert\"";
			break;
	}
}

$con->close();
?>

</body>
</html>
