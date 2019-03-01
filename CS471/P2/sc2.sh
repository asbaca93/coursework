#!/bin/sh			

#Andrew Baca
#CS471
#sc2.sh
#Purpose- this program will test short circuit evaluation in the borne shell
#September 5, 2018

j=1
printf "Test #1 checking short circuit evaluation with the first argument of an AND statement to be FALSE: \n\n"
if [ $j -ne 1 ] && echo "ARG 2 EVALUATED"			#case 1, first argument of AND condition is false
then								#if Short circuit evaluation is applied, the second arg will print a statement
   echo '***true***'
else
   echo '***false***'
fi

printf "\n\nTest #2 checking short circuit evaluation with the first argument of an OR statement to be TRUE: \n\n"
if [ $j -eq 1 ] || echo "ARG 2 EVALUATED"			#Case 2, first argument of OR condition is false
then								#if Short circuit evaluation is applied, the second arg will print a statement
   echo '***true***'
else
   echo '***false***'
fi

i=2
printf "\n\nTest #3 checking short circuit evaluation with the first argument of an AND statement to be TRUE: \n\n"
if [ $i -eq 2 ] && echo "ARG 2 EVALUATED"			#Case 3, first argument of AND condition is true
then								#the second argument, our function, will be hit no matter what with this first condition
   echo '***true***'
else
   echo '***false***'
fi

printf "\n\nTest #4 checking short circuit evaluation with the first argument of an OR statement to be FALSE: \n\n"
if [ $i -ne 2 ] || echo "ARG 2 EVALUATED"			#Case 4, first argument of OR condition is false
then								#the second argument, our function, will be hit no matter what with this first condition
   echo '***true***'
else
   echo '***false***'
fi
