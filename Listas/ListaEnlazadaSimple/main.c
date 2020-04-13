#include "contigua.h"

int main(int argc, char *argv[]) {
	struct Lista *miLista=NULL;
	if(miLista=NULL){
		printf("No Se Creó");
		return -1;
	}
	miLista=insertar(miLista,12);
	miLista=insertar(miLista,27);
	miLista=insertar(miLista,2020);
	miLista=insertar(miLista,1);
/*	miLista=eliminarndato(miLista,27);
	miLista=final(miLista,10);
	miLista=final(miLista,11);*/
	miLista=invertir(miLista);
	mostrar(miLista);
	return 0;
}
