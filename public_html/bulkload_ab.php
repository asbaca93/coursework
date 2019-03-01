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
  
<?php include 'con.php'; ?>

<h2>Bulkload Page</h2>
<h3>Please insert a file to bulklaod</h3>



<form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
  Enter a FileName for single insertion bulkload
  <br>
  <textarea name="sqlbulkloadInsert" rows="1" cols="40"></textarea>
  <br>
  <input type="submit" name="submit" value="Submit">
  <br><br>
  <?php include 'sql_bulkload_inserts.php'; ?>
</form>

<!-- Transfer to HOMEPAGE page -->
<form action="index.php" method="get">
  <button type="submit">Homepage</button>
  <?php include 'close_connection.php' ?>
</form>

</body>
</html>

