/*****************************************************************
*
* Andrew Baca
* CS 278
*
* TruthTable.java
*
* Purpose: This program prints out all the possible truth tables
*          that the three values can produce
*
*****************************************************************/

public class TruthTable{
   public static void main(String args[]){
   
        int i;
        int count;
        int flag;
        
        char[] valueOne = {'T','T','T','T','F','F','F','F'};         //strings for the three columns of values
        char[] valueTwo = {'T','T','F','F','T','T','F','F'};
        char[] valueThree = {'T','F','T','T','F','T','F','T'};
        char[] valueFour = {'F','F','F','F','F','F','F','F'};
        
        System.out.println("****TruthTable # " + 1 + "***");
        System.out.println("P | Q | R | proposition 1");
        System.out.println("_______________________");
        
        for(i = 0; i < 8; i++)                                       //for loop prints table values
        {
            System.out.println(valueOne[i] + " | "
               + valueTwo[i] + " | " + valueThree[i]
               + " | " + valueFour[i]);
        }                                                            //end for loop
        
        System.out.println("\n\n");
        
        for(flag = 1; flag < 256; flag++)                            //for loop to fill table 255 times
        {
            count = flag;
            if(count >= 128)                                         //element 0
            {
               valueFour[0] = 'T';
               count = count - 128;
            }
            if(count >= 64)                                          //element 1
            {
               valueFour[1] = 'T';
               count = count - 64;
            }
            if(count >= 32)                                          //element 2
            {
               valueFour[2] = 'T';
               count = count - 32;
            }
            if(count >= 16)                                          //element 3
            {
               valueFour[3] = 'T';
               count = count - 16;
            }
            if(count >= 8)                                           //element 4
            {
               valueFour[4] = 'T';
               count = count - 8;
            }
            if(count >= 4)                                           //element 5
            {
               valueFour[5] = 'T';
               count = count - 4;
            }
            if(count >= 2)                                           //element 6
            {
               valueFour[6] = 'T';
               count = count - 2;
            }
            if(count == 1)                                           //element 7
            {
               valueFour[7] = 'T';
            }
            System.out.println("****TruthTable # " + (flag + 1) + "***");
            System.out.println("P | Q | R | proposition " + (flag + 1));
            System.out.println("_______________________");
        
            for(i = 0; i < 8; i++)                                       //for loop prints table values
            {
                System.out.println(valueOne[i] + " | "
                   + valueTwo[i] + " | " + valueThree[i]
                   + " | " + valueFour[i]);
            }                                                            //end for loop
        
            System.out.println("\n\n");
            
            for(i = 0; i < 8; i++)
               valueFour[i] = 'F';
        }                                                            //end for loop        
   }                                                                 //end main
}                                                                    //end class
