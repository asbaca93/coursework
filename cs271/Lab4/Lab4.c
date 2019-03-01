/*************************************************************************************************************
*
* Andrew Baca
* Febuary 26, 2016
*
* CS 271 Section MO2
* lab4.c
*
* Purpose: this program will declare an array and call several functions to manipulate the array,
*          and find certain information about the array
*
*************************************************************************************************************/

#include "arrayfunctions.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  
  int array1[20];							//declare variables
  int size = 20;
  int min = -20;
  int max = 20;
  int i;
  int k;
  char array2[50];
  int size2 = 50;
  char start = 'a';
  char end = 'z';
  float array3[10];
  int size3 = 10;
  float min2 = 1.0f;
  float max2 = 50.0f;
  float mean;
  float minf;
  float maxf;
  
  srand(time(NULL));
  
  /***********************PROBLEM1**********************************/
  
  printf("\n*******PROBLEM # 1*******************\n");				//print problem number
  
  fillInteger(array1, size, min, max);					//call fillInteger
  
  printf("\n");
  
  for(i = 0; i <= 19; i++)						//print 10 array elements per line
  {
    printf("%3d  ", array1[i]);
    k = i + 1;
    
    if((k > 0) && (k % 10 == 0))
      printf("\n");
  }
  printf("\n");
  
  findConsecutive(array1, size);					//call findConsecutive
  
  /************************PROBLEM2*********************************/
  
  printf("\n*************PROBLEM # 2 ****************\n");
  
  fillCharacter(array2, size2, start, end);				//call fillCharacter
  
  printf("\n");
  
  for( i = 0; i <= 49; i++)						//print all char on one line with a space between
  {
    printf("%c  ", array2[i]);
  }
  
  printf("\n");
  
  findTriples (array2, size2);						//findtrips function
  


  /*********************PROBLEM3**************************************/

  printf("\n**************PROBLEM #3 ***********************\n");
  
  fillFloat( array3, size3, min2, max2);					//fill a float array
  
  for(i = 0; i <= size3 - 1; i++)
  {
    printf("%4.1f  ", array3[i]);						//print elements of array on one line with 2 spaces between
  }
  printf("\n");
  
  mean = floatMean(array3, size3);						//call and print mean, min and max
  printf("\nMean: %4.1f\n", mean);
  minf = floatMin(array3, size3);
  maxf = floatMax(array3, size3);
  
 
  /*printf("\nMin: %4.1f", minf);				prints wrong number after return for some reason*/   
  /*printf("\nMax: %4.1f\n", maxf);				same with this, so I put printf statements inside min/max functions*/  

}