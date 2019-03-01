/*********************************************
* Andrew Baca
* CS372
* HW 6
* Purpose: red black tree check from a binary
*          binary tree
*
* 4/2/2018
**********************************************/
import java.util.*;
import java.io.*;
import java.lang.*;

public class rbCheck{
    public static void main(String args[]){
        int[] valueArray = new int[100];
        char[] rbArray = new char[100];
     
        int index = 0;
        int count = 0;
        
        Boolean flag = false;
        String fileName = "";
        String s = "";
        
        Scanner scnr = new Scanner(System.in);
        
        System.out.println("Enter FileName: ");
        fileName = scnr.nextLine();
        System.out.println(fileName);
        File infile = new File(fileName);
        infile.useDelimeter("[,()]");
        
        while(infile.hasNext())
        {
                index = infile.nextInt();
                valueArray[index] = infile.nextInt();
                rbArray[index] = infile.next();
        }
        
        //s = inputToArray(infile, s);
        
        //System.out.println(s);
        

        
        for(int i = 0; i < 100; i++)
        {
            System.out.print(valueArray[i] + " ");
        }
    }
    
   public static String inputToArray(File F, String s)
   {
        
      try {
        Scanner scnr = new Scanner(F);
         while(scnr.hasNextLine()) {
            s = scnr.nextLine();
            }
        scnr.close();
      } 
      catch (FileNotFoundException e) {
        e.printStackTrace();
      }
      return s;
   }  
}