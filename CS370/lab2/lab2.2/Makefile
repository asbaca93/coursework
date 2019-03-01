all:	lab2docalc.l	lab2docalc.y	lex.yy.c	y.tab.c	y.tab.h
	yacc -d lab2docalc.y
	lex lab2docalc.l
	gcc y.tab.c -o lab2docalc
