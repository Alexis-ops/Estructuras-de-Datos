#include "listacircular.h"

int main(int argc, char *argv[]) {
	struct Lista * miLista = NULL;
	miLista=insertarf(miLista,1);
	miLista=insertarf(miLista,2);
	miLista=insertarf(miLista,3);
	miLista=insertarf(miLista,4);
	miLista=insertarf(miLista,9);
	miLista=insertari(miLista,0);
	miLista=eliminar(miLista,9);
	mostrar(miLista);
	return 0;
}
