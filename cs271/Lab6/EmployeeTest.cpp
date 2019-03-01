/***********************************************
 *
 * Andrew Baca
 * April 5, 2016
 * 
 * CS 271 MO2
 * EmployeeTest.cpp
 * 
 * purpose: main function to test class Employee
 * 
 * ***************************************************/

#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

int main()
{
  string fName = "Andrew";				//declaration of variables and class
  string lName = "Baca";
  float sal = 1000;
  Employee worker1(fName, lName, sal);
  float yearSalary;
  
  yearSalary = worker1.GetMonthlySalary();
  yearSalary = yearSalary * 12.0f;
  
  cout<<endl;
  cout<<"The employee is " << worker1.GetFirstName()<< " " <<worker1.GetLastName()<<endl;
  cout<<"His yearly salary is: " << yearSalary << "."<<endl;
  cout<<endl;
  
  yearSalary = (worker1.GetMonthlySalary() + worker1.GetMonthlySalary() * 0.10f) * 12.0f;
  
  cout<<endl;
  cout<<"The employee is " << worker1.GetFirstName()<< " " <<worker1.GetLastName()<<endl;
  cout<<"His yearly salary is after raise is: " << yearSalary << "."<<endl;
  cout<<endl;
}
