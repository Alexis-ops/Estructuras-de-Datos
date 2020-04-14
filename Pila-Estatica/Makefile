
pilaestatica.o: pilaestatica.c
	gcc pilaestatica.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o pilaestatica.o
	gcc main.o pilaestatica.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o pilaestatica.o
