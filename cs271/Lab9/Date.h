/*****************************************************************************************************
*
* Andrew Baca
* CS 271 section MO2
* April 17, 2016
*
* Date.h
*
* Purpose: this is the header file for class Date
*
******************************************************************************************************/

#ifndef DATE_H
#define DATE_H

#include <string>
#include <iostream>
using namespace std;

class Date
{
    friend class Invoice;
    friend ostream &operator<<(ostream &, const Date & );
  public:
      Date(int = 1, int = 1, int = 2016);		//default constructor, Date
      Date(const Date &);				//copy constructor
      /*******SET FUNCTIONS*********/
      void setDate(int, int, int);	//set month, day, year
      void setMonth(int);		//set month
      void setDay(int);			//set day
      void setYear(int);		//set year
      
      /******GET FUNCTIONS**********/
      int getMonth();			//return Month
      int getDay();			//return Day
      int getYear();			//return Year  
      
      /****** Other Functions ******/
      void nextDay();
  private:
     int month;				//between 1 and 12
     int day;				//depends on month(31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31)
     int year;				//greater than 0
};

#endif
  