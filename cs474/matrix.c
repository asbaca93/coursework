/******************************************************************************************************************************
* 
* Andrew Baca, Shane Grayson
* Operating Systems Programming assignment # 2, Part 3
* December 6th, 2018
* 
* Purpose: This program will read multiply an MxN and an NxK matrix together and display the new MxK matrix, given 
*	   a file input to read from, where the first two numbers read will be the size of the first matrix, followed 
*	   by the values of the matrix. This will be done with each new value of the new matrix being computed with
*	   their own individual thread.  
*
* Sources: http://www.cprogrammingnotes.com/question/reading-numbers-from-file.html
*	   https://www.programmingsimplified.com/c-program-multiply-matrices
*
* EDITORS NOTE: ALL WE HAVE TO WORK ON IS THREADING NOW!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*
*****************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int matrixA[100][100];
int matrixB[100][100];
int matrixC[100][100];
int sum;

void *runner(void *param);

struct v {
	int i; /*row*/
	int j; /*column*/
	int col;
};



int main(void){

	FILE *fp;
	int row, column;
	int row2, column2;
	int flag, i, j, k, sum;
	row = 0;
	column = 0;
	flag = 0;
	row2 = 0;
	column2 = 0;

	fp = fopen("matrixNumbers.txt", "r");			//open file

	printf("\n\nMATRIX MULTIPLICATION USING THREADS\n\n");
	

   	if (fp == NULL)
  	{
        	printf("Can't open file for reading.\n");
    	}
    	else
    	{
        	fscanf(fp, "%d", &row);						//read in params of first array			
        	fscanf(fp, "%d", &column);
		printf("\nMatrixA will be a [%d x %d] Matrix!\n", row, column);
		flag = 1;
		
	}

	//int matrixA[row][column];						//Declare a 2D array to hold matrix
	
	if(flag == 1){
		for(i = 0; i < row; i++){
			for(j = 0; j < column; j++){
				fscanf(fp, "%d", &matrixA[i][j]);		//scan in matrix 1 values
			}
		}
	
	}

	if(flag == 1){								//print values of matrix 1
		for(i = 0; i < row; i++){
			for(j = 0; j < column; j++){
				printf("%d ", matrixA[i][j]);
			}
			printf("\n");
		}
	
	}

	if(flag == 1){								//read in params of matrix2
		fscanf(fp, "%d", &row2);
		fscanf(fp, "%d", &column2);
		printf("\nMatrixB will be a [%d x %d] Matrix!\n", row2, column2);
	}

	//int matrixB[row2][column2];						//declare 2d array to hold matrix2

	if(flag == 1){
		for(i = 0; i < row2; i++){
			for(j = 0; j < column2; j++){
				fscanf(fp, "%d", &matrixB[i][j]);		//fill in values of matrix2
			}
		}
	
	}

	if(flag == 1){
		for(i = 0; i < row2; i++){					//print out values of matrix2
			for(j = 0; j < column2; j++){
				printf("%d ", matrixB[i][j]);
			}
			printf("\n");
		}
	}
	
	pthread_t threads[row][column2];
	pthread_attr_t attr;
	//int matrixC[row][column2];						//declare size of matrix3
	pthread_attr_init(&attr);

	if(column == row2){									//check if multiplyable
		printf("\nColumn of matrixA matches row of MatrixB! we CAN multiply!\n");
	}
	else{
		printf("\nColumn and row mismatch! we CANNOT multiply!\n");
		flag = 0;
	}

	if(flag == 1){									//fill in values of new matrix
		for (i = 0; i < row; i++) {
			for (j = 0; j < column2; j++) {
				struct v *data = (struct v *)malloc(sizeof(struct v));
				data->i = i;
				data->j = j;
				data->col = column;
				pthread_create(&threads[i][j], &attr, runner,(void*) data);
				pthread_join(threads[i][j], NULL);
			}
		}
	}

	if(flag == 1){
		printf("\nNew Matrix:\n\n");					//print out new matrix
		for(i = 0; i < row; i++){
			for(j = 0; j < column2; j++){
				printf("%d ", matrixC[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	fclose(fp);
}

void *runner(void *param){
	sum = 0;
	int k;
	int i = ((struct v*)param)->i;
	int j = ((struct v*)param)->j;
	int col = ((struct v*)param)->col;
	for (k = 0; k < col; k++) {
          	sum = sum + matrixA[i][k]*matrixB[k][j];
        }
        matrixC[i][j] = sum;
        sum = 0;
	pthread_exit(0);
}
