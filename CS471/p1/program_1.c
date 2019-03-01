/*************************************************************************************************
*
* Andrew Baca
* CS 471
* Programming Assignment 1
* 
* August 15th, 2018
*
* Procedure- This program will fill an array of 100 integers,with the ascii values of each letter of 
*	     my name, and cast the array as a string to be printed out. This program is meant to test the 
* 	     byte sequence of C, with proper NULL termination. We are testing to see if the machine we are
*	     using is in a big endian ora little endian sequence.  
*
* Input:  An integer array with 100 values, filled with the ascii values in decimal, that would 
* 	  equivelate to my first and last name with proper spacing and indentation.
*
* Output: A string stored in the character pointer address with my first and last name with 
*	  proper spacing and indentation,stored as big endian.  
*
*************************************************************************************************/
#include <stdio.h>

int main(void)
{
	int name[100];				//declare the array of 100 ingtegers
	char *s;				//declare a char pointer to store the name in

	name[0] = (65  * 1) + (110 * 256) + (100 * 256 * 256) + (114 * 256 * 256 * 256);	//Store name in ascii value as big endian
	name[1] = (101 * 1) + (119 * 256) + (32  * 256 * 256) + (66  * 256 * 256 * 256);
	name[2] = (97  * 1) + (99  * 256) + (97  * 256 * 256);
	name[3] = 0;		//terminating value

	s = (char*)name;

	printf("My name is %s\n", s);

}
