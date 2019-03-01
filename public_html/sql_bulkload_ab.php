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
$sqlbulkloadErr = "";
$sqlbulkload = "";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
  if (empty($_POST["sqlbulkload"])) {
    $sqlbulkloadErr = "Filename required";
  } else {
    $sqlbulkload = ($_POST["sqlbulkload"]);
  }
}

function test_input($data) {
  $data = trim($data);
  $data = stripslashes($data);
  $data = htmlspecialchars($data);
  return $data;
}

function callme($stream, &$buffer, $buflen, &$errmsg) {
	$buffer = fgets($stream);
	//echo $buffer;
	$buffer = str_replace(",", "\t", $buffer);
	return strlen($buffer);
}

$fileexplode = explode(".", $sqlbulkload);

$querystuff = "LOAD DATA LOCAL INFILE '/home/ugrad23/abaca/public_html/" . $sqlbulkload . "' INTO TABLE " . $fileexplode[0];
mysqli_set_local_infile_handler($con, "callme");
mysqli_query($con, $querystuff);
mysqli_set_local_infile_default($con);
echo $querystuff;
echo mysqli_error($querystuff);

$con->close();
?>

</body>
</html>
