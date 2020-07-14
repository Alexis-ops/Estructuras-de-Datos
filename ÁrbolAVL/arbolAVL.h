#include<stdlib.h>
#include<stdio.h>
struct Arbol
{
  int factor;
  int dato;
  struct Arbol *izquierdo;
  struct Arbol *derecho;
};

struct Arbol *insertar (struct Arbol *, int);

void mostrar (struct Arbol *);
