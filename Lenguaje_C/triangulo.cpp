#include <stdio.h>
//declaracion de variables
void mostrarDescripcion ();
int main () {
    printf("Ejemplo de programa en C con un subprograma\n");
    //llamada de subprograma
    mostrarDescripcion ();
    return 0;
}
//definicion de la funcion con su descripcion
void mostrarDescripcion () {
    printf("Este es un mensaje desde la llamda de un subprograma que imprime un mensaje de descripcion");
}
