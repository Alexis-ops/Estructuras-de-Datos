#include<stdio.h>
#include<stdlib.h>
struct Lista{
  int dato;
  int prioridad;
  struct Lista*siguiente;
};
struct Lista * insertar(struct Lista*lista,int dato);
struct Lista * crear(int dato);
void mostrar(struct Lista*lista);

int main(){
	struct Lista*miLista=NULL;
	miLista=insertar(miLista,1);
/*	miLista=insertar(miLista,2);
	miLista=insertar(miLista,3);
*/	miLista=insertar(miLista,4);
	mostrar(miLista);
	return 0;
}
struct Lista * insertar(struct Lista*lista,int dato){
	struct Lista*datos=crear(dato);
	struct Lista*recorrer=NULL;
	recorrer=lista;
	if(lista==NULL){
		datos->siguiente=lista;
	}else{
		while(recorrer->siguiente!=NULL){
			recorrer=recorrer->siguiente;
		}
		recorrer->siguiente=datos;
 	}
	return datos;
}
struct Lista * crear(int dato){
	struct Lista*nuevo=NULL;
	nuevo=(struct Lista*)malloc(sizeof(struct Lista));
	if(nuevo == NULL){
		return NULL;
	}
	nuevo->dato=dato;
	nuevo->siguiente=NULL;
	return nuevo;
}
void mostrar(struct Lista*lista){//SOLO ME MUESTRA HASTA EL 4
	struct Lista*recorrer=lista;
	while(recorrer!=NULL){
		printf("%d,",recorrer->dato);
		recorrer=recorrer->siguiente;
	}
	printf("\n");
}
