#include "colaprioridad.h"

struct Lista *
insertar (struct Lista *lista, int dato, int gerarquia)
{
  struct Lista *datos = crear (dato, gerarquia);
  struct Lista *recorrer = lista;
  if (lista == NULL)
    {
      datos->siguiente = lista;
      return datos;
    }
  else
    {
      while (recorrer->siguiente != NULL)
	{
	  recorrer = recorrer->siguiente;
	}
      recorrer->siguiente = datos;
      return lista;
    }
}

struct Lista *
crear (int dato, int gerarquia)
{
  struct Lista *nuevo = NULL;
  nuevo = (struct Lista *) malloc (sizeof (struct Lista));
  if (nuevo == NULL)
    {
      return NULL;
    }
  nuevo->dato = dato;
  nuevo->prioridad = gerarquia;
  nuevo->siguiente = NULL;
  return nuevo;
}

struct Lista_2 *
insertar_2 (struct Lista_2 *lista_2, int dato, int gerarquia)
{
  struct Lista_2 *datos_2 = crear_2 (dato, gerarquia);
  struct Lista_2 *recorrer_2 = lista_2;
  if (lista_2 == NULL)
    {
      datos_2->siguiente = lista_2;
      return datos_2;
    }
  else
    {
      while (recorrer_2->siguiente != NULL)
	{
	  recorrer_2 = recorrer_2->siguiente;
	}
      recorrer_2->siguiente = datos_2;
      return lista_2;
    }
}

struct Lista_2 *
crear_2 (int dato, int gerarquia)
{
  struct Lista_2 *nuevo_2 = NULL;
  nuevo_2 = (struct Lista_2 *) malloc (sizeof (struct Lista_2));
  if (nuevo_2 == NULL)
    {
      return NULL;
    }
  nuevo_2->dato = dato;
  nuevo_2->prioridad = gerarquia;
  nuevo_2->siguiente = NULL;
  return nuevo_2;
}

struct Lista_3 *
insertar_3 (struct Lista_3 *lista_3, int dato, int gerarquia)
{
  struct Lista_3 *datos_3 = crear_3 (dato, gerarquia);
  struct Lista_3 *recorrer_3 = lista_3;
  if (lista_3 == NULL)
    {
      datos_3->siguiente = lista_3;
      return datos_3;
    }
  else
    {
      while (recorrer_3->siguiente != NULL)
	{
	  recorrer_3 = recorrer_3->siguiente;
	}
      recorrer_3->siguiente = datos_3;
      return lista_3;
    }
}

struct Lista_3 *
crear_3 (int dato, int gerarquia)
{
  struct Lista_3 *nuevo_3 = NULL;
  nuevo_3 = (struct Lista_3 *) malloc (sizeof (struct Lista_3));
  if (nuevo_3 == NULL)
    {
      return NULL;
    }
  nuevo_3->dato = dato;
  nuevo_3->prioridad = gerarquia;
  nuevo_3->siguiente = NULL;
  return nuevo_3;
}

void
mostrarconprioridad (struct Lista *lista, struct Lista_2 *lista_2, struct Lista_3 *lista_3)
{
  struct Lista *recorrer = lista;
  struct Lista_2 *recorrer_2 = lista_2;
  struct Lista_3 *recorrer_3 = lista_3;    
  while (recorrer != NULL)
    {
      if (recorrer->prioridad == 1)
  	{
	  printf ("%d,", recorrer->dato);
        }
      recorrer = recorrer->siguiente;
    }
  printf ("\n");
  while (recorrer_2 != NULL)
    {
      if (recorrer_2->prioridad == 2)
	{
	  printf ("%d,", recorrer_2->dato);
	}
      recorrer_2= recorrer_2->siguiente;
    }
  printf ("\n");
  while (recorrer_3 != NULL)
    {
      if (recorrer_3->prioridad == 3)
	{
	  printf ("%d,", recorrer_3->dato);
	}
      recorrer_3 = recorrer_3->siguiente;
    }
  printf ("\n");
}

struct Lista *
eliminar (struct Lista *lista, int eliminar)
{
  struct Lista *recorrer = lista;
  struct Lista *antes = NULL;
  if (recorrer->dato == eliminar)
    {
      lista = recorrer->siguiente;
      free (recorrer);
    }
  else
    {
      while (recorrer->dato != eliminar)
	{
	  antes = recorrer;
	  recorrer = recorrer->siguiente;
	}
      antes->siguiente = recorrer->siguiente;
      free (recorrer);
    }
  return lista;
}

struct Lista_2 *
eliminar_2 (struct Lista_2 *lista_2, int eliminar)
{
  struct Lista_2 *recorrer = lista_2;
  struct Lista_2 *antes = NULL;
  if (recorrer->dato == eliminar)
    {
      lista_2 = recorrer->siguiente;
      free (recorrer);
    }
  else
    {
      while (recorrer->dato != eliminar)
	{
	  antes = recorrer;
	  recorrer = recorrer->siguiente;
	}
      antes->siguiente = recorrer->siguiente;
      free (recorrer);
    }
  return lista_2;
}

struct Lista_3 *
eliminar_3 (struct Lista_3 *lista_3, int eliminar)
{
  struct Lista_3 *recorrer = lista_3;
  struct Lista_3 *antes = NULL;
  if (recorrer->dato == eliminar)
    {
      lista_3 = recorrer->siguiente;
      free (recorrer);
    }
  else
    {
      while (recorrer->dato != eliminar)
	{
	  antes = recorrer;
	  recorrer = recorrer->siguiente;
	}
      antes->siguiente = recorrer->siguiente;
      free (recorrer);
    }
  return lista_3;
}
