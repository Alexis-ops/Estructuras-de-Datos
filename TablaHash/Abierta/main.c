#include "TablaHash.h"

int
main ()
{
  struct Tabla *tabla = NULL;
  tabla = inicializar (tabla);
  tabla = insertar_tabla (tabla, 12);
  tabla = insertar_tabla (tabla, 78);
  tabla = insertar_tabla (tabla, 34);
  tabla = insertar_tabla (tabla, 2);
  tabla = insertar_tabla (tabla, 123);
  tabla = insertar_tabla (tabla, 174);
  mostrar_tabla (tabla);
  tabla = eliminacion_tabla (tabla, 12);
  printf ("Eliminacion del dato: 12 en la tabla\n");
  mostrar_tabla (tabla);
  return 0;
}
