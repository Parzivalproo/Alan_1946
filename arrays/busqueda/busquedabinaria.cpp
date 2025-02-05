#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../../librerias/arrays.h"
using namespace std;
using namespace vectorn;
using namespace ordenarV;
bool isBusquedaBinaria(int v[], int n, int elemento) {
    int arriba, abajo, centro;
     abajo = 0;
     arriba = n - 1;
     while (abajo <= arriba) {
        centro = (abajo + arriba) / 2;
        if (v[centro] == elemento) {
            return true;
        } else if (v[centro] < elemento) {
            abajo = centro + 1;
        } else {
            arriba = centro - 1;
        }
    }
    return false;
}

int main () {
    int ne, dato;
    cout << "Ingrese el numero de elementos del vector: ";
    cin >> ne;
    int vector[ne];
    llenarVector(vector, ne);
    cout << "Vector generado: ";
    mostrarVector(vector, ne);
    cout << endl;
    ordenarSeleccion(vector, ne); // Ordenamos el vector
    cout << "Vector ordenado: ";
    mostrarVector(vector, ne);
    cout << endl;
    cout << "\nIngrese el elemento a buscar: ";
    cin >> dato;
    (isBusquedaBinaria(vector, ne, dato)) ? cout << "El elemento esta en el vector" : cout << "El elemento no esta en el vector";
    cout << endl;
}