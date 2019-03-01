/**********************************************************
*
* coffee.c
* Andrew Baca
* Febuary 4, 2016
* 
* CS 271 Section MO2
* Lab 2
*
* Purpose: this program gets user input for the sales of coffee
*          each month over a certain length of time and shows the 
*          maximun and minimum coffee sales for that time
*
*************************************************************/

#include <stdio.h>

int main(void)
{
   
   int month = 0;                                   //declare all variables
   int year = 0;
   double sale_amount = 0.0;
   int max_month = 0;
   int max_year = 0;
   double max_sales = 0.0;
   int min_month = 0;
   int min_year = 0;
   double min_sales = 0.0;
   int count = 0;
   
   printf("\n\n********coffee.c*********\n\n");       //informative prompt
   printf("This program gets user input for");
   printf(" the sales at a coffee shop each");
   printf(" month over a period of time and ");
   printf("outputs the month of minimum sales");
   printf(" and the month of maximum sales.\n\n");
   
   printf("Enter 2 digits corresponding to");         //prompt user to enter month the first sales were tracked
   printf(" the month the coffee sales took place:");
   scanf("%d", &month);  //scan for user input for month
   
   count = 0;
   
   while(month != -1)
   {
      printf("\n\nenter 4 digits corresponding to the");    //get user input for year
      printf(" year sales took place: ");
      scanf("%d", &year);                                   //scan input for year
      
      printf("\n\nEnter the amount of sales this month: $");   //prompt user to enter sale amount for month
      scanf("%lf", &sale_amount);                           //scan for sale amount
      
      if(count == 0)                                   //if first entry, set mins and max both equal to first values
      {
         max_month = month;
         max_year = year;
         max_sales = sale_amount;
         min_month = max_month;
         min_year = max_year;
         min_sales = max_sales;
       }    //end if

       if(min_sales > sale_amount)                    //if sale amount is lower than min values, store in min variables
       {
         min_month = month;
         min_year = year;
         min_sales = sale_amount;
       }    //end if
       
       if(max_sales < sale_amount)                    //if sale_amount exceeds max sales, store values in max variables
       {
         max_month = month;
         max_year = year;
         max_sales = sale_amount;
       }    //end if
       
       
       count = count + 1;                        //increment counter
       
       printf("Enter 2 digits corresponding to");         //prompt user to enter month the first sales were tracked
       printf(" the month the coffee sales took place:");
       scanf("%d", &month);                               //scan for user input for month       
   }        //end while
   
   printf("\n\n");
   printf("Max sales took place %d/%d", max_month, max_year);        //print the max sales info
   printf(" and the amount sold was $%f", max_sales);
   printf("\n\n");
   
   printf("Minimum sales took place %d/%d", min_month, min_year);    //print the minimum sales info
   printf(" and the amount sold was $%f", min_sales);
   printf("\n\n");
  
}      //end main
   