/******************************************************************************************
*
* Andrew Baca
* Febuary 26, 2016
* 
* CS271 section MO2
* arrayfunctions.h
*
* purpose: this header file will serve as a place to store function prototypes
*
*******************************************************************************************/

#ifndef  ARRAYFUNCTIONS
#define	 ARRAYFUNCTIONS

void fillInteger( int a[ ], int length, int min, int max );
void fillCharacter( char c[ ], int length, char start, char end );
void findConsecutive( int array[ ] , int length);
void findTriples ( char c[ ], int length );
void fillFloat( float a[ ], int length, float min, float max);
float floatMean( float array[ ], int length);

#endif