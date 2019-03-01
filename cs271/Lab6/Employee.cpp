/***********************************************
 *
 * Andrew Baca
 * April 5, 2016
 * 
 * CS 271 MO2
 * Employee.cpp
 * 
 * purpose: user defined functions for class Employee
 * 
 * ***************************************************/

#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(string firstName, string lastName, float EmpSalary)
{
  SetFirstName(firstName);
  SetLastName(lastName);
  SetMonthlySalary(EmpSalary);
}

void Employee::SetFirstName(string firstName)
{
  first = firstName;
}

string Employee::GetFirstName()
{
  return first;
}

void Employee::SetLastName(string lastName)
{
  last = lastName;
}

string Employee::GetLastName()
{
  return last;
}

void Employee::SetMonthlySalary(float EmpSalary)
{
  if(EmpSalary >= 0.0f)
    salary = EmpSalary;
  else
    salary = 0.0f;
}

float Employee::GetMonthlySalary()
{
  return salary;
}