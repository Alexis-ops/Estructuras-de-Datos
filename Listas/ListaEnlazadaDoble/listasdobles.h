#ifndef __LISTASDOBLES_H__
#define __LISTASDOBLES_H__
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
struct ListaDoble *final(struct ListaDoble*lista, int dato);
void imprimir(struct ListaDoble*lista);

#endif
