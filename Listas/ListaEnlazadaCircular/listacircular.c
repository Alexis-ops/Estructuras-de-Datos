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
struct Lista * insertar (struct Lista * lista, int dato){
	struct Lista * nueva = crear (dato);
	nueva->siguiente=lista;
	return nueva;
}
void mostrar(struct Lista * lista){
	while (lista != NULL){
		printf("%d, ", lista->dato);
		lista= lista->siguiente;
	}
	printf("\n");
}
struct Lista*invertir(struct Lista * lista){
	struct Lista * respaldo = lista;
	struct Lista * anterior = NULL;
	struct Lista * despues = NULL;

	while (respaldo != NULL){
		despues = respaldo->siguiente;
		respaldo->siguiente = anterior;
		anterior=respaldo;
		respaldo=despues;		
	}
	lista=anterior;
	return anterior;
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
struct Lista * final(struct Lista * lista, int dato){
	struct Lista * nuevodato = crear(dato);
	struct Lista * aux = lista;
	/*if(nuevodato=NULL){
		return NULL;
	}*/
	while(aux->siguiente != NULL){
		aux=aux->siguiente;
	}
	aux->siguiente=nuevodato;
	return lista;
}
