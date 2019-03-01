<?php
include 'sql_connection.php';

while ($sqlquery = "") {;}

if ($res = mysqli_query($con, $sqlquery)) { 
    if(mysqli_num_rows($res) > 0) { 
	echo "<table>"; 
	echo "<tr>"; 
	echo "<th>Department name</th>"; 
	echo "<th>Instructor name</th>"; 
	echo "<th>ID</th>"; 
	echo "<th>salary</th>"; 
	echo "</tr>"; 
	while ($row = mysqli_fetch_array($res)) { 
	    echo "<tr>"; 
	    echo "<td>".$row['dept_name']."</td>"; 
	    echo "<td>".$row['name']."</td>"; 
	    echo "<td>".$row['ID']."</td>"; 
	    echo "<td>".$row['salary']."</td>";
	    echo "</tr>"; 
	} 
	echo "</table>"; 
	mysqli_free_res($res); 
    } 
    else { 
	echo "No matching records are found. <br>"; 
    } 
} 
else { 
    echo "ERROR: Could not execute $sqlquery. <br>"
	                        .mysqli_error($link); 
} 
?>
