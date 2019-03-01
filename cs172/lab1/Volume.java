/******************************************************************
*
*Volume.java
*
*Andrew Baca
*January 28, 2016
*CS172 secion MO2
*
*Print the volume of a rectangle with given height and diameter
*
*******************************************************************/

public class Volume {
   public static void main(String args[]) {
   
      double height = 3.0;                      //declare variables
      double diameter = 4.0;
      double volume;
      double radius;
      
      radius = diameter / 2.0;                  //claculate radius
      volume = 3.14 * radius * radius * height; //calculate volume
      
      System.out.print("the height and the diameter");      //print the values of height,diameter
      System.out.print(" of the cylinder is ");
      System.out.print(height + " and " + diameter);
      System.out.println(", respectivelly.");
      
      System.out.print("the volume of the");                //print the value of volume
      System.out.print("cylinder is: ");
      System.out.println(volume + ".");
      
    }    //end main
 }    //end class