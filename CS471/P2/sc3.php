<?php
	//Andrew Baca
	//CS 471
	//sc3.php
	//purpose - this program will test scort circuit evaluation in the php programming language
	//September 5, 2018

	function evaluate(){		//This function will be placed in the second argument of the if statement to test short circuit evaluation
		echo "ARG 2 evaluated!!\n";
		return true;		//note that we are returning boolean value true
	}

	$num = 0;
	echo "PHP short circuit evaluation\n\n";
	echo "Case 1, first argument of AND condition is false\n\n";
	if ($num > 1  && evaluate())		//case 1, first argument of AND condition is false
		echo "true\n";			//if Short circuit evaluation is applied, the function will print a statement
	else
		echo "false\n";
	echo "Case 2, first argument of OR condition is false\n\n";
	if( $num == 0 || evaluate())		//Case 2, first argument of OR condition is false
		echo "true\n";			//if Short circuit evaluation is applied, the function will print a statement
	else
		echo "false\n";
	echo "Case 3, first argument of AND condition is true\n\n";
	if ($num < 1  && evaluate())		//Case 3, first argument of AND condition is true
		echo "true\n";			//the second argument, our function, will be hit no matter what with this first condition
	else
		echo "false\n";
	echo "Case 4, first argument of OR condition is false\n\n";
	if( $num != 0 || evaluate())		//Case 4, first argument of OR condition is false
		echo "true\n";			//the second argument, our function, will be hit no matter what with this first condition
	else
		echo "false\n";
?>
