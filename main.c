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

int main(int argc, char *argv[]) {
	struct Lista *miLista;
	if(miLista=NULL){
		printf("No Se Creó");
		return -1;
	}
	miLista=insertar(miLista,12);
	miLista=insertar(miLista,27);
	miLista=insertar(miLista,2020);
	miLista=insertar(miLista,1);
	mostrar(miLista);
	printf("invertir lista \n");
	invertir(&miLista);
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
void invertir(struct Lista ** lista){
	struct Lista * aux= *lista;
	struct Lista * anterior=NULL;
	struct Lista * despues=NULL;

	while (aux != NULL){
		despues=aux->siguiente;
		aux->siguiente=anterior;
		anterior=aux;
		aux=despues;		
	}
	*lista=anterior;
}
