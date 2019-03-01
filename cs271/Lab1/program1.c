/****************************************************************************
*
* Andrew Baca
* Febuary 3, 2016
* CS271 Section MO2 Lab1
*
* Program Name: program1.c
* 
* Purpuse: this program prompts the user to enter two
* 	   integers, and displays the sum of them
*
****************************************************************************/

#include <stdio.h>

int main(void) {

  int integer1;				//declare variables
  int integer2;
  int sum;

  printf("\n\n*****PROGRAM1**********\n\n");			//display what program does
  printf("This program gets user input for 2 ");
  printf("integer values and displays sum.\n\n");

  printf("Enter the value of integer 1: \n\n");			//prompt user to enter integer1
  scanf("%d", &integer1);					//scan for integer 1

  printf("Enter the value of integer 2: \n\n");			//prompt user to enter integer2
  scanf("%d", &integer2);					//scan for integer 2

  sum = integer1 + integer2;

  printf("the value of the sum is %d\n\n", sum);		//display sum

  }		//end program