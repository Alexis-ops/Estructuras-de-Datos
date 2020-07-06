#include "listacircular.h"
struct Lista *primero = NULL;
struct Lista *ultimo = NULL;

struct Lista *
crear (int dato)
{
  struct Lista *nuevo = NULL;
  nuevo = (struct Lista *) malloc (sizeof (struct Lista));
  if (nuevo == NULL)
    {
      return NULL;
    }
  nuevo->dato = dato;
  nuevo->siguiente = NULL;
  return nuevo;
}

struct Lista *
insertarf (struct Lista *lista, int dato)
{
  struct Lista *nueva = crear (dato);
  if (primero == NULL)
    {
      primero = nueva;
      ultimo = nueva;
      nueva->siguiente = nueva;
      return nueva;
    }
  else
    {
      ultimo->siguiente = nueva;
      nueva->siguiente = primero;
      ultimo = nueva;
      return nueva;
    }
}

struct Lista *
insertari (struct Lista *lista, int dato)
{
  struct Lista *nueva = crear (dato);
  if (primero == NULL)
    {
      primero = nueva;
      ultimo = nueva;
      nueva->siguiente = nueva;
      return nueva;
    }
  else
    {
      nueva->siguiente = primero;
      primero = nueva;
      ultimo->siguiente = primero;
      return nueva;
    }
}

void
mostrar (struct Lista *lista)
{
  struct Lista *recorrer = lista;
  recorrer = primero;
  do
    {
      printf ("%d", recorrer->dato);
      recorrer = recorrer->siguiente;
    }
  while (recorrer != primero);
  printf ("\n");
}

struct Lista *
eliminar (struct Lista *lista, int eliminar)
{
  struct Lista *buscador = lista;
  struct Lista *anterior = NULL;
  if (buscador->dato == eliminar)
    {
      lista = lista->siguiente;
      free (buscador);
    }
  else
    {
      while (buscador->dato != eliminar)
	{
	  anterior = buscador;
	  buscador = buscador->siguiente;
	}
      anterior->siguiente = buscador->siguiente;
      free (buscador);
    }
  return lista;
}
