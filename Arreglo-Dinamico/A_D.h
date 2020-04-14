#include <stdio.h>
#include <stdlib.h>
/*notas cuantos_hay es un contador*/
struct Vector{
  int capacidad;
  int cuantos_hay;
  int *datos;
};

void mostrar(struct Vector*);
int agrandar(struct Vector*);
int hay_espacio( struct Vector* );
int agregar(struct Vector*, int );
int iniciar(struct Vector*);
