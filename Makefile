.PHONY: clean

all:
	lex -o lex.yy.c chipa.l
	bison -b y -v -dy chipa.y
	gcc -o chipa.out lex.yy.c y.tab.c LinkedList.c -ly

clean:
	rm -f *.out *.o lex.yy.c y.tab.c y.tab.h y.output LinkedList.h.gch ejecutable salida.c

test:
	./chipa.out < test.chipa > salida.c
	gcc -w salida.c LinkedList.c LinkedList.h -o ejecutable

cleanTest:
	rm -f ejecutable salida.c 