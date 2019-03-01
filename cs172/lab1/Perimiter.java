/******************************************************************
*
*Perimiter.java
*
*Andrew Baca
*CS172 section MO2
*
*January 28, 2016
*
*This program prints the perimiter of a rectangle 
*given length and width
*
*******************************************************************/

public class Perimiter {
   public static void main(String args[]) {
   
      double length = 4.5;                      //declare variables
      double width = 5.0;
      double perimiter = 2.0 * length + 2.0 * width;
      
      System.out.print("The length is " + length);             //print length and width
      System.out.println(" and the width is " + width + ".");
      
      System.out.println("The perimiter is " + perimiter + ".");  //print the perimiter
      
   }  //end main
} //end class