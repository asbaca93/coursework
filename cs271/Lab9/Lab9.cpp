/*********************************************************************************************
*
* Andrew Baca
* CS271 section MO2
*
* Lab9.cpp
* May 4, 2016
*
* Purpose: Lab9.cpp is the main function to test the longDate class and its menber functions
*
**********************************************************************************************/

#include <iostream>
#include <stdexcept>
#include <string>
#include "LongDate.h"
using namespace std;

int main()
{
  LongDate today(5,5,2016);					//test constructor
  LongDate LeapTest(2,28,1600);					//date to test leap year
  LongDate nonLeap(2,28,2015);
  
  
  cout<<"testing the accessor, today is ";			//test accessor
  cout<< today.getDayOfWeek()<<" "<<today<<endl;
  cout<<endl;
  
  cout<<"testing the mutator for day of week, ";		//test mutator
  today.setDayOfWeek("Saturday");
  cout<< today.getDayOfWeek()<<" should be in two days."<<endl;
  
  //test leap year additions to Date.cpp code
  cout<< "Leap Year test: "<<endl;				//test leapyear
  cout<< "Normally, Febuary has 28 days, but in year ";
  cout<< LeapTest.getYear()<< ", the day after " << LeapTest;
  cout<<" would be ";
  LeapTest.nextDay();
  cout<<LeapTest<<"."<<endl<<endl;
  
  cout<< "NON-Leap Year test: "<<endl;				//test not leapyear
  cout<< "Normally, Febuary has 28 days, but in year ";
  cout<< nonLeap.getYear()<< ", the day after " << nonLeap;
  cout<<" would be ";
  nonLeap.nextDay();
  cout<<nonLeap<<", because this is not a leap year."<<endl;
  
  ++today;									//test increment operator
  cout<<endl<<"tomorrow will be: "<<today.getDayOfWeek()<<" "<<today<<endl<<endl;
  
  --today;									//test decrement operator
  --today;
  cout<<"yesterday was: " <<today.getDayOfWeek()<<" " <<today<<endl<<endl;
  
  --today;
  --today;
  --today;
  --today;
  --today;
  --today;
  cout<<"this time last week was: "<<today.getDayOfWeek()<<" "<<today<<endl<<endl;
  
  
}