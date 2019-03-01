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

<h2>Welcome to Team 1's Query Homepage!</h2>

<!-- Easy way to transfer areas with a button -->
<!-- Transfer to QUERYING page -->
<form action="query_table.php" method="get">
  <button type="submit">SQL Query</button>
</form>
<br>

<!-- Easy way to transfer areas with a button -->
<form action="bulkload.php" method="get">
  <button type="submit">Bulkload</button>
</form>
<br>

<!-- Easy way to transfer areas with a button -->
<form action="single_table_insert.php" method="get">
  <button type="submit">Single Table Insert</button>
</form>
<br>

<!-- Easy way to transfer areas with a button -->
<form action="sql_table_delete.php" method="get">
  <button type="submit">Delete Entries</button>
</form>
<br>

</body>
</html>

