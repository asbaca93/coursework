###################################################################################################################
#
# Andrew Baca
# September 14, 2018
# 
# Program: Gaussian.py
# Objective: this program will perform Gausian elimination on a square matrix given the input size
#	     and capture UNIX time of these runs.
#
# Input: Array size 250, 500, 1000, 1500, 2000
# Output: Solved Array and UNIX runtime for the solve
# 
##################################################################################################################

import numpy as np				#import numPy Libraries
from random import seed				#import RandomLibraries
import random

seed(1)				#random seed

size = 1000			#size entry for the matrix

b = np.ones(size)			#declare 1-d array for augmented part of matrix
x = np.ones(size)			#declare 1-d array for variable in Ax = B
a = np.random.randn(size, size)* 10	#include 2d array representing the system of equations


for i in range(size - 1):		#gaussian elimination, echelon form
 for j in range(i , size):
  a[j,i] = a[j,i]/a[i,i]
  for k in range(i + 1, size):
    a[j,k] = a[j,k] - a[j,i]*a[i,k]

for i in range(size - 1):		#gausian elimination reducedechelon form
 for j in range(i + 1, size):
  a[j,i] = a[j,i]/a[i,i]
  for k in range(i, size):
    a[j,k] = a[j,k] - a[j,i]*a[i,k]

for i in range(size - 1):		#forward elimination using the augmented part of the matrix
 for j in range(i + 1, size):
  b[j] = b[j] - a[j,i] * b[i]

for i in range(size -1, 0):		#backward solve into variable part of the matrix
 s = b[i]
 for j in range(i + 1, size):
  s = s - a[i,j]*x[j]
 x[i] = s / a[i,i]

print(a)


