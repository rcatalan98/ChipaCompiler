.PHONY: clean

all:
	lex -o lex.yy.c chipa.l
	bison -b y -v -dy chipa.y
	gcc -o chipa.out lex.yy.c y.tab.c LinkedList.c -g -fsanitize=address -ly

clean:
	rm -f *.out *.o lex.yy.c y.tab.c y.tab.h y.output LinkedList.h.gch ejecutable salida.c ejemplo1 ejemplo1.c ejemplo2 ejemplo2.c ejemplo3 ejemplo3.c ejemplo4 ejemplo4.c ejemplo5 ejemplo5.c

test:
	./chipa.out < ./ejemplos/ejemplo1.chipa > ejemplo1.c
	gcc -w -fsanitize=address -g salida.c LinkedList.c LinkedList.h -o ejemplo1
	./chipa.out < ./ejemplos/ejemplo2.chipa > ejemplo1.c
	gcc -w -fsanitize=address -g salida.c LinkedList.c LinkedList.h -o ejemplo2
	./chipa.out < ./ejemplos/ejemplo3.chipa > ejemplo1.c
	gcc -w -fsanitize=address -g salida.c LinkedList.c LinkedList.h -o ejemplo3
	./chipa.out < ./ejemplos/ejemplo4.chipa > ejemplo4.c
	gcc -w -fsanitize=address -g salida.c LinkedList.c LinkedList.h -o ejemplo4
	./chipa.out < ./ejemplos/ejemplo5.chipa > ejemplo1.c
	gcc -w -fsanitize=address -g salida.c LinkedList.c LinkedList.h -o ejemplo5
cleanTest:
	rm -f ejemplo1 ejemplo1.c ejemplo2 ejemplo2.c ejemplo3 ejemplo3.c ejemplo4 ejemplo4.c ejemplo5 ejemplo5.c