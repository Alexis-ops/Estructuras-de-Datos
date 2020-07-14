#include "pilaestatica.h"
void
crear (struct Pila *pila)
{
  pila->tope = -1;
} 

/*
1 - todo bien
0 - todo mal
*/ 
  int
llena (struct Pila *pila)
{
  if (pila->tope == *(pila->array - 1))
    {
      return 1;
    }
  return 0;
}

int
vacia (struct Pila *pila)
{
  if (pila->tope == -1)
    {
      return 1;
    }
  return 0;
}

void
agregar (struct Pila *pila, int n)
{
  if (llena (pila) == 0)
    {
      pila->tope++;
      pila->array[pila->tope] = n;
      printf ("Se a añadido correctamente\n");
    }
  else
    {
      printf ("ERROR, la pila esta llena. \n");
    }
}

void
eliminar (struct Pila *pila)
{
  int aux = 0;
  if (vacia (pila) == 0)
    {
      aux = pila->tope;
      pila->tope--;
      printf ("Se elimino correctamente\n");
    }
  else
    {
      printf
	("ERROR, la pila esta vacia no se puede eliminar ningun elemento \n");
    }
}

int
ultimo (struct Pila *pila)
{
  return pila->array[pila->tope];
}

void
mostrar (struct Pila *pila)
{
  int c = -1;
  while (c != pila->tope)
    {
      ++c;
      printf ("%d,", pila->array[c]);
    }
  printf ("\n");
}


