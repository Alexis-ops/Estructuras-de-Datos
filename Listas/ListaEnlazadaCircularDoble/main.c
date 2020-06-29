#include "ListaDEC.h"
int main(){
	struct ListaDoble * miLista = NULL;
	miLista=insertarI(miLista,100);
	miLista=insertarI(miLista,99);
	miLista=insertarI(miLista,98);
	miLista=insertarI(miLista,123);
	miLista=insertarI(miLista,97);
 	miLista=eliminar(miLista, 123);
	miLista=insertarF(miLista,101);
	miLista=insertarF(miLista,102);

	mostrar(miLista);
	mostrar_alreves(miLista);
	return 0;
}


