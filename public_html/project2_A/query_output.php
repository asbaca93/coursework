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
$sqlqueryErr = "";
$sqlquery = "";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
if (empty($_POST["sqlquery"])) {
$sqlqueryErr = "Query required";
} else {
//$sqlquery = test_input($_POST["sqlquery"]);
$sqlquery = $_POST["sqlquery"];
}
}

//quotemeta read up on this, might fix the quotation issue
//https://razorsql.com/articles/mysql_column_names_values.htmlLinks to an external site.
if ((substr($sqlquery, 0, 6) == 'select') or (substr($sqlquery, 0, 8) == 'create v')) {

if ($res = mysqli_query($con, $sqlquery)) {

$time = -microtime(true);

if( (mysqli_num_rows($res) > 0)) {
echo '<html><body><table><tr>';
$i = 0;
while ($i < mysqli_num_fields($res)) {
$meta = mysqli_fetch_field($res);
echo '<td>' . $meta->name;
switch ($meta->type) {
case 246:
echo '<br>' . 'DEC '. '</td>';
break;
case 253:
echo '<br>' . 'VAR_S ' . '</td>';
break;
case 254:
echo '<br>' . 'STRING ' . '</td>';
break;
default:
echo '<br> N/A ';
break;
}
$i = $i + 1;
}

$x = 0;
while ($x < mysqli_num_fields($res)) {
$meta2 = mysqli_fetch_field($res);
$x = $x + 1;
}
echo '</tr>';

$i = 0;
while ($row = mysqli_fetch_row($res)) {
echo '<tr>';
$count = count($row);
$y = 0;
while ($y < $count) {
$c_row = current($row);
echo '<td>' . $c_row . '</td>';
next($row);
$y = $y + 1;
}//end while 2
echo '</tr>';
$i = $i + 1;
}//end while 1

//from: http://php.net/manual/en/function.microtime.phpLinks to an external site.
$time += microtime(true);

echo '<br>Process Time of Query: ' . $time . '<br><br>';

echo '</table></body></html>';
mysqli_free_result($res);
}
} else {
$message = $sqlqueryErr . mysqli_error();
echo $message;
}
} else {
if (substr($sqlquery, 0, 6) == '' or substr($sqlquery, 0, 8) == '') {
break;
} else {
echo "Query failed. <br> Please enter a correct query with 'select' or 'create view'.";
}
}

$testquery = $sqlquery;
echo $testquery;

$con->close();

?>

</body>
</html>
