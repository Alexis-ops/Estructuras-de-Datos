#include <stdio.h>
#include <stdlib.h>
 
struct ListaDoble{
  int dato;
  struct ListaDoble *siguiente;
  struct ListaDoble *anterior;
};

struct ListaDoble *crear(int dato);
struct ListaDoble *insertarI(struct ListaDoble*lista, int dato);
void imprimir(struct ListaDoble*lista);


int main(){
  struct ListaDoble * miLista=NULL;
  miLista=insertarI(miLista,100);
  miLista=insertarI(miLista,99);
  miLista=insertarI(miLista,98);
  miLista=insertarI(miLista,97);
  imprimir(miLista);
  return 0;
}

struct ListaDoble *crear(int dato){
  struct ListaDoble * nuevo = NULL;
  nuevo = (struct ListaDoble*) malloc (sizeof(struct ListaDoble));
  if (nuevo=NULL){
    return NULL;
  }
  nuevo->dato=dato;
  nuevo->siguiente=NULL;
  nuevo->anterior=NULL;
  return nuevo;
}
struct ListaDoble * insertarI(struct ListaDoble*lista, int dato){
  struct ListaDoble * nueva = crear(dato);
  nueva->siguiente=lista;
  nueva->anterior=NULL;
  if (lista!=NULL){
    lista->anterior=nueva;
  }
  return nueva;
}
void imprimir(struct ListaDoble*lista){
  struct ListaDoble*recorrer=lista;
  while(recorrer!=NULL){
  printf("%d ", recorrer->dato);
  recorrer=recorrer->siguiente;
  }
}




