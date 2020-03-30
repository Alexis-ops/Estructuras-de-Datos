#include <stdio.h>
#include <stdlib.h>
#define size 10
struct Lista{
  int dato;
  struct nose*siguiente;
};
struct Arreglo{
  int vector[size];
};
void insertar(struct Arreglo*arreglo,int dato);
int hash(int dato);
void mostrar(struct Arreglo*arreglo);
//int crear(int dato);
//struct Lista * enqueve(struct Lista*lista, int dato);

int main(){
  struct Arreglo arreglo;
  struct Lista*miLista=NULL;
  insertar(&arreglo,16);
  insertar(&arreglo,7);
  insertar(&arreglo,8);
  insertar(&arreglo,9);
  insertar(&arreglo,10);
  insertar(&arreglo,11);
  insertar(&arreglo,12);
  insertar(&arreglo,13);
  insertar(&arreglo,14);
  insertar(&arreglo,15);
  mostrar(&arreglo);
}
void insertar(struct Arreglo*arreglo,int dato){
	struct lista*miLista=NULL;
	  arreglo->vector[hash(dato)]=dato;
}
int hash(int dato){
	return (dato+4)%size;
}
void mostrar(struct Arreglo*arreglo){
	int x=0;
	for(x=0;x<size;x++){
		printf("%d\n",arreglo->vector[x]);
	}
}
/*int crear(int dato){
	struct Lista*nuevo=NULL;
	nuevo=(struct Lista*)malloc(sizeof(struct Lista));
	nuevo->dato=dato;
	nuevo->siguiente=NULL;
	return nuevo;
}
struct Lista*enqueve(struct Lista*lista, int dato){
	struct Lista*queve=crear(dato);
	struct Lista*recorrer=lista;
	if(lista!=NULL){
		while(recorrer->siguiente!=NULL){
			recorrer=recorrer->siguiente;
		}
		recorrer->siguiente=queve;
	}else{
		queve->siguiente=lista;
	}
	return queve;
}
*/
