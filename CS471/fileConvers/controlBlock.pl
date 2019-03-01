################################################################################################################
#
# Andrew Baca
# controlBlock.pl
# October 29th, 2018
#
# CS 471
# Purpose: this program removes unwanted data from the text file in the pattern of control-C to control-B
#	   and everything in between
#
###############################################################################################################

open FILE1, "control-char.txt" or die $!;			#open or kill readable file
open(FH, '>', "update.txt") or die $!;				#open or kill writable file
my ($buf, $data, $n, $hold, $flag);				#declare and instantiate variables
$flag = 1;
while (($n = read FILE1, $data, 1) != 0)			#while loop to read through file
{
	print "$data read ";					#print char to terminal	
	$buf .= $data;						#print companion ascii value to terminal
	$hold = ord($data);
	print "$hold \n";
	if($hold == 2 || $hold == 3){				#set flags correspondingt to controls
		if($hold == 2){
			$flag = 1;
			#print "*************";
		}
		if($hold == 3){
			$flag = 0;
		}
	}
	if($flag == 1 && $hold != 2){				#if correct flag set, write to file
		print FH $data;
	}
	
}
close(FILE1);							#close files
close(FILE2);

