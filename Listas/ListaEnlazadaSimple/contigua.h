#ifndef __CONTIGUA_H__
#define __CONTIGUA_H__

#include <stdio.h>
#include <stdlib.h>

struct Lista
{
  int dato;
  struct Lista *siguiente;
};

struct Lista *crear (int dato);
struct Lista *insertar (struct Lista *lista, int dato);
struct Lista *invertir (struct Lista *lista);
void mostrar (struct Lista *lista);
struct Lista *eliminarndato (struct Lista *lista, int eliminar);
struct Lista *final (struct Lista *lista, int dato);
#endif
