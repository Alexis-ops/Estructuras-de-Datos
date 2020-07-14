#include "listasdobles.h"
int
main (int argc, char *argv[])
{
  struct ListaDoble *miLista = NULL;
  miLista = insertarI (miLista, 100);
  miLista = insertarI (miLista, 99);
  miLista = insertarI (miLista, 98);
  miLista = insertarI (miLista, 97);
  miLista = eliminar (miLista, 97);
  miLista = final (miLista, 101);
  miLista = final (miLista, 102);
  imprimir (miLista);
  return 0;
}
