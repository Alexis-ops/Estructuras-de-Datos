listacircular.o: listacircular.c
	gcc listacircular.c -c 
main.o: main.c
	gcc main.c -c

a.out: main.o listacircular.o
	gcc main.o listacircular.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o listacircular.o
