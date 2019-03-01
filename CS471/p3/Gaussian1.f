!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!
!	Andrew Baca
!	Semptember 14, 2018
!	
!	Program: Gaussian1.f
!	Objective: this program will perform Gausian elimination on a square matrix given the input size
!			and capture UNIX time of these runs.
!
!	Input: Array size 250, 500, 1000, 1500, 2000
!	Output: Solved Array and UNIX runtime for the solve
!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

	program Gaussian1

	implicit none
	integer i,N,j,k,siz,s
	real, dimension(:), allocatable :: B			!declare 1-d array for agmented part of matrix
	real, dimension(:,:), allocatable :: A			!declare 2-d array for system of equations
	real, dimension(:), allocatable :: X			!declare 1-d array for variable names
 	real z
	ALLOCATE(A(N,N))			!allocate space for array
	AllOCATE(B(N))				!allocate space for the array
	Allocate(X(N))				!allcoate space for the array

	z=0
	siz = 500
	
   	do i = 1,siz				!fill the system of equations with random variables ranging from 1 to 10
         do j=1, siz
	   A(i,j) = int(rand(0)*10) + 1
	   !print *,A(i,j)
 	  end do
        end do
	
	do i = 1, siz - 1				!Gaussian elimination for the bottom half of the matrix
	 do j = i, siz
	   A(j,i) = A(j,i)/A(i,i)
	    do k = i + 1, siz
	     A(j,k) =  A(j,k) - (A(j,i)*A(i,k))
	    end do
	  end do
	end do  

	do i = 1, siz - 1				!Gaussian elimination for the top haf of the matrix
	 do j = i + 1, siz
	   A(j,i) = A(j,i)/A(i,i)
	    do k = i, siz
	     A(j,k) =  A(j,k) - (A(j,i)*A(i,k))
	    end do
	  end do
	end do  

	do i = 1, siz					!fill answer array and variable array with 1's
	 b(i) = 1.0
	 x(i) = 1.0
	end do	
	
	do i = 1, siz -1				!forward elimination using the augmented part of the matrix
	 do j = i + 1, siz
	  B(j) = B(j) - (A(j,i)*B(i))
	 end do
	end do

	x(siz) = A(siz,siz)
	
	do i = siz, 1					!fill in variableswith their answers, ie backward solve
	 s = b(i)
	 do j = i + 1, siz
	  s = s - (A(i,j)*x(j))
	 end do
	 x(i) = s/a(i,i)
	end do
	
        stop
	end 
