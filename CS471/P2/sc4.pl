#!/usr/bin/perl

#Andrew Baca
#CS471
#sc4.pl
#purpose - this program will test short circuit evaluation in the perl programming language


sub evaluated{				#This function will be placed in the second argument of the if statement to test short circuit evaluation
	print "evaluated\n";		#note that we need a  return, and the sub in front of the function
	return;
}

my $num = 1;

print "Perl Short Circuit Evaluation test\n\n";

print "case 1, first argument of AND condition is false\n\n";
if( $num < 0 && evaluated()){		#case 1, first argument of AND condition is false
	print "true\n";			#if Short circuit evaluation is applied, the function will print a statement
}
else
{ 
	print "false\n";
}

print "Case 2, first argument of OR condition is false\n\n";
if( $num > 0 || evaluated()){		#Case 2, first argument of OR condition is false
	print "true\n";			#if Short circuit evaluation is applied, the function will print a statement
}
else
{ 
	print "false\n";
}

print "Case 3, first argument of AND condition is true\n\n";
if( $num > 0 && evaluated()){		#Case 3, first argument of AND condition is true
	print "true\n";			#the second argument, our function, will be hit no matter what with this first condition
}
else
{ 
	print "false\n";
}

print "Case 4, first argument of OR condition is false\n\n";
if( $num < 0 || evaluated()){		#Case 4, first argument of OR condition is false
	print "true\n";			#the second argument, our function, will be hit no matter what with this first condition
}
else
{ 
	print "false\n";
}
