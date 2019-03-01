/************************************************************
*
* Andrew Baca
* Febuary 4, 2016
*
* ComputingChange.java
* CS172 section MO2
*
* Purpose: This program calculates the number of bills needed to give change
*
* input: change to give
* output: number of 20's
*         number of 10's
*         number of 5's
*         number of 1's
*
******************************************************************************/

import java.util.Scanner;

public class ComputingChange {
   public static void main (String [] args) {

      int amountToChange = 0;                //declare all variables
      int numTwenties = 0;
      int numTens = 0;
      int numFives = 0;
      int numOnes = 0;
      int changeLeft;
      
      Scanner scnr = new Scanner(System.in);    //declare new scanner
      
      System.out.print("Enter the amount of change needed: "); //prompt user to enter change needed
      amountToChange = scnr.nextInt();                         //scan for user input
      
      numTwenties = amountToChange / 20;                       //calculate twenties
      changeLeft = amountToChange - numTwenties * 20;
      numTens = changeLeft / 10;                               //calculate tens
      changeLeft = changeLeft - numTens * 10;
      numFives = changeLeft / 5;                               //calculate fives
      numOnes = changeLeft % 5;                                //calculate ones
      
      System.out.println("amount of change: " + amountToChange);     //show amount of change
      System.out.println();
      
      System.out.println("amount of twenties: " + numTwenties);     //show twenties
      System.out.println();

      System.out.println("amount of tens: " + numTens);     //show tens
      System.out.println();
      
      System.out.println("amount of fives: " + numFives);     //show fives
      System.out.println();
      
      System.out.println("amount of ones: " + numOnes);     //show ones
      System.out.println();
      
      }        //end main
    }       //end class



      