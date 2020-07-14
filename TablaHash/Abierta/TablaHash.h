#include<stdio.h>
#include<stdlib.h>
#include "Lista.h"

struct Tabla
{
  struct Lista *listas[9];
};

struct Tabla *inicializar (struct Tabla *tabla);
int funcion_Hash (int dato);
void mostrar_tabla (struct Tabla *Hash);
struct Tabla *insertar_tabla (struct Tabla *Hash, int dato);
struct Tabla *eliminacion_tabla (struct Tabla *Hash, int dato);
