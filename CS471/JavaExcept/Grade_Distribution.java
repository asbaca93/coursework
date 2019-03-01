/****************************************************************************************************************************************
* Andrew Baca
* September 28, 2018
* CS 471
* Grade_Distribution.java 
*
* Java Exception Handling
*
* Purpose: We are to re-write the Given ada program for Grade Distributions. Our task , in your JAVA version, is to change the second
* half of the first  loop so that all assignments to the counting Array "Freq()" are updated in the Exception portion of the code.  
* There should be no valid updates to "Freq()" anywhere else in the loop.
*
* **************************Retrieved from Chapter 14 of Concepts Of Programming Languages page 612 - 613**********************************
*
*****************************************************************************************************************************************/

import java.util.Scanner;



class NegativeInputException extends Exception{
	
	public NegativeInputException() {
		System.out.println("Negative Input. End of Data Input Reached");
	}
	
}

class Grade_Distribution{


	
	public static void main(String args[]){
		
		Scanner scnr = new Scanner(System.in);	

		int freq[] = new int[10];
		int newGrade = 0;
		int index, limit1, limit2;
	
		try{
			while(true){
				System.out.println("Please enter a grade: ");
				newGrade = scnr.nextInt();
				if(newGrade < 0)
					throw new NegativeInputException();
				index = newGrade / 10;
				try{
					freq[index]++;
				}
				catch(ArrayIndexOutOfBoundsException e) {
					if(newGrade == 100)
						freq[9]++;
					else
						System.out.println("Error - New Grade: " + newGrade + " is out of range");
				}
			}
		}
		catch(NegativeInputException e) {
			System.out.println("\n\tLimits \t Frequency\n");
			for(index = 0; index < 10; index++){
				limit1 = 10 * index;
				limit2 = limit1 + 9;
				if(index == 9)
					limit2 = 100;
				System.out.println("\t" + limit1 + " \t" + limit2 + "       " + freq[index]);
			} 
		}

	}
}
