

#include <stdio.h>
#include <stdlib.h>

struct Lista{
	int dato;
	struct Lista*siguiente;
};

struct Lista * crear(int dato);
struct Lista * insertar(struct Lista * lista, int dato);
void mostrar(struct Lista * lista);
struct Lista * eliminarndato(struct Lista * lista,int eliminar);

