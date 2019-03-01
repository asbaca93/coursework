all:Lab4

Lab4: arrayfunctions.o Lab4.o
	gcc -lm arrayfunctions.o Lab4.o -o Lab4

Lab4.o: Lab4.c arrayfunctions.h
	gcc -c Lab4.c
	
lab3functions.o: arrayfunctions.c arrayfunctions.h
	gcc -c arrayfunctions.c
	
clean:
	rm -rf *.o