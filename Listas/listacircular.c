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
  printf("%d",miLista->dato);
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
  if(lista==NULL){
    datos->siguiente=lista->;
  }else{

  }
  return lista;
}
void mostrar(struct ListaC*lista){
  struct ListaC*aux=lista;
  printf("%d\n",aux->dato);
}
