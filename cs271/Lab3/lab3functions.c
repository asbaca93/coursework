/************************************************************************************************************
*
* Andrew Baca
* Febuary 11, 2016
*
* CS 271 Section MO2
* lab3functions.c
*
* purpose: This program will be the main source code file that will hold the three functions
*	   to be called to in test.c
*
*************************************************************************************************************/

#include <stdio.h>
#include <math.h>

#include "lab3functions.h"


/****************************************PERFECT**************************************************************/

void perfect(int number)
{
  
  int sum = 0;											//declare all variables
  int count = 0;
  int hold = 0;

  for(count = 1; count < number; count ++)							//for loop checking if number is perfect
  {
    hold = number % count;
    if(hold == 0)										//if number is divisible, increment sum by that number
    {
      sum = sum + count;
    }				//end if
    
    if(number == sum)
    {
      printf("\n%d is a perfect number.\n", number);	//print if a perfect number
      number = number + 1;
    }				//end if

  }			//end for
  
}		//end perfect


/***************************************PRIME*******************************************************************************/

void prime(int number)
{
  int count = 0;										//declare all variables
  int num_hold = 0;
  double hold = 0.0;
  int is_prime = 1;
  
  hold = (double)sqrt(number);									//set number as a double
  
  num_hold = (int)hold;
  
  for(count = 2; count < num_hold + 1;count++)
  {
    if((number>count)&&(number % count == 0))
    {
      is_prime = 0;										//if number has no remainder, it is not prime
    }		//end if
  }		//end for
  
  if(is_prime == 1)
  {
    printf("\n%d is a prime number\n", number);
  }		//end if
  
}	//end prime


/*******************************************REVDIGITS***************************************************************************/

int revDigits(int number)
{
  int is_abs = 0;
  int first_mult = 0, second_mult = 0, third_mult = 0;
  int fourth_mult = 0, fifth_mult = 0;
  int num_hold_ones = 0, num_hold_tens = 0;
  int num_hold_hundreds = 0, num_hold_thou = 0;
  int num_hold_ten_thou = 0;
  int last_digit;
  int flag = 0;
  
  if(number == 0)
  {
    return(0);
  }		//end if
  
  if(number < 0)
  {
    number = abs(number);
    is_abs = 1;
  }
  
  if(number <= 9)
  {
    if(is_abs == 1)
    {
      return(-number);
    }
    else
      return(number);
  }
  
  if((number > 9)&&(number < 100))
  {
    first_mult = 10;
  }
  else if((number >= 100)&&(number < 1000))
  {
    first_mult = 100;
    second_mult = 10;
  }
  else if((number > 999)&&(number < 10000))
  {
    first_mult = 1000;
    second_mult = 100;
    third_mult = 10;
  }
  else
  {
    first_mult = 10000;
    second_mult = 1000;
    third_mult = 100;
    fourth_mult = 10;
  }
  
  while((number > 9)&&(number % 10 != 0))
  {
    number = number - 1;
    num_hold_ones = num_hold_ones + 1;
  }
 
  number = number /10;
  
  if((number < 10)&&(flag == 0))
  {
    last_digit = number;
    flag = 1;
  }

  while((number > 9)&&(number % 10 != 0))
  {
    number--;
    num_hold_tens++;
  }
  
  number = number / 10;
  
  if((number < 10)&&(flag == 0))
  {
    last_digit = number;
    flag = 1;
  }
  
  while((number > 9)&&(number % 10 != 0))
  {
    number--;
    num_hold_hundreds++;
  }
  
  number = number/10;
  
  if((number < 10)&&(flag == 0))
  {
    last_digit = number;
    flag = 1;
  }
  
  while((number > 9)&&(number % 10 != 0))
  {
    number--;
    num_hold_thou++;
  }
  
  number = number / 10;
  
  if((number < 10)&&(flag == 0))
  {
    last_digit = number;
    flag = 1;
  }
  
  while((number > 9)&&(number % 10 != 0))
  {
    number++;
    num_hold_ten_thou++;
  }
  
  if(first_mult == 10)
  {
    number = first_mult * num_hold_ones + last_digit;
  }
  
  if(first_mult == 100)
  {
    number = first_mult * num_hold_ones + second_mult * num_hold_tens + last_digit;
  }
  
  if(first_mult == 1000)
  {
    number = first_mult * num_hold_ones + second_mult * num_hold_tens;
    number = number + third_mult * num_hold_hundreds + last_digit;
  }
  
  if(first_mult == 10000)
  {
    number = first_mult * num_hold_ones + second_mult * num_hold_tens;
    number = number + third_mult * num_hold_hundreds + fourth_mult * num_hold_thou;
    number = number + last_digit;
  }
  
  if(is_abs == 1)
  {
    number = -number;
  }
  
  return(number);
}

  