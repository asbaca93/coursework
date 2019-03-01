<?php

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $sqldeletion = $_POST["sqldeletion"];
    $sqltabledelete = $_POST["sqltabledelete"];
}

//quotemeta read up on this, might fix the quotation issue
//https://razorsql.com/articles/mysql_column_names_values.html
if (substr($sqldeletion, 0, 6) == 'delete') {
	echo "Successfully deleted row.";
	mysqli_query($con, $sqldeletion);
} elseif ($sqltabledelete != '') {
	$sqltabledelete = "delete from " . $sqltabledelete;
	if (mysqli_query($con, $sqltabledelete)) {
 		echo "Successfully deleted table.";
	} elseif (!mysqli_query($con, $sqltabledelete)) {
		echo "Did not successfully delete table.";
	} else {
		;
	}
} else {
	if (substr($sqldeletion, 0, 6) == '' or substr($sqltabledelete, 0, 4) != '') {
		break;
	} else {
		echo "Query failed. <br> Please enter a correct query with 'delete'.<br>";
	}
}

$con->close();

?>
