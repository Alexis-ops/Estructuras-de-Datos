#include <stdio.h>
#include <stdlib.h>
 
struct ListaDoble{
  int dato;
  struct ListaDoble *siguiente;
  struct ListaDoble *anterior;
};

struct ListaDoble *crear(int dato);
struct ListaDoble *insertarI(struct ListaDoble*lista, int dato);
struct ListaDoble *eliminar(struct ListaDoble*lista, int eliminar);
struct ListaDoble *final(struct ListaDoble*lista, int dato);
void imprimir(struct ListaDoble*lista);


int main(){
  struct ListaDoble * miLista=NULL;
  miLista=insertarI(miLista,100);
  miLista=insertarI(miLista,99);
  miLista=insertarI(miLista,98);
  miLista=insertarI(miLista,97);
  miLista=eliminar(miLista, 97);
  miLista=final(miLista,101);
  miLista=final(miLista,102);
  imprimir(miLista);
  return 0;
}

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




