all:DateTest

DateTest: Date.o LongDate.o Lab9.o
	g++ -o myexec Date.o LongDate.o Lab9.o
    
Date.o : Date.h Date.cpp
	g++ -c Date.cpp
   
LongDate.o: LongDate.o LongDate.cpp
	g++ -c LongDate.cpp
	
Lab9.o: Lab9.o Lab9.cpp
	g++ -c Lab9.cpp
