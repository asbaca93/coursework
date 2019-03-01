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

<?php include 'sql_connection.php'; ?>

<form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
  Deletion
  <br>
  <textarea name="sqldeletion" rows="1" cols="40"></textarea>
  <br>
  <input type="submit" name="submit" value="Submit">
  <br><br>
  <?php include 'sql_deletion.php'; ?>
</form>

<form action="index.php" method="get">
  <button type="submit">Homepage</button>
  <?php include 'close_connection.php' ?>
</form>

</body>
</html>
