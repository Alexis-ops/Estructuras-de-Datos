#include <stdio.h>
#include <stdlib.h>
#define size 10

/* Esta estructura debería estar en un archivo .h*/
struct Lista{
  int dato;
  struct Lista *siguiente;  
};
struct Lista * cabeza[]={NULL};
struct Lista * c;
void insertar(){
	int i;
	int key;
	printf("ingresa un valor\n");
	scanf("%d",&key);
	i=key%size;
	struct Lista* Nlista=(struct Lista*)malloc(sizeof(struct Lista));
	Nlista->dato=key;
	Nlista->siguiente=NULL;
	if(cabeza[i] == NULL){
		cabeza[i] == Nlista;
	}
	else {
		c=cabeza[i];
		while(c->siguiente){
			c=c->siguiente;
		}
		c->siguiente=Nlista;
	}
}
void buscar(){
	int key;
	int indice;
	printf("ingresa el elemento a buscar\n");
	scanf("%d",&key);
	indice=key%size;
	if(cabeza[indice]==NULL){
		printf("Elemento no encontrado\n");
	}else{
		for(c=cabeza[indice];c!=NULL;c=c->siguiente){
			if(c->dato == key){
				printf("Elemento encontrado en el indice %d \n",indice);
				break;
			}
		}
		if(c == NULL){
			printf("Elemento no encontrado \n");
		}
	}
}

void mostrar(){
	int i=0;
	for(i=0;i<size;i++){
		printf("\n");
		if(cabeza[i] == NULL){
			continue;
		}
		else{
			for(c=cabeza[i];c!=NULL;c=c->siguiente){
				printf("->%d",c->dato);
			}
		}
	}
}

int main(){
  int opt;
  int key;
  while (1){
	  printf("\n presiona 1. Insertar\t 2.Mostrar\t3.buscar \t4.Salir \n ");
	  scanf("%d",&opt);
	  switch(opt){
		  case 1:
			  insertar();
			  break;
		  case 2:
			  mostrar();
			  break;
		  case 3:
			  buscar();
			  break;
		  case 4:
			  exit(0);

	  }
  }
}

