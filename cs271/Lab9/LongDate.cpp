/*********************************************************************************************
*
* Andrew Baca
* CS271 section MO2
*
* LongDate.cpp
* May 4, 2016
*
* Purpose: LongDate.cpp holds complete member functions for all functions in class LongDate
*
**********************************************************************************************/
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "LongDate.h"
using namespace std;

//constructor
LongDate::LongDate(int m, int d, int y)			//open member function longdate
{
   setDate(m,d,y);
   string dOfWeek[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday", "Friday","Saturday"};		//array for days in week
   int monthCode[12] = {0, 3, 2, 5, 0, 3 , 5, 1, 4, 6, 2, 4};							//month function (wikipedia)	
   int hold;
   y -= m<3;
   hold = (y + y/4 - y/100 + y/400 + monthCode[m - 1] + d) % 7;
   
   setDayOfWeek(dOfWeek[hold]);				//setDayofWeek

}

void LongDate::setDayOfWeek(string s)			//mutator
{
  dayOfTheWeek = s;
}

string LongDate::getDayOfWeek()				//accessor
{
  return dayOfTheWeek;
}

LongDate &LongDate::operator++()
{
  int dayInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int dayInLeapMonth[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  string dOfWeek[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday", "Friday","Saturday"};
  int m,d,y;
  m = getMonth();
  d = getDay();
  y = getYear();
  
  d = d + 1;
  if((y % 100 == 0 && y % 400 == 0)||(y % 4 == 0 && y % 100 != 0))
  {
    if(d> dayInLeapMonth[m-1]){
      d = 1;
      m = m + 1;
    }
    if(m > 12){
      m = 1;
      y = y + 1;
    }
    
  }
  else
  {
    if(d> dayInMonth[m-1]){
      d= 1;
      m= m+ 1;
    }
    if(m>  12){
      m = 1;
      y = y + 1;
    }
  }
     
  int monthCode[12] = {0, 3, 2, 5, 0, 3 , 5, 1, 4, 6, 2, 4};							//month function (wikipedia)	
  int hold;
   
  y -= m<3;
  hold = (y + y/4 - y/100 + y/400 + monthCode[m - 1] + d) % 7;
  
  setDayOfWeek(dOfWeek[hold]);	
  setMonth(m);
  setDay(d);
  setYear(y);
}

LongDate &LongDate::operator--()
{
  int dayInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int dayInLeapMonth[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  string dOfWeek[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday", "Friday","Saturday"};
  int m,d,y;
  m = getMonth();
  d = getDay();
  y = getYear();
  
  d = d - 1;
  if((y % 100 == 0 && y % 400 == 0)||(y % 4 == 0 && y % 100 != 0))
  {
    if(d< 1){
      m = m - 1;
      d= dayInLeapMonth[m-1];
    }
    if(m < 1){
      m = 12;
      y = y - 1;
    }
 
  }
  else
  {
    if(d < 1){
      m= m- 1;
      d = dayInMonth[m - 1];
    }
    if(m< 1){
      m = 12;
      y = y - 1;
    }
   
  }
     
  int monthCode[12] = {0, 3, 2, 5, 0, 3 , 5, 1, 4, 6, 2, 4};							//month function (wikipedia)	
  int hold;
   
  y -= m<3;
  hold = (y + y/4 - y/100 + y/400 + monthCode[m - 1] + d) % 7;
  
  setDayOfWeek(dOfWeek[hold]);	
  setMonth(m);
  setDay(d);
  setYear(y);
}
