/*********************************************************************************
*
* Andrew Baca
* Febuary 25, 2016
*
* Lab4.java
* CS 172 MO2
*
* Purpose: 3 objectives using a while loo-p and for loop for each:
*           1. count from 1 to 99
*           2. get 10 int value from user, marking highest value
*           3. get string from user, and count vowels
*
*********************************************************************************/

import java.util.Scanner;

public class Lab4{
   public static void main(String[] args){
   
      int i,a,e,eye,o,u;                                 //declare all variables
      int count;
      int number;
      int max = 0;
      int strLen;
      String s;
      char c;
      
      Scanner scnr = new Scanner(System.in);       //initialize scanner
      Scanner scan = new Scanner(System.in);
   
      /***********PROBLEM #1********************/
      /*********FOR LOOP********/
   
      System.out.println();
      System.out.println("**********PROBLEM1************");
      System.out.println("For loop printing numbers 1 to 99");
      
      for(i = 1; i <= 99; i++)
         System.out.println("i = " + i);
         
      /********WHILE LOOP**********/
      
      System.out.println("While loop printing numbers 1 to 99");
      
      i = 1;
     
      while( i <= 99)
      {
         System.out.println("i = " + i);
         i = i + 1;
      }     //end while
      
      /**************PROBLEM #2*****************/
      /*************FOR LOOP************/
      
      System.out.println();
      System.out.println("**********PROBLEM2************");
      System.out.println("For loop getting 10 values, marking highest value");
      
      count = 0;
      
      for(i = 1; i <= 10; i++)
      {
         System.out.print("Enter an integer value: ");
         number = scnr.nextInt();
         
         if(count == 0)
         {
            max = number;
         }     //end if
         if(max < number)
         {
            max = number;
         }     //end if
         count = count + 1;
      }      //end for
      
      System.out.println("The highest value entered was " + max + ".");
      
      /**************WHLE LOOP************/
      
      System.out.println("while loop getting 10 values, marking highest value");
      
      i = 1;
      count = 0;
      
      while( i <= 10)
      {
         System.out.print("Enter an integer value: ");
         number = scnr.nextInt();         
      
         if(count == 0)
         {
            max = number;
         }     //end if
         if(max < number)
         {
            max = number;
         }     //end if
         
         count = count + 1;
         i = i + 1;
         
      }     //end while
      
      System.out.println("The highest value entered was " + max + ".");
      
      /****************PROBLEM #3********************/
      /***********FOR LOOP************/
      
      System.out.println("get a string and count the vowels, for loop");
      System.out.println();
      
      System.out.println("Enter a string: ");
      
      s = scan.nextLine();
      System.out.println("The string entered is: " + s);
      
      strLen = s.length();
      
      a = 0;
      e = 0;
      eye = 0;
      o = 0;
      u = 0;
      
      for(i = 0; i <= (strLen -1); i++)
      {
          c = s.charAt(i);
          
          if((c == 'a')||(c == 'A'))
            a = a + 1;
          if((c == 'e')||(c == 'E'))
            e = e + 1;
          if((c == 'i')||(c == 'I'))
            eye = eye + 1;
          if((c == 'o')||(c == 'O'))
            o = o + 1;
          if((c == 'u')||(c == 'U'))
            u = u + 1;
      }     //end for
      
      System.out.println("Number of 'a' vowels: " + a);
      System.out.println("Number of 'e' vowels: " + e); 
      System.out.println("Number of 'i' vowels: " + eye); 
      System.out.println("Number of 'o' vowels: " + o); 
      System.out.println("Number of 'u' vowels: " + u);  
      
      /*************WHILE LOOP************************/
      
      System.out.println();
      System.out.println("get a string and count the vowels, while loop");
      System.out.println();
      
      a = 0;
      e = 0;
      eye = 0;
      o = 0;
      u = 0;
      i = 0;
      
      while(i <= (strLen -1))
      {
         c = s.charAt(i);
         
          if((c == 'a')||(c == 'A'))
            a = a + 1;
          if((c == 'e')||(c == 'E'))
            e = e + 1;
          if((c == 'i')||(c == 'I'))
            eye = eye + 1;
          if((c == 'o')||(c == 'O'))
            o = o + 1;
          if((c == 'u')||(c == 'U'))
            u = u + 1;  
            
          i = i + 1;
       }
       
      System.out.println("Number of 'a' vowels: " + a);
      System.out.println("Number of 'e' vowels: " + e); 
      System.out.println("Number of 'i' vowels: " + eye); 
      System.out.println("Number of 'o' vowels: " + o); 
      System.out.println("Number of 'u' vowels: " + u);  
      
   }     //end class
 }    //end main
