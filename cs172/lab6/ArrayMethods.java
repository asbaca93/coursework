/*************************************************************************
*
*Andrew Baca
*March 25, 2014
*
* CS172 MO 2
* ArrayMehtods.java
*
* Purpose: this program will implement four array methods to a java program
*          , each method manipulating arrays.
*
************************************************************************/
import java.util.Scanner;
import java.lang.String;

public class ArrayMethods{
   public static void main(String[] args){
      int[] array = {1,2,3,4,5,6,7,8,9,10,11};
      char[] chArray = {'a','b','c','d','e','f','g'};
      int i = 0;
      int last;
      String all;
      
      last = lastNumber(array);
      System.out.println("the last number is : " + last);
      
      all = join(chArray);
      System.out.println("the concatenated string is : " + all); 
      
      reverseArray(array);
      
      for(i = 0; i < array.length; i++)
      {
         System.out.println(array[i]);
      }
      
      
      
   }

   public static int lastNumber(int[] a)
   {
      int m = a.length;
      int n = a[m-1];
   
      return n;
   }
   
   public static String join(char[] c)
   {
      String s;
      String z = "";
      int len = c.length;
      
      for(int i = 0; i < len; i++)
      {
         s = String.valueOf(c[i]);
         z = z.concat(s);
      }
      return z;
   }
   
   public static void reverseArray(int[] a)
   {
      int m = a.length;
      int i,j;
      int temp;
      
      j = m - 1;
      
      for(i = 0; i <=((m/2)-1); i++)
      {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
         j = j-1;
      }
    }
      
}