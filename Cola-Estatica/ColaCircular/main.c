#include "colaC.h"
int main(){
  struct ColaC cola;
  iniciar(&cola);
  enqueve(&cola,1);
  enqueve(&cola,2);
  enqueve(&cola,3);
  enqueve(&cola,4);
  enqueve(&cola,5);
  dequeve(&cola);
  printf("El inicio es: %d, El final es: %d \n", cola.array[cola.inicio],cola.array[cola.final]);
  mostrar(&cola);
}

