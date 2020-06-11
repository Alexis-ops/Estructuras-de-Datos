#include "listacircular.h"

int main(int argc, char *argv[]) {
	struct Lista *miLista=NULL;
	/*if(miLista=NULL){
		printf("No Se Creó");
		return -1;
	}*/
	miLista=insertar(miLista,1);
	miLista=insertar(miLista,2);
	miLista=insertar(miLista,3);
	miLista=insertar(miLista,4);
	mostrar(miLista);
	return 0;
}
