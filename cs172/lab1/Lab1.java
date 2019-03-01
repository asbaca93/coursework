/******************************************************************
*
*Lab1.java
*
*Andrew Baca
*January 28, 2016
*CS172 secion MO2
*
*Print the volume of a rectangle with given height and diameter
*
*input: height and diameter
*output: volume
*
*******************************************************************/

import java.util.Scanner;

public class Lab1 {
   public static void main(String args[]) {
   
      double height;                      //declare variables
      double diameter;
      double volume;
      double radius;
        
      Scanner scnr = new Scanner(System.in);    //import scanner class
      
      System.out.print("Enter the height of ");    //prompt user to enter height
      System.out.println("the cylinder: ");
      
      height = scnr.nextDouble();                  //get user input for height
      
      System.out.print("Enter the diameter of ");  //prompt the user to enter diameter
      System.out.println("the cylinder: ");
      
      diameter = scnr.nextDouble();                //get input from user
      
      radius = diameter / 2.0;                     //calculate radius
      volume = 3.14 * radius * radius * height;    //calculate height
           
      System.out.print("the volume of the");       //print the value of volume
      System.out.print(" cylinder is: ");
      System.out.println(volume + ".");
      
    }    //end main
 }    //end class