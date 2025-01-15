#include "stdio.h"
#include "math.h"
float coorX(float r, float a)
{
    return r*cos(a);
}
float coorY(float r, float a)
{
    return r*sin(a);
}
int main (void)
{
    float a, r, X, Y;
    printf("Ingrese r (solo valores positivos):");
    scanf("%f",&r);
    if(r<0)
{
    printf("Valores negativos no validos, por favor ingrese un valor positvo\n");
    return 1;
}
    printf("Ingrese el valor de a en radianes:");
    scanf("%f",&a);
    if (a<0||a>2*M_PI)
    {
        printf("Valor no permitido");
        return 1;
    }
    x=r*cos(a)
}

