#include <stdio.h>
#include <stdlib.h>

struct Pila{
	int array [10];
	int tope;
};
void crear(struct Pila*pila);
int llena(struct Pila*pila);
int vacia(struct Pila*pila);
void agregar(struct Pila*pila,int n);
void eliminar(struct Pila*pila);
int ultimo(struct Pila*pila);
void mostrar(struct Pila*pila);
int main(int argc, char *argv[]){
	struct Pila pila;
	crear(&pila);
	agregar(&pila,9);	
	agregar(&pila,8);
	agregar(&pila,7);
	agregar(&pila,6);
	agregar(&pila,5);
	agregar(&pila,4);	
	agregar(&pila,3);	
	agregar(&pila,2);
	agregar(&pila,1);
	agregar(&pila,0);	
	mostrar(&pila);
	eliminar(&pila);
	printf("El ultimo dato de la pila es: %d\n", ultimo(&pila));
	return 0;
}

void crear(struct Pila*pila){
	pila->tope=-1;
}
/*
1 - todo bien
0 - todo mal
*/
int llena(struct Pila*pila){
	if(pila->tope == *(pila->array-1)){
		return 1;
	}
	return 0;
}
int vacia(struct Pila*pila){
	if(pila->tope == -1){
		return 1;
	}
	return 0;
}
void agregar(struct Pila*pila,int n){
	if(llena(pila) == 0){
		pila->tope++;
		pila->array[pila->tope]=n;
		printf("Se a añadido correctamente\n");
	}else{
		printf("ERROR, la pila esta llena. \n");
	}
}
void eliminar(struct Pila*pila){
	int aux=0;
	if( vacia(pila) == 0){
		aux=pila->tope;
		pila->tope--;
		printf("Se elimino correctamente\n");
	}else{
	printf("ERROR, la pila esta vacia no se puede eliminar ningun elemento \n");
	}
}
int ultimo(struct Pila*pila){
	return pila->array[pila->tope];
}
void mostrar(struct Pila*pila){
	int c=-1;
	while(c !=pila->tope){
	++c;
	printf("%d,", pila->array[c]);
	}
	printf("\n");
}
