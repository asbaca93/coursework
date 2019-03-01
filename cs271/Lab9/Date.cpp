/*********************************************************************************************
*
* Andrew Baca
* CS271 section MO2
*
* Date.cpp
* April 17, 2016
*
* Purpose: Date.cpp holds complete member functions for all functions in class Date
*
**********************************************************************************************/

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Date.h"
using namespace std;

ostream &operator<<(ostream &output, const Date &d)
{
  output<<setfill('0')<<setw(2)<<d.month<<"/"<<
    setfill('0')<<setw(2)<<d.day<<"/"<<setfill('0')<<setw(4)<<d.year;
  return output;
}

/* Date constuctor initializes data members to default values */
Date::Date(int month, int day, int year)
{
  setDate(month, day, year);		//validate and set date
}	//end Date constructor

Date::Date(const Date &d)
  :month(d.month),
   day(d.day),
   year(d.year)
  {
}

/* Set new date, defined by the user */
void Date::setDate(int m, int d, int y)
{ 
  setMonth(m);		//set month
  setDay(d);		//set day
  setYear(y);		//set year
}	//end function setDate

/* Set month value */
void Date::setMonth(int m)
{
  if(m > 0 && m < 13)
      month = m;
  else
    throw invalid_argument("Month must be between 1 and 12");
}	//end function setMonth

/* Set day value */
void Date::setDay(int d)
{
  int dayInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int dayInLeapMonth[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if((year % 100 == 0 && year % 400 == 0)||(year % 4 == 0 && year % 100 != 0))
  {
     if(d > 0 && d <= dayInLeapMonth[month-1])
      day = d;
     else
      throw invalid_argument("this day exceeds number of days in given month");
  }
  else
  {
     if(d > 0 && d <= dayInMonth[month-1])
      day = d;
     else
      throw invalid_argument("this day exceeds number of days in given month");
  }

}	//end function setDay

/* Set year value */
void Date::setYear(int y)
{
  if(y > 0)
    year = y;
  else
    throw invalid_argument("year must be greater than 0");
}	//end function setYear

/* return month value */
int Date::getMonth()
{
  return month;
}	//end function getMonth

/* return day value */
int Date::getDay()
{
  return day;
}	//end function getDay

/* return year value */
int Date::getYear()
{ 
  return year;
}	//end function getYear

void Date::nextDay()
{
  int dayInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int dayInLeapMonth[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  
  day = day + 1;
  if((year % 100 == 0 && year % 400 == 0)||(year % 4 == 0 && year % 100 != 0))
  {
    if(day> dayInLeapMonth[month-1]){
      day = 1;
      month = month + 1;
    }
    if(month > 12){
      month = 1;
      year = year + 1;
    }
    
  }
  else
  {
    if(day> dayInMonth[month-1]){
      day = 1;
      month = month + 1;
    }
    if(month > 12){
      month = 1;
      year = year + 1;
    }
  }
    
}