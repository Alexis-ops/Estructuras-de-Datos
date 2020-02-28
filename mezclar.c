#include <stdio.h>
#include <stdlib.h>

struct Vector{
	int *datos;
	int cuantos;
};

struct Vector *mezclar(struct Vector*, struct Vector*);
int inicializar(struct Vector*, struct Vector*);
int llenar_a(struct Vector*);
int llenar_b(struct Vector*);


int main(){
	int i=0;
	struct Vector *c = NULL;
	struct Vector a;
	struct Vector b;
	inicializar(&a,&b);
	llenar_a(&a);
	llenar_b(&b);
	c = mezclar(&a,&b);
	
	for(i=0;i<c->cuantos;i++){
		printf("%d",i," :%d\n",*(c->datos+i));
	}
	return 0;
}

struct Vector *mezclar(struct Vector*a, struct Vector*b){
	int *aux = NULL;
	int tam_nuevo=0;
	int cont;
	int i=0;
	struct Vector *c=NULL;
	if(a==NULL){
		return b;
	}
	aux=(int*) malloc (tam_nuevo*sizeof(int ));
	if (aux==NULL){
		return NULL;
	}
	if( a->cuantos == b->cuantos ){
		tam_nuevo=a->cuantos*2;
		for(i=0;i<tam_nuevo;i++){       
			if(i%2 == 0){
				*(aux+i)=*(a->datos+i);
			}
			else {
				*(aux+i)=*(b->datos+i);
			}
		}
		c = (struct Vector*) malloc (sizeof(struct Vector));
		if(c==NULL){
			return NULL;
		}
		c->cuantos=tam_nuevo;
		c->datos=aux;
		return c;
	}else if(a->cuantos < b->cuantos){
		tam_nuevo=a->cuantos + b->cuantos;
		for(i=0;i<tam_nuevo;i++){
			if(a->cuantos > cont){
				if(i%2 == 0){
					*(aux+i)=*(a->datos+i);
				}
				else {
					*(aux+i)=*(b->datos+i);
				}
				cont++;	
			}
			*(aux+i)=*(b->datos+i);
		}
		c = (struct Vector*) malloc (sizeof(struct Vector));
		if(c==NULL){
			return NULL;
		}
		c->cuantos=tam_nuevo;
		c->datos=aux;
		return c;
	}else if(b->cuantos < a->cuantos){
		tam_nuevo=a->cuantos + b->cuantos;
		for(i=0;i<tam_nuevo;i++){
			if(b->cuantos > cont){
				if(i%2 == 0){
					*(aux+i)=*(a->datos+i);
				}
				else {
					*(aux+i)=*(b->datos+i);
				}
				cont++;	
			}
			*(aux+i)=*(a->datos+i);
		}
		c = (struct Vector*) malloc (sizeof(struct Vector));
		if(c==NULL){
			return NULL;
		}
		c->cuantos=tam_nuevo;
		c->datos=aux;
		return c;
	}
	
}
int inicializar(struct Vector*a, struct Vector*b){
	if(a==NULL){
		return 1;
	}
	if(b==NULL){
		return 2;
	}
	a->datos=(int *) malloc (sizeof(int));
	if (a->datos==NULL){
		return 1;
	}
	a->cuantos=0;
	b->datos=(int *) malloc (sizeof(int));
	if (b->datos==NULL){
		return 1;
	}
	b->cuantos=0;
	return 0;
}
int llenar_a(struct Vector*a){
	int i=0;
	printf("Cuantos quieres en vector A: ");
	scanf("%d",&(a->cuantos));
	for (i=0;i<a->cuantos;i++){
		scanf("%d",(a->datos+i));
	}
	return 0;
}
int llenar_b(struct Vector*b){
	int i=0;
	printf("Cuantos quieres en vector B: ");
	scanf("%d",&(b->cuantos));
	for(i=0;i<b->cuantos;i++){
		scanf("%d",(b->datos+i));
	}
	return 0;
}
