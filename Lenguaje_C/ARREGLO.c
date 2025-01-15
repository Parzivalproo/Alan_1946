#include "stdio.h"
int main (void)
{
    int arreglo[4],i=0;
    printf("ingrese los elementos del arreglo\n");
    printf("arreglo A:\n");
    do
    {
        printf("\nelemento[%i]=",i);
        scanf("%i",&arreglo[i]);
    }
    while(i<4);
    i=0;
    printf("\nArreglo ingres\n"),
    printf("\nArreglo A:\n");
    do
    {
        printf("\nElementos[%i]:%i",i,arreglo[i]);
        i++;
    }
    while(i<4);
}
