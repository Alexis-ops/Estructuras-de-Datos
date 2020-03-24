#include <stdio.h>
#include <stdlib.h>
#define max 6

struct ColaC{
	int inicio;
	int final;
	int array[max];
};
void iniciar(struct ColaC*cola);
int vacia(struct ColaC*cola);
int llena(struct ColaC*cola);
int elementos(struct ColaC*cola);
void agregar(struct ColaC*cola);
void mostrar(struct ColaC*cola,int dato);
void eliminar(struct ColaC*cola);
int main(){
  iniciar(&cola);
}

void(struct ColaC*cola){
  cola->final=-1;
  cola->inicio=-1
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
  }
  if(cola->final >= cola->inicio){
    return (cola->final)-(cola->inicio)+1;
  }else{
    return max-(cola->inicio)+(cola->final)+1;
  }
}
int llena(struct ColaC * cola){
  if(elementos(cola)==max){
    return 1;
  }
  return 0;
}
void agregar(struct ColaC*cola, int dato){
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
  }
  printf("La cola esta llena, espera que se libere un espacio");
}
void eliminar(struct ColaC*cola){
  int x=0;
  if(vacia(cola)==0){
    if(elementos(cola)==1){
      iniciar(cola);
    }
    else{
      cola->inicio++;
    }
    /*if(cola->final >= cola->inicio){
      for(x=1;x<=cola-final;x++){
        cola->array[x-1]=cola->array[x];
      }
      cola->final--;
    }
  */}
  printf("La cola esta vacia, no hay datos que se puedan eliminar");
}
