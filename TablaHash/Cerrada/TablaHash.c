#include "TablaHash.h"

struct TablaHash *
inicializar (struct TablaHash * tabla)
{
  int i = 0;
  struct TablaHash *hash = NULL;
  hash = (struct TablaHash *) malloc (sizeof (struct TablaHash));
  if (hash == NULL)
    {
      return NULL;
    }
  for (i = 0; i < 1000; i++)
    {
      hash->posicion[i] = -1;
    }
  return hash;
}

struct TablaHash *
insertar (struct TablaHash *hash, int dato)
{
  int indice = 0;
  int aux;
  indice = funcion_hash (dato);
  if (hash->posicion[indice] != -1)
    {
      aux = hash->posicion[indice];
      while (hash->posicion[indice] == aux)
	{
	  indice = funcion_hash (indice);
	}
      hash->posicion[indice] = dato;
    }
  else
    {
      hash->posicion[indice] = dato;
    }
  return hash;
}

int
funcion_hash (int dato)
{
  dato = dato * dato;
  dato++;
  dato = dato % 1000;
  return dato;
}

void
mostrar (struct TablaHash *hash)
{
  int i = 0;
  for (i = 0; i < 1000; i++)
    {
      if (hash->posicion[i] != -1)
	{
	  printf ("%d\n", hash->posicion[i]);
	}
    }
}

struct TablaHash *
eliminar (struct TablaHash *tabla, int dato)
{
  int indice = 0;
  int i = 0;
  indice = funcion_hash (dato);
  while (tabla->posicion[indice] != dato && i < 1000)
    {
      indice = funcion_hash (dato);
      i++;
    }
  if (i == 1000)
    {
      return tabla;
    }
  tabla->posicion[indice] = -1;
  return tabla;
}

int
buscar (struct TablaHash *tabla, int dato)
{
  int indice = 0;
  int i = 0;
  indice = funcion_hash (dato);
  while (tabla->posicion[indice] != dato && i < 1000)
    {
      indice = funcion_hash (dato);
      i++;
    }
  if (i == 1000)
    {
      return 0;
    }
  return 1;
}
