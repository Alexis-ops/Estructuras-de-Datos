A_D.o: A_D.c
	gcc A_D.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o A_D.o
	gcc main.o A_D.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o A_D.o
