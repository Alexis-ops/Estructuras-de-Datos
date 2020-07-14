#include "TablaHash.h"
#include "Lista.h"

struct Tabla *
inicializar (struct Tabla *tabla)
{
  int i = 0;
  struct Tabla *Hash = NULL;
  Hash = (struct Tabla *) malloc (sizeof (struct Tabla));
  if (Hash == NULL)
    {
      return NULL;
    }
  for (i = 0; i <= 9; i++)
    {
      Hash->listas[i] = (struct Lista *) malloc (sizeof (struct Lista));
    }
  return Hash;
}

int
funcion_Hash (int dato)
{
  return (dato * 2 + 3) % 9;
}

void
mostrar_tabla (struct Tabla *Hash)
{
  int i = 0;
  struct Lista *aux = NULL;
  for (i = 0; i <= 9; i++)
    {
      aux = Hash->listas[i];
      if (aux->dato != 0)
	{
	  mostrar_lista (aux);
	}
    }
}

struct Tabla *
insertar_tabla (struct Tabla *Hash, int dato)
{
  int indice = 0;
  struct Lista *aux = 0;
  indice = funcion_Hash (dato);
  if (Hash->listas[indice]->dato != 0)
    {
      aux = Hash->listas[indice];
      aux = insertar_lista (aux, dato);
      Hash->listas[indice] = aux;
    }
  else
    {
      Hash->listas[indice]->dato = dato;
    }
  return Hash;
}

struct Tabla *
eliminacion_tabla (struct Tabla *Hash, int dato)
{
  int indice = 0;
  struct Lista *lista = NULL;
  indice = funcion_Hash (dato);
  lista = Hash->listas[indice];
  lista = eliminarndato (lista, dato);
  Hash->listas[indice] = lista;
  return Hash;
}
