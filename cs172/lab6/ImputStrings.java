/*************************************************************************
*
*Andrew Baca
*March 25, 2014
*
* CS172 MO 2
* ImputStrings.java
*
* Purpose: this program will fill a 25 element string array until
*          it is full or the user requests to quit
*
************************************************************************/
import java.util.Scanner;
import java.lang.String;

public class ImputStrings{
   public static void main(String[] args){
   
      Scanner scnr = new Scanner(System.in);
      final int NUM_ELEMENTS = 25;
      String[] strArray = new String[NUM_ELEMENTS];
      String check;
      String loopStop = "quit";
      int i = 0;
      int flag = 0;
      int k,l;
      int len;
      char c;
      
      check = scnr.nextLine();
      
      if(check.equals("quit"))
         flag = 1;
      
      
      while((flag == 0)&&(i < NUM_ELEMENTS))
      {
         strArray[i] = check;
         check = scnr.nextLine();
         i = i+1;
         if(check.equals("quit"))
            flag = 1;      
      }
      
      k = i;
      
         
      for(i = 0;i < k; i++)
      {
         check = strArray[i];
         l = check.length();
         l = l - 1;
         while(l > -1)
         {
            System.out.print(check.charAt(l));
            l = l-1;
         }
         System.out.println();
      }
      
   }
}