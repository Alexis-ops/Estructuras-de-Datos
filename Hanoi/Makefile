hanio.0: hanoi.c
	gcc hanoi.c -c

main.o: main.c
	gcc main.c -c

a.out: main.o hanoi.o
	gcc main.o hanoi.o

run: a.out
	./a.out

clean: 
	rm -f a.out main.o hanoi.o
