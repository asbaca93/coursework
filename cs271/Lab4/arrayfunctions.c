/************************************************************************************************************
*
* Andrew Baca
* Febuary 26, 2016
*
* CS 271 Section MO2
* arrayfunctions.c
*
* purpose: This program will be the main source code file that will hold the six functions
*	   to be called to in lab4.c
*
*************************************************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#include "arrayfunctions.h"

/******************fillInteger*************************/

void fillInteger( int a[ ], int length, int min, int max ){
  
  int i;
  
  for(i = 0; i <= length - 1; i++)					//for loop randomizing ints from min to max
  {
    a[i] = rand() % (max * 2) + min;
  }
  
}

void findConsecutive( int array[ ] , int length){
  
  int i;
  int k;
  
  for(i = 0; i <= length - 1; i++)					//for loop finding consecutive ints
  {
    k = array[i] - array[i + 1];
    
    if(k == -1)
      printf("Element %d and Element %d are consecutives\n", i, i+1);
  }
}

void fillCharacter( char c[ ], int length, char start, char end ){
  
  int i;
  
  for(i = 0; i <= length - 1; i++)						//for loop filling char array of size length with elements start to end
  {
    c[i] = 'a' + rand() % 26;
  }

}
    
void findTriples ( char c[ ], int length ){
  
  int i,x,y,z,m,n;
  
  for( i = 0; i <= length - 1; i++)						//for loop finding three cosecutive chars
  {
    x = (int)c[i];
    y = (int)c[i + 1];
    z = (int)c[i + 2];
    
    m = z - y;
    n = y - x;
    
    if((m == 1)&&(n == 1))
      printf("\n%c, %c, and %c are triples\n", c[i], c[i+1], c[i+2]);
  }
}

void fillFloat( float a[ ], int length, float min, float max){
  
  int i,m,n,o;
  float x;
  
  m = (int)min;
  n = (int)max;
  
  for(i = 0; i <=length - 1; i++)							//for loop filling float array
  {
    o = (rand() % (n -m + 1)) + m;
    a[i] = (float)o;
  }
}

float floatMean( float array[ ], int length){
  
  int i;
  float sum= 0;
  float mean;
  
  for(i = 0; i <= length - 1; i++)							//for loop finding mean
  {
    sum = sum + array[i];
  }
  
  mean = sum / (float)length;
  
  return(mean);
}

float floatMin( float array[ ], int length ){						//loop to find min
  
  int i;
  float min;
  int count = 0;
  
  for(i = 0; i <= length -1; i++)
  {
    if(count == 0)
      min = array[i];
    if(min > array[i])
      min = array[i];
    count = count + 1;
  }
  printf("\nMin: %4.1f", min);
  return(min);
}

float floatMax( float array[ ], int length ){							//function and loop to find max
  
  int i;
  float max;
  int count = 0;
  
  for(i = 0; i <= length - 1; i++)
  {
    if(count == 0)
      max = array[i];
    if(max < array[i])
      max = array[i];
    count = count + 1;
  }
  printf("\nMax: %4.1f\n\n",max);
  return(max);
}

