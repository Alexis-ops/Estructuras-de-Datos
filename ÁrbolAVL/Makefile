a.out: main.o arbolAVL.o
	gcc main.o arbolAVL.o
main.o: main.c
	gcc -c main.c
arbol.o: arbol.c
	gcc -c arbolAVL.o
run: a.out
	./a.out
clear:
	rm a.out main.o arbolAVL.o
