#include "colaprioridad.h"
/*struct Lista*acomodar(struct Lista*lista);
 * Gerarquia  1,2,3
 *  menor gerarquia 3, mayor gerarquia 1
 */
int
main ()
{
  struct Lista *miLista = NULL;
  miLista = insertar (miLista, 1, 1);
  miLista = insertar (miLista, 2, 2);
  miLista = insertar (miLista, 3, 2);
  miLista = insertar (miLista, 4, 1);
  miLista = insertar (miLista, 5, 3);
  miLista = insertar (miLista, 6, 3);
  miLista = eliminar (miLista, 2);
  mostrar (miLista);	
  return 0;
}
