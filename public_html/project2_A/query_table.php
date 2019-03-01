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

<!-- Querying table -->
<form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
  SQL Query <span class="error">*<?php echo $sqlqueryErr;?></span><br>
  <textarea name="sqlquery" rows="5" cols="40"></textarea>
  <br>
  <input type="submit" name="submit" value="Submit">
  <br><br>
</form>

<!-- Transfer to HOMEPAGE page -->
<form action="index.php" method="get">
  <button type="submit">Homepage</button>
  <?php include 'close_connection.php' ?>
</form>

<?php include 'query_output.php'; ?>

</body>
</html>
