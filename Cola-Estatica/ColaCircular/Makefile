
colaC.o: colaC.c
	gcc colaC.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o colaC.o
	gcc main.o colaC.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o colaC.o
