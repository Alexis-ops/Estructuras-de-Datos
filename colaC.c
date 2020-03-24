#include <stdio.h>
#include <stdlib.h>
#define max 5

struct ColaC{
	int inicio;
	int final;
	int array[max];
};
void iniciar(struct ColaC*cola);
int vacia(struct ColaC*cola);
int llena(struct ColaC*cola);
int elementos(struct ColaC*cola);
void enqueve(struct ColaC*cola,int dato);
void mostrar(struct ColaC*cola);
void dequeve(struct ColaC*cola);
int main(){
  struct ColaC cola;
  iniciar(&cola);
  enqueve(&cola,1);
  enqueve(&cola,2);
  enqueve(&cola,3);
  enqueve(&cola,4);
  enqueve(&cola,5);
  dequeve(&cola);
  printf("El inicio es: %d, El final es: %d \n", cola.array[cola.inicio],cola.array[cola.final]);
  mostrar(&cola);
}

void iniciar(struct ColaC*cola){
  cola->final=-1;
  cola->inicio=-1;
}
int vacia(struct ColaC*cola){
  if(cola->final == -1){
    return 1;
  }
  return 0;
}
int elementos(struct ColaC * cola){
  if(vacia(cola)==1){
    return 0;
  }else{
    if(cola->final >= cola->inicio){
      return (cola->final)-(cola->inicio)+1;
    }else{
      return max - (cola->inicio) + (cola->final) + 1;
    }
  }
}
int llena(struct ColaC * cola){
  if(elementos(cola)==max){
    return 1;
  }else{
    return 0;
  }
}
void enqueve(struct ColaC*cola, int dato){
  if(llena(cola)==0){
    if(vacia(cola)==1){
      cola->inicio=0;
    }
    if(cola->final == max-1){
      cola->final=0;    
    }
    else{
      cola->final++;
    }
    cola->array[cola->final]=dato;
  }else{
    printf("La cola esta llena, espera que se libere un espacio\n");
  }
}
void dequeve(struct ColaC*cola){
  int aux=0;
  if(vacia(cola)==0){
    aux=cola->array[cola->inicio];
    if(elementos(cola)==1){
      iniciar(cola);
    }
    if(cola->inicio == max-1){
      cola->inicio=0;
    }else{
        cola->inicio++;
        printf("El dato que se desencolo fue: %d\n",aux);
    }
    
  }else {
    printf("La cola esta vacia, no hay datos que se puedan eliminar\n");
  }
}

/*
f       i
0 1 2 3 4
6       5

*/

void mostrar(struct ColaC*cola){
  int x=0; 
  if(vacia(cola) == 0){
    if(cola->final >= cola->inicio ){
      for(x=cola->inicio;x<=cola->final;x++){
        printf("%d,",cola->array[x]);
      }
    }else{
      for(x=cola->inicio;x<=max-1;x++){
        printf("%d,",cola->array[x]);
      }
      for(x=0;x <= cola->final ; x++){}
        printf("%d,",cola->array[x]);
    }
  }else{
    printf("La cola esta vacia \n");
 }
}
