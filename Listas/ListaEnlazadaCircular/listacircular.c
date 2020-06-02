#include "listacircular.h"

struct Lista * crear(int dato){
	struct Lista * nuevo = NULL;
	nuevo = (struct Lista*)malloc(sizeof(struct Lista));
	if( nuevo == NULL){
		return NULL;
	}
	nuevo->dato=dato;
	nuevo->siguiente=NULL;
	return nuevo;
}
/*no estoy seguro si mi error esta en insertar(al inicio) o en buscar */
struct Lista * insertar (struct Lista * lista, int dato){
	struct Lista * nueva = crear (dato);
	if(lista  == NULL){
		lista=nueva;
		nueva->siguiente=nueva;
	}
	nueva->siguiente=lista;
	return nueva;
}
void mostrar(struct Lista * lista){
	struct Lista * Final=lista;
	struct Lista * Aux=lista;
	do{
		printf("%d,",Aux->dato);
		Aux=Aux->siguiente;
	}while (Aux->siguiente!=Final->siguiente);
	printf("\n");
}
struct Lista * eliminarndato(struct Lista * lista,int eliminar){
	struct Lista * buscador = lista;
	struct Lista * anterior=NULL;
	/*if (lista = NULL){
		return NULL;
	}*/
	if(buscador->dato == eliminar){
		lista=lista->siguiente;
		free(buscador);
	}else{
		while (buscador->dato != eliminar){
			anterior=buscador;
			buscador=buscador->siguiente;
		}
		anterior->siguiente=buscador->siguiente;
		free(buscador);
	}
	return lista;
}
