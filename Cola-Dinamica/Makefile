
colaprioridad.o: colaprioridad.c
	gcc colaprioridad.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o colaprioridad.o
	gcc main.o colaprioridad.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o colaprioridad.o
