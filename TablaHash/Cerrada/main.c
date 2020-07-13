#include "TablaHash.h"

int
main (void)
{
  struct TablaHash * tabla = NULL;
  tabla = inicializar (tabla);
  tabla = insertar (tabla, 1);
  tabla = insertar (tabla, 10);
  tabla = insertar (tabla, 20);
  tabla = insertar (tabla, 5);
  tabla = insertar (tabla, 15);
  tabla = insertar (tabla, 35);;
  mostrar (tabla);
  printf ("Eliminando el 5\n");
  tabla = eliminar (tabla, 5);
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
