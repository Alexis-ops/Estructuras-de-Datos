#include "A_D.h"
int main(){
  int i=0;
  int n=0;
  struct Vector vector;
  iniciar( &vector );
  printf("Dame el valor de n: \n");
  scanf("%d", &n);
  for(i=1; i<n; i++){
    agregar(&vector,i);
    mostrar( &vector);
    //printf("%d ", *(vector.datos+i) );
  }
  return 0;
}

/*
-2   no asigno memoria
-1 - parametro nulo 
 0 - todo correcto
*/
