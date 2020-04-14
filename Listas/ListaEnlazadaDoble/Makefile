contigua.o: listasdobles.c
	gcc listasdobles.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o listasdobles.o
	gcc main.o listasdobles.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o listasdobles.o
