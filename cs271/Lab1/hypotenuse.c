/******************************************************************************************
*
* Andrew Baca
* CS271 Section MO2
* Febuary 3, 2016
* hypotenuse.c
*
* purpose: this program calculates the value of a hypotenuse on a right triangle
*	   given the value of the two legs
*
* input: two legs of a right triangle
* output: hypotenuse
*
*******************************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void){
  
  double leg1;						//declare alll variables
  double leg2;
  double hypotenuse;

  printf("\n\nThis program calculates hypotenuse ");			//informative prompt
  printf("given the value of two legs of right triangle\n\n");

  printf("Enter the value of leg1: ");			//prompt user to enter leg1 value
  scanf("%lf", &leg1);					//scan for leg1 value

  printf("Enter the value of leg2: ");			//prompt user to enter leg2 value
  scanf("%lf", &leg2);					//scan for leg2 value

  hypotenuse = sqrt(leg1 * leg1 + leg2 * leg2);		//calculate hypotenuse

  printf("\n\nthe value of hypotenuse is: %f\n\n", hypotenuse);		//display hypotenuse

} //end program