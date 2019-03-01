#######################################################################################################################
#
# Andrew Baca
# October 29th, 2018
# controlBlock.py
# CS471
# 
# Purpose: this program removes unwanted data from the text file in the pattern of control-C to control-B
#	   and everything in between
#
######################################################################################################################
import sys						#import to write in terminal without newlines unless triggered
flag = 1;						#declare flag, set to 1
fw = open("update.txt", "w")				#open file to write to
with open("control-char.txt") as f:			#open file to read from
	while True:					#loop while input
		c = f.read(1)				#read in single char
		ascii = ord(c)				#convert char to ascii
		
		if not c:				#THROW eof ERROR MESSAGE
			print "End of file"	
			break

		if(ascii == 2 or ascii == 3):		#set flags according to controls
			if(ascii == 3):
				flag = 0
			if(ascii == 2):
				flag = 1

		if(flag == 1 and ascii != 2):		#write to file based on flag val
			sys.stdout.write(c)
			fw.write(c)



		
