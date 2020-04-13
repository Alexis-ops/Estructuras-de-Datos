#include <stdio.h>
#include <stdlib.h>

struct ListaC{
  int dato;
  struct ListaC * siguiente;
};

struct ListaC * crear(int elemento);
struct ListaC * insertar(struct ListaC * lista, int dato);
void mostrar (struct ListaC * lista);

int main(){
  struct ListaC*miLista=NULL;
  miLista=insertar(miLista,1);
  miLista=insertar(miLista,2);
  miLista=insertar(miLista,4);
  miLista=insertar(miLista,5);
  miLista=insertar(miLista,6);
  mostrar(miLista);
  return 0;
}

struct ListaC * crear (int elemento){
  struct ListaC * nuevodato = NULL;
  nuevodato = (struct ListaC *)malloc(sizeof(struct ListaC));
  if(nuevodato == NULL){
    return NULL;
  }
  nuevodato->dato=elemento;
  nuevodato->siguiente=NULL;
  return nuevodato;
}
struct ListaC * insertar(struct ListaC*lista, int dato){
  struct ListaC * datos=crear(dato);
  if(lista == NULL){
    datos->siguiente=datos;
   /*¿Comó hago que el primero apunte asi mismo y que al insertar el segundo dato el primero punte al ultimo que se inserto?*/
  }else{
    datos->siguiente=lista->siguiente;
  }
  return datos;
}
void mostrar(struct ListaC*lista){
  struct ListaC*aux=lista;
  do{
    printf("%d,",aux->dato);
    aux=aux->siguiente;
  }while(aux->siguiente!=lista);
  printf("\n");
}
