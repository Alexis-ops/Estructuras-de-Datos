#include<stdio.h>
#include<stdlib.h>
struct Lista{
  int dato;
  int prioridad;
  struct Lista*siguiente;
};
struct Lista * insertar(struct Lista*lista,int dato, int gerarquia);
struct Lista * crear(int dato, int gerarquia);
void mostrarconprioridad(struct Lista*lista);
void mostrar(struct Lista*lista);
struct Lista*eliminar(struct Lista*lista, int eliminar);
/*struct Lista*acomodar(struct Lista*lista);
 * Gerarquia  1,2,3
 *  menor gerarquia 3, mayor gerarquia 1
 */
int main(){
	struct Lista*miLista=NULL;
	miLista=insertar(miLista,1,1);
	miLista=insertar(miLista,2,2);
	miLista=insertar(miLista,3,2);
	miLista=insertar(miLista,4,1);
	miLista=insertar(miLista,5,3);
	miLista=insertar(miLista,6,3);
	miLista=eliminar(miLista,2);
	mostrarconprioridad(miLista);

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
void mostrarconprioridad(struct Lista*lista){
	struct Lista*recorrer=lista;
		while(recorrer!=NULL){
			if(recorrer->prioridad == 1){
				printf("%d,",recorrer->dato);
			}
			recorrer=recorrer->siguiente;
		}
		recorrer=lista;
		while(recorrer!=NULL){
			if(recorrer->prioridad == 2){
				printf("%d,",recorrer->dato);
			}
			recorrer=recorrer->siguiente;
		}
		recorrer=lista;
		while(recorrer!=NULL){
			if(recorrer->prioridad == 3){
				printf("%d,",recorrer->dato);
			}
			recorrer=recorrer->siguiente;
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
/*struct Lista*acomodar(struct Lista*lista){
	struct Lista*recorrer=lista;
	struct Lista*antes=NULL;
	struct Lista*copia=NULL;
	int x=0;
	while(recorrer!=NULL){
		if(recorrer->prioridad==3){
			copia=recorrer;
			recorrer=recorrer->siguiente;
			antes->siguiente=recorrer;
			copia->siguiente=lista;
			lista=copia;
			
		}else{
			antes=recorrer;
			recorrer=recorrer->siguiente;
		}
	}
	return lista;
}*/
