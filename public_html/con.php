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
