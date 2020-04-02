#include<stdio.h>
#include<stdlib.h>
struct Lista{
  int dato;
  int prioridad;
  struct Lista*siguiente;
};
struct Lista * insertar(struct Lista*lista,int dato, int gerarquia);
struct Lista * crear(int dato, int gerarquia);
void mostrarconprioridad(struct Lista*lista,int gerarquia);
void mostrar(struct Lista*lista);
struct Lista*eliminar(struct Lista*lista, int eliminar);
/*
 * Gerarquia  1,2,3
 *  menor gerarquia 1, mayor gerarquia 3
 */
int main(){
	struct Lista*miLista=NULL;
	miLista=insertar(miLista,1,1);
	miLista=insertar(miLista,2,2);
	miLista=insertar(miLista,2,2);
	miLista=insertar(miLista,3,2);
	miLista=insertar(miLista,4,1);
	miLista=insertar(miLista,5,3);
	miLista=eliminar(miLista,2);
	mostrar(miLista);
	return 0;
}
struct Lista * insertar(struct Lista*lista,int dato, int gerarquia){
	struct Lista*datos=crear(dato,gerarquia);
	struct Lista*recorrer=lista;
	if(lista==NULL){
		datos->siguiente=lista;
		return datos;
	}else{
		while(recorrer->siguiente!=NULL){
			recorrer=recorrer->siguiente;
		}
		recorrer->siguiente=datos;
		return lista;
 	}
}
struct Lista * crear(int dato, int gerarquia){
	struct Lista*nuevo=NULL;
	nuevo=(struct Lista*)malloc(sizeof(struct Lista));
	if(nuevo == NULL){
		return NULL;
	}
	nuevo->dato=dato;
	nuevo->prioridad=gerarquia;
	nuevo->siguiente=NULL;
	return nuevo;
}
void mostrarconprioridad(struct Lista*lista, int gerarquia){
	struct Lista*recorrer=lista;
	switch(gerarquia){
		case 1:
		while(recorrer!=NULL){
			if(recorrer->prioridad == gerarquia){
				printf("%d,",recorrer->dato);
			}
			recorrer=recorrer->siguiente;
		}
		printf("\n");
		case 2:
		while(recorrer!=NULL){
			if(recorrer->prioridad == gerarquia){
				printf("%d,",recorrer->dato);
			}
			recorrer=recorrer->siguiente;
		}
		printf("\n");
		break;
		case 3:
		while(recorrer!=NULL){
			if(recorrer->prioridad == gerarquia){
				printf("%d,",recorrer->dato);
			}
			recorrer=recorrer->siguiente;
		}
		printf("\n");
		break;
	}
	printf("\n");
}
void mostrar(struct Lista*lista){
	struct Lista*recorrer=lista;
	while(recorrer!=NULL){
		printf("%d,",recorrer->dato);
		recorrer=recorrer->siguiente;
	}
	printf("\n");
}
struct Lista*eliminar(struct Lista*lista, int eliminar){
	struct Lista*recorrer=lista;
	struct Lista*antes=NULL;
	if(recorrer->dato == eliminar){
		lista=recorrer->siguiente;
		free(recorrer);
	}else{
		while(recorrer->dato!=eliminar){
			antes=recorrer;
			recorrer=recorrer->siguiente;
		}
		antes->siguiente=recorrer->siguiente;
		free(recorrer);
		}
	return lista;
} 
