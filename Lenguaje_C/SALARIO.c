#include"stdio.h"
int calcularsalario (int horast, int sporh);

int main (void){
    int sporh,horast,r;
    printf ("Salario/hora= ");
    scanf ("%i",&sporh);
    printf ("Total horas trabajadas= ");
    scanf ("%i",&horast);
    r=calcularsalario(horast,sporh);
    printf("SALARIO= $%i",r);
}

int calcularsalario (int horast, int sporh){
    int salariot,hextra;

    if(horast>40){
        hextra=horast-40;
        salariot=(40*sporh)+(hextra*sporh*1.5);}
    else{
        salariot=horast*sporh;}
    return salariot;
}
