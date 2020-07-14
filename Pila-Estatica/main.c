#include "pilaestatica.h"
int
main (int argc, char *argv[])
{
  struct Pila pila;
  crear (&pila);
  agregar (&pila, 9);
  agregar (&pila, 8);
  agregar (&pila, 7);
  agregar (&pila, 6);
  agregar (&pila, 5);
  agregar (&pila, 4);
  agregar (&pila, 3);
  agregar (&pila, 2);
  agregar (&pila, 1);
  agregar (&pila, 0);
  mostrar (&pila);
  eliminar (&pila);
  printf ("El ultimo dato de la pila es: %d\n", ultimo (&pila));
  return 0;
}
