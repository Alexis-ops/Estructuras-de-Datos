#include<stdio.h>
#include<stdlib.h>
#define max 10
struct Cola{
	int final;
	int inicio;
	int array[max];
};
void inicializar(struct Cola*cola);
int vacia(struct Cola*cola);
int llena(struct Cola*cola);
void agregar(struct Cola*cola, int dato);
void borra(struct Cola*cola);
void atender(struct Cola*cola);
void mostrar(struct Cola*cola);
int main(){
	struct Cola cola;
	inicializar(&cola);
	agregar(&cola,1);
	agregar(&cola,2);
	agregar(&cola,3);
	agregar(&cola,4);
	agregar(&cola,5);
	agregar(&cola,6);
	//printf("el primer elemento es %d, el ultimo elemento es %d.\n",cola.array[cola.inicio],cola.array[cola.final]);
	mostrar(&cola);
	borra(&cola);
	printf("el primer elemento es %d, el ultimo elemento es %d.\n",cola.array[cola.inicio],cola.array[cola.final]);
	mostrar(&cola);
}
/*
1 - eh veradá
0 - no eh verdá
*/
void inicializar(struct Cola*cola){
	cola->final=-1;
	cola->inicio=-1;
}
int llena(struct Cola*cola){
	if(cola->final == max - 1 ){
		return 1;
	}else{
		return 0;
	}
}
int vacia(struct Cola*cola){
	if(cola->inicio == -1){
		return 1;
	}else{
		return 0;
	}
}
void agregar(struct Cola*cola, int dato){
	if (llena(cola) == 0){
		if(vacia(cola) == 1){
			cola->inicio=0;
		}
		cola->final++;
		cola->array[cola->final]=dato;
	}else{
		printf("La cola se encuentra llena \n");
	}
}
void borra(struct Cola*cola){
	if(vacia(cola)==0){
		if(cola->final==0){
			cola->final=-1;
			cola->inicio=-1;
		}else{
			atender(cola);
		}
	}else{
		printf("La cola esta vacia\n");
	}
}
void atender(struct Cola*cola){
	int x=0;
	if(vacia(cola)==1){
		printf("La cola esta vacia\n");
	}else{
		for(x=1; x <= cola->final; x++){
			cola->array[x-1]=cola->array[x];
		}
		cola->final--;
	}
}
void mostrar(struct Cola*cola){
	int x=0;
	for(x=0;x<=cola->final;x++){
		printf("%d,",cola->array[x]);
	}
	printf("\n");
}
