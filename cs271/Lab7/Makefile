all:DateTest

DateTest: Date.o Invoice.o Orders.o
	g++ -o myexec Date.o Invoice.o Orders.o
    
Date.o : Date.h Date.cpp
	g++ -c Date.cpp
    
Invoice.o: Invoice.h Invoice.cpp
	g++ -c Invoice.cpp
	
Orders.o: Orders.cpp
	g++ -c Orders.cpp