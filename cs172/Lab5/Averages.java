/********************************************************************************
*
*Andrew Baca
*CS172 MO2
*
*Averages.java
*March 8, 2016
*
*Purpose: this program gets user input for three exam scores per student,
*         and averages those scores
*
*********************************************************************************/
import java.util.Scanner;                    //import scanner

public class Averages{
   public static void main(String args[]){
   
   String name;                                 //initialize variables
   int exam;
   int allExams = 0;
   float average;
   int hold = 0;
   int numExams;
   
   
   Scanner scnr = new Scanner(System.in); //declare scanner
   Scanner scan = new Scanner(System.in); //declare scanner
   
   System.out.println("Enter the number of exams: ");
   numExams = scnr.nextInt();
  
   System.out.print("Name of Student: ");
   name = scan.nextLine();                //scan for name
   
   while(hold != -1)                  //check for next variable
   {
      while(hold < numExams)
      {
         exam = scnr.nextInt();           //scan for three test scores
         hold = hold + 1;
         allExams = allExams + exam; 
      }
      average = (float)allExams / (float)numExams;               //calculate and display average
      System.out.print(name + "'s ");
      System.out.println("Average : " + average);
      hold = 0;
      allExams = 0;
      System.out.print("Name of Student: ");
      name = scan.nextLine();                //scan for name
   }
}
}