#include "TablaHash.h"

int
main ()
{
  struct Tabla *tabla = NULL;
  tabla = inicializar(tabla);
  tabla = insertar_tabla (tabla, 10);
  tabla = insertar_tabla (tabla, 113);
  tabla = insertar_tabla (tabla, 12);
  tabla = insertar_tabla (tabla, 45);
  tabla = insertar_tabla (tabla, 5);
  tabla = insertar_tabla (tabla, 122);
  mostrar_tabla (tabla);
  tabla = eliminacion_tabla (tabla, 5);
  mostrar_tabla (tabla);
  return 0;
}
