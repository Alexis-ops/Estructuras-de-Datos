#include "stdio.h"
#include "stdlib.h"

struct ListaDoble{
	int dato;
	struct ListaDoble *siguiente;
	struct ListaDoble *anterior;
};
struct ListaDoble *crear(int dato);
struct ListaDoble *insertarI(struct ListaDoble*lista, int dato);
struct ListaDoble *eliminar(struct ListaDoble*lista, int eliminar);
struct ListaDoble *insertarF(struct ListaDoble*lista, int dato);
void mostrar(struct ListaDoble*lista);
void mostrar_alreves(struct ListaDoble * lista);
