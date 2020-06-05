const int N = 100;

int funcion_hash(int dato){
  return (dato*dato)% N;
}
struct Lista{
  int dato;
  struct Lista * siguiente;
};
struct TablaHash { /* Abierta*/
  int datos[N];
};
int insertar(struct TablaHash *tabla,int dato){
  int donde = funcion_hash(dato);
  return insertar_lista( tabla->datos[ datos ], donde );
}
int eliminar( struct TablaHash *tabla, int dato){
  int donde = funcion_hash ( dato);
  return eliminar_lista( tabla->datos[donde],dato);
}
int main(){
  int posicion = funcion_hash (1111);

  return 0;
}
