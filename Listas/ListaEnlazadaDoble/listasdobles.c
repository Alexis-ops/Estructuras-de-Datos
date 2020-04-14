#include "listasdobles.h"

struct ListaDoble *crear(int dato){
  struct ListaDoble * nuevo = NULL;
  nuevo = (struct ListaDoble*) malloc (sizeof(struct ListaDoble));
 /* if (nuevo=NULL){
    return NULL;
  }*/
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
  while(recorrer->siguiente!=NULL){
  printf("%d,", recorrer->dato);
  recorrer=recorrer->siguiente;
  }
  printf("%d\n",recorrer->dato);
  printf("Ahora va alreves\n");
  while(recorrer!=NULL){
  printf("%d,", recorrer->dato);
  recorrer=recorrer->anterior;
  }
  printf("\n");
}
struct ListaDoble * eliminar(struct ListaDoble*lista,int eliminar){
  struct ListaDoble * buscador= lista;
  struct ListaDoble * anterior = lista;
  struct ListaDoble * next = lista;
  if(buscador->dato == eliminar){
    lista=lista->siguiente;
    lista->anterior=NULL;
    free(buscador);
  }else{
    while(buscador->dato != eliminar){
      anterior=buscador;
      next =buscador->siguiente;
      buscador=buscador->siguiente;
    }
    next=buscador->siguiente;
    anterior->siguiente=buscador->siguiente;
    next->anterior=anterior;
    free(buscador);
  }
  return lista;
}
struct ListaDoble*final(struct ListaDoble*lista,int dato){
  struct ListaDoble*insf = crear(dato);
  struct ListaDoble*aux=lista;
  while(aux->siguiente!=NULL){
    aux=aux->siguiente;
  }
  aux->siguiente=insf;
  insf->anterior=aux;
  return lista;
}
