#include<stdio.h>
#include<stdlib.h>
struct Lista
{
  int dato;
  int prioridad;
  struct Lista *siguiente;
};
struct Lista_2
{
  int dato;
  int prioridad;
  struct Lista_2 *siguiente;
};
struct Lista_3
{
  int dato;
  int prioridad;
  struct Lista_3 *siguiente;
};
struct Lista *insertar (struct Lista *lista, int dato, int gerarquia);
struct Lista *crear (int dato, int gerarquia);
struct Lista_2 *insertar_2 (struct Lista_2 *lista_2, int dato, int gerarquia);
struct Lista_2 *crear_2 (int dato, int gerarquia);
struct Lista_3 *insertar_3 (struct Lista_3 *lista_3, int dato, int gerarquia);
struct Lista_3 *crear_3 (int dato, int gerarquia);
void mostrarconprioridad (struct Lista *lista, struct Lista_2 *lista_2, struct Lista_3 *lista_3);
struct Lista *eliminar (struct Lista * lista, int eliminar);
struct Lista_2 *eliminar_2 (struct Lista_2 * lista_2, int eliminar);
struct Lista_3 *eliminar_3 (struct Lista_3 * lista_3, int eliminar);
