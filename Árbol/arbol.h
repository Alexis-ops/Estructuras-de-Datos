#include<stdlib.h>
#include<stdio.h>
struct Arbol
{
  int dato;
  struct Arbol *izquierda;
  struct Arbol *derecha;
};

struct Arbol *crear_Arbol (int dato);
struct Arbol *insertar_Arbol (struct Arbol *raiz, int dato);
void mostrar_1 (struct Arbol *raiz);
void mostrar_2 (struct Arbol *raiz);
void mostrar_3 (struct Arbol *raiz);
struct Arbol *eliminar_Arbol (struct Arbol *raiz, int dato);
int buscar_arbol (struct Arbol *Raiz, int dato);
