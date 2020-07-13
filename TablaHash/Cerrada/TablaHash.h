#ifndef __TablaHash_H__
#define __TablaHash_H__

#include<stdio.h>
#include<stdlib.h>

struct TablaHash
{
  int posicion[1000];
};
struct TablaHash *inicializar (struct TablaHash * tabla);
int funcion_hash (int dato);
struct TablaHash * insertar (struct TablaHash * tabla, int dato);
void mostrar (struct TablaHash * tabla);
struct TablaHash *eliminar (struct TablaHash * tabla, int dato);
int buscar (struct TablaHash * tabla, int dato);

#endif
