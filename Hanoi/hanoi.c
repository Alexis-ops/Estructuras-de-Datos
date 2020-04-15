#include "hanoi.h"

 
void hanoi(int n,int com, int aux, int fin){
 
	if(n==1){
		printf("%c->%c",com,fin);
	}
	else{
		hanoi(n-1,com,fin,aux);
		printf("\n%c->%c\n",com,fin);
		hanoi(n-1,aux,com,fin);
	}
	
}
