#include "TablaHash.h"

int
main (void)
{
  struct TablaHash * tabla = NULL;
  tabla = inicializar (tabla);
  tabla = insertar (tabla, 40);
  tabla = insertar (tabla, 70);
  tabla = insertar (tabla, 20);
  tabla = insertar (tabla, 30);
  tabla = insertar (tabla, 10);
  tabla = insertar (tabla, 1);
  mostrar (tabla);
  printf ("Eliminando el 7\n");
  tabla = eliminar (tabla, 7);
  mostrar (tabla);
  printf ("Buscando el elemento 20\n");
  if (buscar (tabla, 20) == 1)
    {
      printf ("Elemento encontrado\n");
    }
  else
    {
      printf ("No existe el elemento\n");
    }
  return 0;
}
