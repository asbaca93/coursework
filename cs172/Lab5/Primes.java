/********************************************************************************
*
*Andrew Baca
*CS172 MO2
*
*Primes.java
*March 8, 2016
*
*Purpose: this program prints all the prime numbers between 2 and 1000
*
***********************************************************************************/

public class Primes{
   public static void main(String args[]){
   
   int i, j;                        //declare all variables
   int number;
   int isPrime = 0;
   int count = 1;
   
   for(i = 2; i < 1000; i++)           //outer for, incriments number being tested
   {
      number = i;
      
      for(j = 2; j < number; j++)      //inner for increments number being tested for remainder
      {
         if( number % j == 0)
         {
            isPrime = 1;               //set is prime to one if not prime
         } //end if

      }     //end for
      if(isPrime == 0)
      {
        System.out.print(number + " ");      //print prime number
        count = count + 1;
      }//end if
      if(count == 10)
      {
         System.out.println();               //if ten numbers pass, enter a new line
         count = 0;
      }     //end if
      isPrime = 0;
    }    //end for

  }      //end main
}     //end class