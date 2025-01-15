#include "stdio.h"
#include "math.h"
int main (void)
{
    float a, r, x, y;
    printf("Ingrese r(solo valores positivos):");
    scanf("%f",&r);
    if(r<0)
{
    printf("Valores negativos no validos, por favor ingrese un valor positvo\n");
    return;
}
    printf("Ingrese el valor de a en radianes:");
    scanf("%f",&a);
    if (a<0||a>2*M_PI)
    {
        printf("Valor no permitido\n");
        return;
    }
    x=r*cos(a);
    y=r*sin(a);
    printf("Coordenadas:(%.2f,%.2f)",x,y);
}
