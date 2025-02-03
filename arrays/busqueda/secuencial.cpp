#include <iostream>
using namespace std;
bool isEncontrado(int v[], int n, int elemento) {
    int i;
    //bool encontrado = false;
    for (i = 0; i < n; i++) 
    {
        if (v[i] == elemento) {
            /*encontrado = true;
            break;*/
            return true;
        }
    }
    return false;
}
void llenaDatos(int v[], int n) {
    for (int i = 0; i < n; i++) {
        v[i] = (i + 1) * 3;
    }
}
void verElementos(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << "\t";
    }
}
main () {
    int vector[5], dato;
    llenaDatos(vector, 5);
    cout << "Ingrese el elemento a buscar: ";
    cin >> dato;
    (isEncontrado(vector, 5, dato)) ? cout << "El elemento esta en el vector" : cout << "El elemento no esta en el vector";
    cout << endl;
    verElementos(vector, 5);
}