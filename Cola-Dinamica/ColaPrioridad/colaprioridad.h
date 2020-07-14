#include<stdio.h>
#include<stdlib.h>
struct Lista
{
  int dato;
  int prioridad;
  struct Lista *siguiente;
};
struct Lista *insertar (struct Lista *lista, int dato, int gerarquia);
struct Lista *crear (int dato, int gerarquia);
void mostrarconprioridad (struct Lista *lista);
void mostrar (struct Lista *lista);
struct Lista *eliminar (struct Lista *lista, int eliminar);
