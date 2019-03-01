/*********************************************************************************************
*
* Andrew Baca
* CS271 section MO2
*
* LongDate.h
* May 4, 2016
*
* Purpose: LongDate.h holds all the member class function prototypes for class LongDate.h
*
**********************************************************************************************/

#ifndef LONGDATE_H
#define LONGDATE_H

#include <string>
#include "Date.h"
using namespace std;

class LongDate : public Date
{
  public:
    LongDate(int, int, int);					//constructor
    
    void setDayOfWeek(string s);				//set day of the week
    string getDayOfWeek();					//return day of the week
    
    LongDate &operator++();					//increment the date
    LongDate &operator--();					//decrement the date
  private:
    string dayOfTheWeek;
};		//end class LongDate

#endif
    