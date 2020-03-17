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

}

struct ListaC * crear (int elemento){
  struct ListaC * nuevodato = NULL;
  nuevodato = (struct ListaC *)malloc(sizeof(struct Listac));
  if(nuevodato == NULL){
    return NULL;
  }
  nuevodato->dato=elemento;
  nuevodato->siguiente=NULL;
  return nuevodato;
}
struct ListaC * insertar(struct ListaC*lista, int dato){
  struct ListaC * datos=crear(dato);
  struct ListaC * final=NULL;
  datos->siguiente=lista;
  
}
