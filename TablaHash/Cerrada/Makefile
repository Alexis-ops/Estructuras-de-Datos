run: a.out
	./a.out
a.out: main.o TablaHash.o
	gcc main.o TablaHash.o -Wall -g3
main.o: main.c
	gcc main.c -c -Wall -g3
TablaHash.o: TablaHash.c
	gcc TablaHash.c -c -Wall -g3
clear:
	rm -f TablaHash.o main.o a.out 
