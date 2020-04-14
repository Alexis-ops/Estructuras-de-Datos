#include "A_D.h"
int iniciar(struct Vector *vector){
  if( vector== NULL){
    return -1;
  }
  vector->datos = (int *) malloc (sizeof(int));
  if( vector->datos==NULL){
    return -2;
  }
  vector->cuantos_hay = 0;
  vector->capacidad= 1;
  return 0;
}

/*
0 todo bien
-1 el parametro es nulo
-2 no se pudo agrandar
*/

int agregar(struct Vector * vector, int dato){
  if(vector==NULL){
    return -1;
  }
  if( hay_espacio(vector)==1 ){
    if(agrandar(vector) !=0 ){
    return -2;
    } 
  }
  *(vector->datos + vector->cuantos_hay /*+1*/ ) = dato;  //¿Por qué entero igual a entero?
  vector->cuantos_hay=vector->cuantos_hay+1;
  return 0;
}

/*
1- no hay espacio
0- si hay espacio
*/

int hay_espacio( struct Vector *vector ){
  if(vector==NULL) {
    return 1;
  }
  if(vector->cuantos_hay < vector->capacidad){
    return 0;
  }
  return 1;
}

/*
free no quita la memoria solo quita las flechas de espacio
0 esta todo correcto
cast obliga el dato (int *)
malloc regresa void
-2 no se aparto memoria del vector aux
-1 es parámetro nulo.
*/

int agrandar(struct Vector *vector){
  int i=0; 
  int *otro = NULL;
  if(vector==NULL){
    return -1;
  }
  otro= (int *)malloc (sizeof(int) *2*vector->capacidad);
  if( otro==NULL){
    return -2;
  }
  for(i=0;i<vector->cuantos_hay;i++){
     *(otro+i) = *(vector->datos+i);
  }
  free( vector->datos );
  vector->capacidad=vector->capacidad*2;
  vector->datos=otro;
  return 0;
}

void mostrar(struct Vector *vector){
	int i=0;
	if(vector ==  NULL){
		//return;
	}
	for( i=0; i<vector->cuantos_hay; i++ ){
		printf("%d ", *(vector->datos+i) );
	}
	printf("\n");
}
