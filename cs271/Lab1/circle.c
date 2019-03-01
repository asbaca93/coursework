/****************************************************************************
*
* Andrew Baca
* Febuary 3, 2016
* CS271 Section MO2 Lab1
*
* Program Name: circle.c
* 
* Purpuse: This program calculates and displays the area of a circle given
* 	   the radius.
* input: radius
* output: area
*
****************************************************************************/

#include <math.h>
#include <stdio.h>

int main(void) {

  double radius;				//declare variables
  double area;
  
  printf("\n\nThis program calculates the area");	//informative message
  printf(" of a circle given the radius\n\n");
  
  printf("Enter the radius of your circle: ");		//prompt user to enter radius
  scanf("%lf", &radius);					//scan for user input
  
  area = M_PI * radius * radius;			//compute area
  
  printf("\n\nThe area of circle is %f\n\n", area);	//display area
  
  

  }		//end program