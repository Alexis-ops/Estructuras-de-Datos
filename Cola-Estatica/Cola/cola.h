#include<stdio.h>
#include<stdlib.h>
#define max 10
struct Cola
{
  int final;
  int inicio;
  int array[max];
};
void inicializar (struct Cola *cola);
int vacia (struct Cola *cola);
int llena (struct Cola *cola);
void agregar (struct Cola *cola, int dato);
void borra (struct Cola *cola);
void atender (struct Cola *cola);
void mostrar (struct Cola *cola);
