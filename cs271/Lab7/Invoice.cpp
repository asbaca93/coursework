/*********************************************************************************************
*
* Andrew Baca
* CS271 section MO2
*
* Invoice.cpp
* April 17, 2016
*
* Purpose: Invoice.cpp holds complete member functions for all functions in class invoice
*
**********************************************************************************************/

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdexcept>
#include "Invoice.h"
using namespace std;

Invoice::Invoice()				//constructor for invoice
{
  dateOrdered.setMonth(1);
  dateOrdered.setDay(1);
  dateOrdered.setYear(2016);
  partNumber = "";
  description = "";
  quantity = 1;
  price = 1.0f;
}

void Invoice::setDateOrdered(Date d)		//date mutator
{
  dateOrdered.setMonth(d.month);
  dateOrdered.setDay(d.day);
  dateOrdered.setYear(d.year);
}

void Invoice::setPartNumber(string pn)		//part number mutator
{
  partNumber = pn;
}

void Invoice::setDescription(string d)		//description mutator
{
  description = d;
}

void Invoice::setQuantity(int q)		//quantity mutator
{
  if(q > -1)
    quantity = q;
  else
    throw invalid_argument("quantity must be positive");
}

void Invoice::setPrice(float p)			//price mutator
{
  if(p > 0.0f)
    price = p;
  else
    throw invalid_argument("price must exceed 0");
}

Date Invoice::getDateOrdered()			//date accessor
{
  return dateOrdered;
}

string Invoice::getPartNumber()			//part number accessor
{
  return partNumber;
}

string Invoice::getDescription()		//description accessor
{
  return description;
}

int Invoice::getQuantity()			//quantity accessor
{
  return quantity;
}

float Invoice::getPrice()			//price accessor
{
  return price;
}

string Invoice::toString()			//string accessor
{
  
   stringstream convert;

   convert << endl
		<<"Invoice	 	" <<dateOrdered << endl

                << "part:	"<< partNumber << "	" <<description<< endl

                << "quantity: " << quantity << "	price: " <<price<<endl;
  return convert.str();
}


 
  


  
