#include "stdio.h"
#include "stdlib.h"

struct ListaDoble{
	int dato;
	struct ListaDoble *siguiente;
	struct ListaDoble *anterior;
};
struct ListaDoble *crear(int dato);
struct ListaDoble *insertarI(struct ListaDoble*lista, int dato);
struct ListaDoble *eliminar(struct ListaDoble*lista, int eliminar);
struct ListaDoble *insertarF(struct ListaDoble*lista, int dato);
void mostrar(struct ListaDoble*lista);
void mostrar_alreves(struct ListaDoble * lista);

int main(){
	struct ListaDoble * miLista = NULL;
	miLista=insertarI(miLista,100);
	miLista=insertarI(miLista,99);
	miLista=insertarI(miLista,98);
	miLista=insertarI(miLista,123);
	miLista=insertarI(miLista,97);
 	miLista=eliminar(miLista, 123);
	/*miLista=insertarF(miLista,101);
	miLista=insertarF(miLista,102);*/
	mostrar(miLista);
	mostrar_alreves(miLista);
	return 0;
}

struct ListaDoble * primero = NULL;
struct ListaDoble * ultimo  = NULL;

struct ListaDoble *crear(int dato){
	struct ListaDoble * nuevo = NULL;
	nuevo = (struct ListaDoble*) malloc (sizeof(struct ListaDoble));
	if (nuevo ==NULL){
		return NULL;
	}
	nuevo->dato=dato;
	nuevo->siguiente=NULL;
	nuevo->anterior=NULL;
	return nuevo;
}
struct ListaDoble *insertarI(struct ListaDoble*lista, int dato){
	struct ListaDoble * nueva = crear (dato);
	struct ListaDoble * nodo_despues = NULL;
	if(primero == NULL){
		primero=nueva;		
		ultimo=nueva;
		nueva->siguiente=nueva;
		nueva->anterior=nueva;
		return nueva;
	}
	else{
		nueva->siguiente=primero;
		primero=nueva;
		ultimo->siguiente=primero;
		if(nodo_despues == NULL){
			nodo_despues=nueva;
			nodo_despues->anterior=ultimo; /* creo aqui hay un error */
			ultimo->anterior=nueva;
			return nueva;
		}
		else{
			nodo_despues->anterior=nueva;
			nodo_despues=nueva;
			nueva->anterior=ultimo;
			return nueva;
		}
	}
}
struct ListaDoble *insertarF(struct ListaDoble*lista, int dato){
	struct ListaDoble * nueva = crear (dato);
	struct ListaDoble * nodo_anterior = NULL;
	if(primero == NULL){
		primero=nueva;		
		ultimo=nueva;
		nueva->siguiente=nueva;
		nueva->anterior=nueva;
		nodo_anterior=nueva;
		return nueva;
	}
	else{
		ultimo->siguiente=nueva;
		nueva->siguiente=primero;
		ultimo=nueva;
		primero->anterior=ultimo;
		nueva->anterior=nodo_anterior;
		nodo_anterior=nueva;
		return nueva;
	}
}

void mostrar(struct ListaDoble * lista){
	struct ListaDoble * recorrer = lista;
	recorrer = primero;
	do{
		printf("%d -> ",recorrer->dato);
		recorrer=recorrer->siguiente;
	}while (recorrer != primero);
	printf("\n");
}
void mostrar_alreves(struct ListaDoble * lista){
	struct ListaDoble * recorrer = lista;
	recorrer = ultimo;
	do{
		printf("%d -> ",recorrer->dato);
		recorrer=recorrer->anterior;
	}while (recorrer != ultimo);
	printf("\n");
}
struct ListaDoble * eliminar(struct ListaDoble*lista,int eliminar){
	struct ListaDoble * buscador= lista;
  	struct ListaDoble * anterior = lista;
  	struct ListaDoble * despues = lista;
  	if(buscador->dato == eliminar){
    	lista=lista->siguiente;
    	lista->anterior=NULL;
    	free(buscador);
  	}else{
    		while(buscador->dato != eliminar){
      			anterior=buscador;
      			despues =buscador->siguiente;
      			buscador=buscador->siguiente;
    		}
    		despues=buscador->siguiente;
    		anterior->siguiente=buscador->siguiente;
    		despues->anterior=anterior;
    		free(buscador);
  	}
  	return lista;
}
