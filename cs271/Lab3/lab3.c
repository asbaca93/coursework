/*************************************************************************************************************
*
* Andrew Baca
* Febuary 11, 2016
*
* CS 271 Section MO2
* lab3.c
*
* Purpose: This program will call 3 user defined functions, perfect(), prime(), and rev_digits()
*	   to test if a number is prime, a perfect number, then it will reverse that numbers digits
*
* input: integer valued number
* output: reversed number, along with a boolean value true or false for prime and perfect numbers
*
*************************************************************************************************************/

#include "lab3functions.h"
#include <stdio.h>
#include <math.h>

int main(void)
{
  int test_num1 = 0;
  int is_num_perfect = 0;
  int test_num2 = 0;
  int test_num3 = 0;
  int num_reverse;
  int count = 0;
  int is_num_prime;
  
  for(test_num1 = 3; test_num1 < 10000; test_num1++)
  {
    perfect(test_num1);
  }
  
  for(test_num2 = 2; test_num2 < 10000; test_num2++)
  {
    prime(test_num2);
  }
  
  printf("\nENTER A INT VALUE NUMBER TO BE REVERSED: ");
  scanf("%d", &test_num3);
  
  num_reverse = revDigits(test_num3);
  
  printf("\nThe reversed number is %d\n", num_reverse);
  
}
  
  
      