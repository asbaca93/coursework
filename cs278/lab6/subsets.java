/**********************************************************************************************
*
* Andrew Baca
* CS 278
*
* Lab # 6
* 
* October 3, 2017
*
* Purpose: This program prompts the user to enter to fill an array of interger elements,
*           as many elements as they chose, and outputs the subsets whose elements equal
*           N, chosen by the user. 
*
**********************************************************************************************/
import java.util.Scanner;

public class subsets{
   public static void main(String args[]){
      Scanner scnr = new Scanner(System.in);                //initialize new scanner for user input
      int N;                                                //set target to sum N
      boolean[] mask;                                           //make mask array for subsets
      int[] elements;                                       //arrsy to hold elements of set
      int count;
      
      int S;
      
      System.out.print("Please enter the size of S: ");     //get size of S from user
      S = scnr.nextInt();
      
      elements = new int[S];                                //set array to size S
      mask = new boolean[S];
      
      for(int i = 0; i < S; i++)
         mask[i] = false;
      
      System.out.print("Please enter the elements of S: ");    //get the elements of S from user
      for(int i = 0; i < S; i++)
         elements[i] = scnr.nextInt();
      
      System.out.print("Please enter the number N: ");       //get N from the user
      N = scnr.nextInt();
      
      System.out.println("Subsets with sum " + N + ": ");

      for(int i = 0; i < S * S; i++)
      {
         count = 0;
         for(int k = 0; k < S; k++)
         {
            if(mask[k] == true)
               count = count + elements[k];
         }
         if(count == N)
         {
            System.out.print("{ ");
            for(int m = 0; m < S; m++)
               if(mask[m] == true)
                  System.out.print(elements[m] + " ");
            System.out.println("}");
         }
         count = 0;
         next(mask, S);
       
      }
      
      
      
   }     //end main
   
   public static void printv(boolean[] mask, int n)
   {
      System.out.print("{ ");
      for(int i = 0; i < n; i++)
         System.out.print(mask[i] + " ");
      System.out.println("}");
   }
   
   public static void next(boolean[] mask, int n)
   {
      int i;
      
      for(i = 0; i < n && mask[i] == true; i++)
         mask[i] = false;
         
      if(i < n)
         mask[i] = true;
   }
         
   
}     //end class
      