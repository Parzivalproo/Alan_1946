#include <stdio.h>
main()
{
    int i, num;
    short valor;
    char letra;
    float peso;
    double altura;
    printf ("Ingrese un valor entero :\t");
    scanf("%d",&i);
    printf ("Ingrese un valor de tipo short :\t");
    scanf("%d",&valor);
    printf("Ingrese un valor de tipo char :\t");
    fflush(stdin);
    scanf("%c",&letra);  
    printf("Ingrese un valor de tipo float :\t");
    scanf("%f",&peso);
    printf("Ingrese un valor de tipo double :\t");
    scanf("%lf",&altura);
    printf ("Valores ingresados:\n");
    printf ("El valor entero es:%d\n",num);
    printf ("El valor octal es:%o\n",num);
    printf ("El valor entero es:%x\n",num);
    printf ("El valor entero es:%c\n",letra);
    

}