/*****************************************************************************************
*
* Andrew Baca
* CS271 Section MO2
*
* Orders.cpp
* April 17, 2016
*
* Purpose: this program will test all functions for class Invoice
*
******************************************************************************************/

#include <iostream>
#include <stdexcept>
#include <string>
#include "Invoice.h"
using namespace std;

int main()
{
  //declare all variables and objects
   Date today(4,1,2016);
   Date tomorrow(today);
   Date xmas(12,25,2015);
   Invoice muffler;
   Invoice headlight;
   Invoice licensePlate;
   string outForPart= "";
   
   //test new Date functions
   cout<<endl;
   cout<<"*********START PROGRAM***********"<<endl;
   cout<<endl;
   cout<<"*********TEST DATE COPY AND NEXTDAY()*******"<<endl;
   cout<<"TODAY IS: "<<today<<endl;
   //test nextday()
   tomorrow.nextDay();
   
   cout<<"TOMORROW IS: "<<tomorrow<<endl;
   
   cout<<endl;
   cout<<"*******TEST default constructor using toString*******"<<endl;
   
   outForPart = licensePlate.toString();
   cout<<outForPart<<endl;
   
   cout<<endl;
   cout<<"*******TEST accessors with Invoice object headlight*************"<<endl;
   //test mutators
   headlight.setDateOrdered(xmas);
   headlight.setPartNumber("Q37R34GGG662");
   headlight.setDescription("Headlight");
   headlight.setQuantity(250);
   headlight.setPrice(70.0f);
   //test accessors
   cout<<"Date: "<<headlight.getDateOrdered()<<endl;
   cout<<"Part Number: "<<headlight.getPartNumber()<<endl;
   cout<<"Description: "<<headlight.getDescription()<<endl;
   cout<<"Quantity: "<<headlight.getQuantity()<<endl;
   cout<<"Price: "<<headlight.getPrice()<<endl;
   //test toString
   cout<<endl;
   cout<<"*******TEST toString with Invoice object Muffler*************"<<endl;
   
   muffler.setDateOrdered(today);
   muffler.setPartNumber("EE0c3457771");
   muffler.setDescription("Muffler");
   muffler.setQuantity(100);
   muffler.setPrice(50.0f);
   
   outForPart = muffler.toString();
   
   cout<<outForPart<<endl;
   cout<<endl;
   cout<<"**********TEST use try...catch**********"<<endl;
   try
    {
      Invoice seat;
      seat.setDateOrdered(xmas);
      seat.setPartNumber("Q37R34GGG662");
      seat.setDescription("Headlight");
      seat.setQuantity(-1);
      seat.setPrice(70.0f);
    }
    catch(invalid_argument &e)
    {
      cout<<"\n\nException while initializing the seat invoice: "<< e.what()<<endl;
    }
}