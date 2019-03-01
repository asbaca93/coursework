/************************************************************
*
* Andrew Baca
* Febuary 4, 2016
*
* ChangeWithCoins.java
* CS172 section MO2
*
* Purpose: This program calculates the number of bills needed to give change\
*           as well as the number of coins
*
* input: change to give
* output: number of 20's      number of quarters
*         number of 10's      number of dimes
*         number of 5's       number of nickels
*         number of 1's       number of pennies
*
******************************************************************************/

import java.util.Scanner;

public class ChangeWithCoins {
   public static void main (String [] args) {

      int amountToChange = 0;                //declare all variables
      int numTwenties = 0;
      int numTens = 0;
      int numFives = 0;
      int numOnes = 0;
      int numQuarters = 0;
      int numDimes = 0;
      int numNickels = 0;
      int numPennies = 0;
      int changeLeft = 0;
      double tempHolder;
      
      Scanner scnr = new Scanner(System.in);    //declare new scanner
      
      System.out.print("Enter the amount of change needed: "); //prompt user to enter change needed
      tempHolder = scnr.nextDouble();                         //scan for user input
      
      tempHolder = tempHolder * 100.0;                         //move decimal value up two places
      
      amountToChange = (int)tempHolder;                        //making value of change an integer
      
      numTwenties = amountToChange / 2000;                     //gets number of twenties needed
      changeLeft = amountToChange - numTwenties * 2000;        //computes whats left
      
      numTens = changeLeft / 1000;                             //gets number of tens needed
      changeLeft = changeLeft - numTens * 1000;                //computes change left
      
      numFives = changeLeft / 500;                             //gets number of fives needed
      changeLeft = changeLeft - numFives * 500;                //computes change left
      
      numOnes = changeLeft / 100;                              //computes number of ones needed
      changeLeft = changeLeft - numOnes * 100;                 //gets change left
      
      numQuarters = changeLeft / 25;                           //computes number of quarters needed
      changeLeft = changeLeft - numQuarters * 25;             //gets change left
      
      numDimes = changeLeft / 10;                              //gets number of dimes needed
      changeLeft = changeLeft - numDimes * 10;                   //getas change left
      
      numNickels = changeLeft / 5;                             //gets nickels
      numPennies = changeLeft % 5;                                //gets pennies
      
      System.out.println("Twenties needed: " + numTwenties);      //display 20's
      System.out.println();
      
      System.out.println("Tens needed: " + numTens);           //display 10's
      System.out.println();
      
      System.out.println("Fives needed: " + numFives);          //display 5's
      System.out.println();
      
      System.out.println("Ones needed: " + numOnes);      //display 1's
      System.out.println();
      
      System.out.println("Quarters needed: " + numQuarters);      //display Quarters
      System.out.println();
      
      System.out.println("Dimes needed: " + numDimes);      //display dimes
      System.out.println();
      
      System.out.println("Nickels needed: " + numNickels);      //display Nickels
      System.out.println();
      
      System.out.println("Pennies needed: " + numPennies);      //display Pennies
      System.out.println();
      
      }        //end main
    }       //end class



      