.PHONY: clean

all:
	lex -o lex.yy.c chipa.l
	bison -b y -v -dy chipa.y
	gcc -o chipa.out lex.yy.c y.tab.c LinkedList.c -g -fsanitize=address -ly

clean:
	rm -f *.out *.o lex.yy.c y.tab.c y.tab.h y.output LinkedList.h.gch ejecutable salida.c

test:
	./chipa.out < ejemplo1.chipa > ejemplo1.c
	gcc -w -fsanitize=address -g salida.c LinkedList.c LinkedList.h -o ejemplo1
	./chipa.out < ejemplo2.chipa > ejemplo1.c
	gcc -w -fsanitize=address -g salida.c LinkedList.c LinkedList.h -o ejemplo2
	./chipa.out < ejemplo3.chipa > ejemplo1.c
	gcc -w -fsanitize=address -g salida.c LinkedList.c LinkedList.h -o ejemplo3
	./chipa.out < ejemplo1.chipa > ejemplo4.c
	gcc -w -fsanitize=address -g salida.c LinkedList.c LinkedList.h -o ejemplo4
	./chipa.out < ejemplo5.chipa > ejemplo1.c
	gcc -w -fsanitize=address -g salida.c LinkedList.c LinkedList.h -o ejemplo5
cleanTest:
	rm -f ejemplo1 ejemplo1.c ejemplo2 ejemplo2.c ejemplo3 ejemplo3.c ejemplo4 ejemplo4.c ejemplo5 ejemplo5.c