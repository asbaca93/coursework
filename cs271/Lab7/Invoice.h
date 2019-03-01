/*****************************************************************************************************
*
* Andrew Baca
* CS 271 section MO2
* April 17, 2016
*
* Invoice.h
*
* Purpose: this is the header file for class Invoice
*
******************************************************************************************************/

#ifndef INVOICE_H
#define INVOICE_H

#include <string>
#include <iostream>
#include "Date.h"
using namespace std;

class Invoice
{
    friend class Date;
  public:
      Invoice();
      void setDateOrdered(Date);
      void setPartNumber(string);
      void setDescription(string);
      void setQuantity(int);
      void setPrice(float);
      Date getDateOrdered();
      string getPartNumber();
      string getDescription();
      int getQuantity();
      float getPrice();
      string toString();
      
  private:
      Date dateOrdered;			//dete class
      string partNumber;		//strings
      string description;
      int quantity;			//positive num
      float price;			//grater than 0
};

#endif