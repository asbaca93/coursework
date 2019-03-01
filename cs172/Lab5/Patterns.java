/********************************************************************************
*
*Andrew Baca
*CS172 MO2
*
*Patterns.java
*March 8, 2016

*Purpose: this program prints the pattern displayed in number 10 of the handout
*
***********************************************************************************/

public class Patterns{
   public static void main(String args[]){
   
      int x,y,z;              //declare all variables
      
      for(x = 1; x <= 5; x++)       //for loop keeping track of numbers
      {
         y = x;
         z = 1;
         
         while( z <= x)             //while increment and printing
         {
            System.out.print(z);
            z = z + 1;
         }     //end while
         
         System.out.print(" ");        //prints space between numbers
                  
         while(y > 0)                  //while decrementing and printing numbers
         {
            System.out.print(y);
            y = y - 1;
         }     //end while
         System.out.println();         //enter
       }    //end for
}     //end main
}  //end class

         
