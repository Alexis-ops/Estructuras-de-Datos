TablaHash.o: TablaHash.c
	gcc TablaHash.c -c -Wall -g3

main.o: main.c
	gcc main.c -c -Wall -g3
Lista.o: Lista.c
	gcc Lista.c -c -Wall -g3

a.out: TablaHash.o main.o Lista.o
	gcc main.o TablaHash.o Lista.o

run: a.out
	./a.out

clean:
	rm -f a.out TablaHash.o main.o Lista.o
