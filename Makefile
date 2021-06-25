.PHONY: clean

all:
	yacc -d chipa.y
	lex chipa.l
	gcc -o chipa.out lex.yy.c y.tab.c LinkedList.c -ly

clean:
	rm -f *.out *.o lex.yy.c y.tab.c y.tab.h

