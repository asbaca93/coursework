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
# Fill our vars and run on cli
# $ php -f db-connect-test.php

$dbname = "cs482502fa18_abaca";
$dbuser = "abaca";
$dbpass = "1NhnW9f4";
$dbhost = "dbclass.cs.nmsu.edu";

$link = mysqli_connect($dbhost, $dbuser, $dbpass) or die("Unable to Connect to '$dbhost'");
mysqli_select_db($link, $dbname) or die("Could not open the db '$dbname'");

$test_query = "SHOW TABLES FROM $dbname";
$result = mysqli_query($link, $test_query);

$tblCnt = 0;
while($tbl = mysqli_fetch_array($result)) {
  $tblCnt++;
  #echo $tbl[0]."<br />\n";
}

if (!$tblCnt) {
  echo "There are no tables<br />\n";
} else {
  echo "There are $tblCnt tables<br />\n";
} 
?>

<form action="index.php" method="get">
  <button type="submit">Homepage</button>
  <?php include 'close_connection.php' ?>
</form>

</body>
</html>

