#include "colaprioridad.h"
/*struct Lista*acomodar(struct Lista*lista);
 * Gerarquia  1,2,3
 *  menor gerarquia 3, mayor gerarquia 1
 */
int
main ()
{
  struct Lista *miLista = NULL;
  struct Lista_2 *miLista_2 = NULL;
  struct Lista_3 *miLista_3 = NULL;
  miLista = insertar (miLista, 1, 1);
  miLista = insertar (miLista, 10, 1);
  miLista_2 = insertar_2 (miLista_2, 20, 2);
  miLista_2 = insertar_2 (miLista_2, 2, 2);
  miLista_2 = insertar_2 (miLista_2, 3, 2);
  miLista = insertar (miLista, 4, 1);
  miLista_3 = insertar_3 (miLista_3, 5, 3);
  miLista_3 = insertar_3 (miLista_3, 6, 3);
  miLista_3 = insertar_3 (miLista_3, 30, 3);
  miLista = eliminar (miLista, 10);
  miLista_2 = eliminar_2 (miLista_2, 20);
  miLista_3 = eliminar_3 (miLista_3, 30);
  mostrarconprioridad (miLista, miLista_2, miLista_3);	
  return 0;
}
