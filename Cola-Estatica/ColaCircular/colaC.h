#include <stdio.h>
#include <stdlib.h>
#define max 5

struct ColaC
{
  int inicio;
  int final;
  int array[max];
};
void iniciar (struct ColaC *cola);
int vacia (struct ColaC *cola);
int llena (struct ColaC *cola);
int elementos (struct ColaC *cola);
void enqueve (struct ColaC *cola, int dato);
void mostrar (struct ColaC *cola);
void dequeve (struct ColaC *cola);
