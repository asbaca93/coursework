--Andrew Baca
--Main.adb
--this program will test short circuit evaluation in the ada programming language
--September 5, 2018


with Ada.Text_IO;
use Ada.Text_IO;



procedure main is
	function F return boolean is				--This function will be placed in the second argument of the if statement to test short circuit evaluation
		begin						--note that we have to put user defined function inside main, and return a boolean type
		Put_Line("I have Been Evaluated");
		return true;
	end F;
begin
	Put_Line("ADA short circuit evaluation");		--case 1, first argument of AND condition is false
	Put_line("");
	Put_Line("Case 1, first argument of AND condition is false");	--if Short circuit evaluation is applied, the function will print a statement
	if (1 > 2 and F) then
		Put_Line("true"); 
	else 
		Put_Line("false");
	end if;	

	Put_line("");							--Case 2, first argument of OR condition is false
	Put_Line("Case 2, first argument of OR condition is false");
	if (1 < 2 or F) then						--if Short circuit evaluation is applied, the function will print a statement
		Put_Line("true");
	else 
		Put_Line("false");
	end if;	

	Put_line("");								--Case 3, first argument of AND condition is true
	Put_Line("Case 3, first argument of AND condition is true");
	if ( 2 > 1 and F) then 								--the second argument, our function, will be hit no matter what with this first condition
		Put_Line("true");
	else
		Put_line("false");
	end if;

	Put_line("");
	Put_Line("Case 4, first argument of OR condition is false");		--Case 4, first argument of OR condition is false
	if( 2 > 1 or F) then
		Put_Line("true");						--the second argument, our function, will be hit no matter what with this first condition
	else
		Put_line("false");
	end if;	
end Main;

