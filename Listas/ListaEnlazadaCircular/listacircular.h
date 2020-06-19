#include <stdio.h>
#include <stdlib.h>

struct Lista{
	int dato;
	struct Lista*siguiente;
};

struct Lista * crear(int dato);
struct Lista * insertarf(struct Lista * lista, int dato);
struct Lista * insertari(struct Lista * lista, int dato);
void mostrar (struct Lista * lista);
struct Lista * eliminar(struct Lista * lista,int eliminar);

