#include "hanoi.h"
int main(){ 
	char com='A';
	char aux='B';
	char fin='C';
	int n;
 
	printf("\nNumero de discos: ");
	scanf("%d",&n);
	printf("\n\nLos movimientos a realizar son: \n");
	hanoi(n,com,aux,fin);
}
