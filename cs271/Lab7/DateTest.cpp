/*****************************************************************************************
*
* Andrew Baca
* CS271 Section MO2
*
* DateTest.cpp
* April 17, 2016
*
* Purpose: this program will test all functions for class Date
*
******************************************************************************************/

#include <iostream>
#include <stdexcept>
#include <string>
#include "Date.h"
using namespace std;

int main()
{
  Date defaultDay;
  Date monthSpecified(4);
  Date daySpecified(11,10);
  Date bday(4,20,1993);
  Date copyDay(bday);
  
  /* All Default parameter test */
  cout<<"BEGIN TESTS"<<endl;
  cout<<"TEST ALL DEFAULT PARAMETERS:"<<endl;
  cout<<endl;
  
  cout<<"Default test date:  "<<defaultDay.getMonth()<<"/"<<defaultDay.getDay()<<"/"<<
    defaultDay.getYear()<<endl;
  
  /* 2 default parameters test */
  cout<<endl;
  cout<<"TEST WITH 2 DEFAULT PARAMETERS:"<<endl;
  cout<<endl;
  
  cout<<"test date:  "<<monthSpecified.getMonth()<<"/"<<monthSpecified.getDay()<<"/"<<
    monthSpecified.getYear()<<endl;
    
  /* 1 default parameters test */
  cout<<endl;
  cout<<"TEST WITH 1 DEFAULT PARAMETER:"<<endl;
  cout<<endl;
  
  cout<<"test date:  "<<daySpecified.getMonth()<<"/"<<daySpecified.getDay()<<"/"<<
    daySpecified.getYear()<<endl;
    
  /* all parameters chosen by user*/
  cout<<endl;
  cout<<"NO DEFAULT PARAMETERS:"<<endl;
  cout<<endl;
  
  cout<<"date:  "<<bday.getMonth()<<"/"<<bday.getDay()<<"/"<<
    bday.getYear()<<endl;
    
  /* test Mutators */
  
  bday.setMonth(12);
  bday.setDay(31);
  bday.setYear(1993);
  
  cout<<endl;
  cout<<"CHANGE DATES INDIVISUALLY WIH MUTATORS:"<<endl;
  cout<<endl;
  
  cout<<"date:  "<<bday.getMonth()<<"/"<<bday.getDay()<<"/"<<
    bday.getYear()<<endl;
    
  cout<<endl;
  cout<<"Test Next day: ";
  
  bday.nextDay();
    
  cout<<bday<<endl;
  cout<<copyDay<<endl;
    
  
    try
    {
      Date future(13,1,2999);
    }
    catch(invalid_argument &e)
    {
      cout<<"\n\nException while initializing the future date: "<< e.what()<<endl;
    }
}