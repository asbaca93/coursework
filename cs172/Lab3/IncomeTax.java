/************************************************************
*
* Andrew Baca
* Febuary 9, 2016
*
* IncomeTax.java
* CS172 section MO2
*
* Purpose:this program calculated the income tax of a certain person
*          
*
* input: salary
* output: income tax
*     
******************************************************************************/

import java.util.Scanner;                                //import scanner

public class IncomeTax{
   public static void main (String [] args){
      
      Scanner scnr = new Scanner(System.in);             //setup new scanner
      
      int annualSalary = 0;                              //declare all variables
      double taxRate = 0.0;
      int taxToPay = 0;
      
      System.out.println("Enter annual salary: ");       //prompt user to enter their salary
      annualSalary = scnr.nextInt();                     //scan keyboard for salary
      
      while(annualSalary <= 0)
      {
         System.out.println();                                                //error if salary < 0
         System.out.println("ERROR! the salary has to be greater than $0.00!!");
         System.out.println("Enter annual salary: ");       //prompt user to enter their salary
         annualSalary = scnr.nextInt();                     //scan keyboard for salary
      }
      
      if(annualSalary <= 20000){                         //if salary is less than 20000, tax rate is .10
         taxRate = 0.10;
      }
      
      else if(annualSalary <= 50000){                  //if salary is less than 50000, tax rate is .20
         taxRate = 0.20;
      }
      
      else if(annualSalary <= 100000){                   //if salary is between 50001 and 100000, taxrate is 0.30
         taxRate = 0.30;
      }
      
      else{                                          //tax rate is 0.30 for any salary exceeding 50000
         taxRate = 0.40;
      }
      
      taxToPay = (int)(annualSalary * taxRate);             //get tax to pay as an integer
      System.out.println("Annual Salary: " + annualSalary);    //print salary
      System.out.println("Tax Rate: " + taxRate);              //print tax rate
      System.out.println("Taxes To Pay: " + taxToPay);         //print the taxes owed
      
      }     //end main
    }    //end class
   