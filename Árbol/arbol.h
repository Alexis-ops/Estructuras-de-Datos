#include<stdlib.h>
#include<stdio.h>
struct Arbol
{
  int dato;
  struct Arbol *izquierdo;
  struct Arbol *derecho;
};

struct Arbol *insertar (struct Arbol *, int);
struct Arbol * lugar_a_eliminar = buscar(raiz);
int buscar (struct Arbol *, int);
void mostrar (struct Arbol *);

