all:EmployeeTest

EmployeeTest: Employee.o EmployeeTest.o
	g++ -o EmployeeTest Employee.o EmployeeTest.o
    
Employee.o : Employee.h Employee.cpp
	g++ -c Employee.cpp
    
EmployeeTest.o: Employee.h EmployeeTest.cpp
	g++ EmployeeTest.cpp
