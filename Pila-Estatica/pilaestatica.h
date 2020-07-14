#include <stdio.h>
#include <stdlib.h>

struct Pila
{
  int array[10];
  int tope;
};
void crear (struct Pila *pila);
int llena (struct Pila *pila);
int vacia (struct Pila *pila);
void agregar (struct Pila *pila, int n);
void eliminar (struct Pila *pila);
int ultimo (struct Pila *pila);
void mostrar (struct Pila *pila);
