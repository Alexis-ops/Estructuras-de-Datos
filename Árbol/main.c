#include"arbol.h"

int main (void)
{
  struct Arbol *raiz = NULL;
  raiz = insertar_Arbol (raiz, 10);
  raiz = insertar_Arbol (raiz, 1);
  raiz = insertar_Arbol (raiz, 140);
  raiz = insertar_Arbol (raiz, 110);
  raiz = insertar_Arbol (raiz, 510);
  raiz = insertar_Arbol (raiz, 160);
  raiz = insertar_Arbol (raiz, 180);
  printf ("mostrar normal: \n");
  mostrar_1 (raiz);
  printf ("\n");
  printf ("forma decendente: \n");
  mostrar_2 (raiz);
  printf ("\n");
  printf ("forma acendente: \n");
  mostrar_3 (raiz);
  printf ("\n");
  raiz = eliminar_Arbol (raiz, 50);
  printf ("Eliminando el número 50\n");
  mostrar_2 (raiz);
  printf ("\n");
  printf ("Buscar el 100 \n");
  if (buscar_arbol (raiz, 100) == 1)
    {
      printf ("Numero encontrado\n");
    }
  else
    {
      printf ("El número que busca no existe\n");
    }
  return 0;
}
