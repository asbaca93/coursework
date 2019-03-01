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
$sqlbulkloadErr = "";
$sqlbulkload = "";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
  if (empty($_POST["sqlbulkload"])) {
    $sqlbulkloadErr = "Filename required";
  } else {
    $sqlbulkload = test_input($_POST["sqlbulkload"]);
  }
}

function test_input($data) {
  $data = trim($data);
  $data = stripslashes($data);
  $data = htmlspecialchars($data);
  return $data;
}

/*function callme($stream, &$buffer, $buflen, &$errmsg) {
	$buffer = fgets($stream);
	echo $buffer;
	// convert to upper case and replace "," delimiter with [TAB]
	$buffer = strtoupper(str_replace(",", "\t", $buffer));
	return strlen($buffer);
}

$bulkcommand = 'LOAD DATA LOCAL INFILE ' . 'public_html/' . $sqlbulkload . ' INTO TABLE ' . $testbulk[0];
echo $bulkcommand;

mysqli_set_local_infile_handler($con, "callme");
mysqli_query($con, $bulkcommand);
mysqli_set_local_infile_default($con);*/

$file = fopen($sqlbulkload, "r");
$fileref = explode(".", $sqlbulkload);
switch(fileref[0]) {
	case('players'):
		while(!feof($file)){
			$content = fgets($file);
			$carray = explode("\t", $content);
			list($pid, $name, $team, $pos, $TD, $yards, $salary) = $carray;
			$sql = "Insert into " .$fileref[0] ." values (" .$pid .", '" .$name ."', '" .$team ."', '" .$pos ."', " .$TD .", " .$yards
			.", " .$salary .");";
			echo $sql;
			mysqli_query($con, $sql); 
		} 
		break;
	default:
		echo "Fail";
}
 
fclose($file);

$con->close();
?>

</body>
</html>
