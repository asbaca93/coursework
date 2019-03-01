/***********************************************
 *
 * Andrew Baca
 * April 5, 2016
 * 
 * CS 271 MO2
 * Employee.h
 * 
 * purpose: header file for class Employee
 * 
 * ***************************************************/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
public:
  Employee(string, string, float);
  void SetFirstName(string);
  string GetFirstName();
  void SetLastName(string);
  string GetLastName();
  void SetMonthlySalary(float);
  float GetMonthlySalary();
private:
  string first;
  string last;
  float salary;
};
#endif