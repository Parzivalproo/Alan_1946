#include"stdio.h"
int calsal(int *h, int *t);

int main (void)
{
    int t,h,r;
    printf ("Ingrese el valor de t:");
    scanf ("%i",&t);
    printf ("Ingrese el valor de h:");
    scanf ("%i",&h);
    r=calsal(h,t);
    printf("Su salario es de:%i",r);
}
int calsal(int *h, int *t)
{
    int s,e;

    if(*h>40)
    {
        e=*h-40;
        s=(40**t)+(e**t*1.5);
    }
    else
    {
        s=*h**t;
    }
}
