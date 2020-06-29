ListaDEC.o: ListaDEC.c
	gcc ListaDEC.c -c

main.o: main.c
	gcc main.c -c

a.out: main.o ListaDEC.o
	gcc main.o ListaDEC.o

run: a.out
	./a.out

clean: 
	rm -f a.out main.o ListaDEC.o
