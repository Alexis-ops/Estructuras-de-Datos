#include "cola.h"

/*
1 - eh verda
0 - no eh verda
*/
void
inicializar (struct Cola *cola)
{
  cola->final = -1;
  cola->inicio = -1;
}

int
llena (struct Cola *cola)
{
  if (cola->final == max - 1)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

int
vacia (struct Cola *cola)
{
  if (cola->inicio == -1)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

void
agregar (struct Cola *cola, int dato)
{
  if (llena (cola) == 0)
    {
      if (vacia (cola) == 1)
	{
	  cola->inicio = 0;
	}
      cola->final++;
      cola->array[cola->final] = dato;
    }
  else
    {
      printf ("La cola se encuentra llena \n");
    }
}

void
borra (struct Cola *cola)
{
  if (vacia (cola) == 0)
    {
      if (cola->final == 0)
	{
	  cola->final = -1;
	  cola->inicio = -1;
	}
      else
	{
	  atender (cola);
	}
    }
  else
    {
      printf ("La cola esta vacia\n");
    }
}

void
atender (struct Cola *cola)
{
  int x = 0;
  if (vacia (cola) == 1)
    {
      printf ("La cola esta vacia\n");
    }
  else
    {
      for (x = 1; x <= cola->final; x++)
	{
	  cola->array[x - 1] = cola->array[x];
	}
      cola->final--;
    }
}

void
mostrar (struct Cola *cola)
{
  int x = 0;
  for (x = 0; x <= cola->final; x++)
    {
      printf ("%d,", cola->array[x]);
    }
  printf ("\n");
}
