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
$host="dbclass.cs.nmsu.edu";
$port=3306;
$user="abaca";
$password="1NhnW9f4";
$dbname="cs482502fa18_abaca";

$con = new mysqli($host, $user, $password, $dbname, $port)
	or die ('Could not connect to the database server <br>' . mysqli_connect_error());

if(!$con){ die('Could not connect <br>'); }
?>

</body>
</html>
