#include <stdio.h>
#include <stdlib.h>

struct Lista{
	int dato;
	struct Lista*siguiente;
};

struct Lista * crear(int dato);
struct Lista * insertar (struct Lista * lista, int dato);
void invertir(struct Lista ** lista);
void mostrar(struct Lista * lista);
struct Lista * eliminarndato(struct Lista * lista,int eliminar);
struct Lista * final(struct Lista * lista,int dato);

int main(int argc, char *argv[]) {
	struct Lista *miLista = NULL; /*<< faltaba esta inicialización, de la otra forma empezaba con valor basura*/
	if(miLista=NULL){
		printf("No Se Creó");
		return -1;
	}
	miLista=insertar(miLista,12);
	miLista=insertar(miLista,27);
	miLista=insertar(miLista,2020);
	miLista=insertar(miLista,1);
	//printf("invertir lista \n");
	//invertir(&miLista);
//	miLista=eliminarndato(miLista,1);
/*	miLista=final(miLista,10);*/
	mostrar(miLista);
	return 0;
}
struct Lista * crear(int dato){
	struct Lista * nuevo = NULL;
	nuevo = (struct Lista*)malloc(sizeof(struct Lista));
	if( nuevo == NULL){
		return NULL;
	}
	nuevo->dato=dato;
	nuevo->siguiente=NULL; /*¿Porqué a NULL? R= es a NULL porque en este punto, esta función no sabe
			 para qué vas a usar el nodo nuevo, por lo tanto lo deja en un estado conocido
			 ya cuando lo regreses se puede modificar al valor que se necesite. */
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
void invertir(struct Lista ** lista){
	struct Lista * respaldo = *lista;
	struct Lista * anterior = NULL;
	struct Lista * despues = NULL;

	while (respaldo != NULL){
		despues = respaldo->siguiente;
		respaldo->siguiente = anterior;
		anterior=respaldo;
		respaldo=despues;		
	}
	*lista=anterior;
}
struct Lista * eliminarndato(struct Lista * lista,int eliminar){
	struct Lista * buscador = lista;
	struct Lista*auxiliar=NULL;
	if (lista = NULL){
		return NULL;
	}
	if(buscador->dato == eliminar){
		lista=lista->siguiente;
		free(buscador);
	}else{
		while ((buscador->siguiente)->dato != eliminar){
			buscador=buscador->siguiente;
		}
		auxiliar=buscador->siguiente;
		buscador->siguiente=(buscador->siguiente)->siguiente;
		free(auxiliar);
	}
	return lista;
}
/*
1 - error en la memoria
0 - todo copado mi parce
*/
struct Lista * final(struct Lista * lista, int dato){
	struct Lista * nuevodato = crear(dato);
	struct Lista * aux = lista;
	if(nuevodato=NULL){
		return NULL;
	}
	while(aux->siguiente!= NULL){
		aux=aux->siguiente;
	}
	aux->siguiente= nuevodato;
	return lista;
}
