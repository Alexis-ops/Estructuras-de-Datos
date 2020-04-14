#include "colaC.h"

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
