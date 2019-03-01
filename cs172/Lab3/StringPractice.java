/************************************************************
*
* Andrew Baca
* Febuary 9, 2016
*
* StringPractice.java
* CS172 section MO2
*
* Purpose: this program will prompt the user to input a string, and from there
*          it will print the first word of the string, print the screen in all
*          uppercase, lowercase, change 'e's to'a's, locate the first location of
           't', and print the last character of the string
*         
*
* input: a string entered by user
* output: multiple variations of that string
*     
******************************************************************************/

import java.util.Scanner;                                //import scanner

public class StringPractice{
   public static void main(String args[]){
      
      String s;                                          //declare string variable
      int index = 0;                                     //declare index to hold type int
      
      Scanner scnr = new Scanner(System.in);             //initialize scanner
      
      System.out.println("Enter a string of any length: ");     //prompt user to enter a string
      s = scnr.nextLine();                                     //scan for the string
      
      System.out.println();
      System.out.print("The length of your string is: ");
      System.out.println(s.length());                        //print the length of the string
      
      index = s.indexOf(" ");                               //find the location of the first space
      
      if(index != -1)                                       //checks if more than one word on the string
      {
         System.out.println();
         System.out.print("The first word of your string is: ");
         System.out.println(s.substring(0,index + 1));             //print the first word of the string
      }        //end if
      
      if(index == -1)
      {
         System.out.println();
         System.out.print("The only word your string contains is: ");
         System.out.println(s);                                         //print whole string
      }        //end if
      
      System.out.println();
      System.out.print("All uppercase string: ");
      System.out.println(s.toUpperCase());                              //print uppercase string
      
      
      System.out.println();
      System.out.print("All lowercase string: ");
      System.out.println(s.toLowerCase());                              //print lowercase string
      
      System.out.println();
      System.out.print("Replacing 'e' with 'a' gives us: ");
      System.out.println(s.replace('e', 'a'));                           //replace 'e' with 'a'
     
      index = s.indexOf("t");                                        //checks for 't'
     
      if(index != -1)
      {
         System.out.println();
         System.out.print("The location of the first 't' is: ");
         System.out.println(index);                                   //print the location of t
      }
      else
      {
         System.out.println();
         System.out.println("This string doesn't contain a 't'.");
      }
      
      index = s.length();                                            //gets length of string
      
      System.out.println();
      System.out.print("The last character of the string is: ");
      System.out.println(s.substring(index - 1, index));         //prints last character  
   }     
}
      
      
      