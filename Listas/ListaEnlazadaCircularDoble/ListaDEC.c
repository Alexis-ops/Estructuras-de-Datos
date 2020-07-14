#include "ListaDEC.h"
struct ListaDoble *primero = NULL;
struct ListaDoble *ultimo = NULL;

struct ListaDoble *
crear (int dato)
{
  struct ListaDoble *nuevo = NULL;
  nuevo = (struct ListaDoble *) malloc (sizeof (struct ListaDoble));
  if (nuevo == NULL)
    {
      return NULL;
    }
  nuevo->dato = dato;
  nuevo->siguiente = NULL;
  nuevo->anterior = NULL;
  return nuevo;
}

struct ListaDoble *
insertarI (struct ListaDoble *lista, int dato)
{
  struct ListaDoble *nueva = crear (dato);
  struct ListaDoble *nodo_despues = NULL;
  if (primero == NULL)
    {
      primero = nueva;
      ultimo = nueva;
      primero->siguiente = primero;
      primero->anterior = ultimo;
      return nueva;
    }
  else
    {
      primero->siguiente = nueva;
      nueva->siguiente = ultimo;
      nueva->anterior = primero;
      primero = nueva;
      ultimo->anterior = primero;
      return nueva;
    }
}

struct ListaDoble *
insertarF (struct ListaDoble *lista, int dato)
{
  struct ListaDoble *nueva = crear (dato);
  if (primero == NULL)
    {
      primero = nueva;
      ultimo = nueva;
      primero->siguiente = primero;
      primero->anterior = ultimo;
      return nueva;
    }
  else
    {
      ultimo->siguiente = nueva;
      nueva->siguiente = primero;
      nueva->anterior = ultimo;
      ultimo = nueva;
      primero->anterior = ultimo;
      return nueva;
    }
}

void
mostrar (struct ListaDoble *lista)
{
  struct ListaDoble *recorrer = lista;
  recorrer = primero;
  do
    {
      printf ("%d -> ", recorrer->dato);
      recorrer = recorrer->siguiente;
    }
  while (recorrer != primero);
  printf ("\n");
}

void
mostrar_alreves (struct ListaDoble *lista)
{
  struct ListaDoble *recorrer = lista;
  recorrer = ultimo;
  do
    {
      printf ("%d -> ", recorrer->dato);
      recorrer = recorrer->anterior;
    }
  while (recorrer != ultimo);
  printf ("\n");
}

struct ListaDoble *
eliminar (struct ListaDoble *lista, int eliminar)
{
  struct ListaDoble *buscador = lista;
  struct ListaDoble *anterior = lista;
  struct ListaDoble *despues = lista;
  if (buscador->dato == eliminar)
    {
      lista = lista->siguiente;
      lista->anterior = NULL;
      free (buscador);
    }
  else
    {
      while (buscador->dato != eliminar)
	{
	  anterior = buscador;
	  despues = buscador->siguiente;
	  buscador = buscador->siguiente;
	}
      despues = buscador->siguiente;
      anterior->siguiente = buscador->siguiente;
      despues->anterior = anterior;
      free (buscador);
    }
  return lista;
}
