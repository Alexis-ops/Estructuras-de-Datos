#include "cola.h"
int
main ()
{
  struct Cola cola;
  inicializar (&cola);
  agregar (&cola, 1);
  agregar (&cola, 2);
  agregar (&cola, 3);
  agregar (&cola, 4);
  agregar (&cola, 5);
  agregar (&cola, 6);
  //printf("el primer elemento es %d, el ultimo elemento es %d.\n",cola.array[cola.inicio],cola.array[cola.final]);
  mostrar (&cola);
  borra (&cola);
  printf ("el primer elemento es %d, el ultimo elemento es %d.\n",
	  cola.array[cola.inicio], cola.array[cola.final]);
  mostrar (&cola);
}
