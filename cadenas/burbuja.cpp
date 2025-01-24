#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenaVector(int v[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        v[i] = rand() % 100 + 1;
    }
}

void ordenaBurbuja(int v[], int n) {
    int aux;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

void muestraVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int ne;
    cout << "Cuantos elementos tiene el vector?: ";
    cin >> ne;

    if (ne <= 0) {
        cout << "El numero de elementos debe ser mayor que cero." << endl;
        return 1;
    }

    int vector[ne];
    llenaVector(vector, ne);

    cout << "Vector original: ";
    muestraVector(vector, ne);

    ordenaBurbuja(vector, ne);

    cout << "Vector ordenado: ";
    muestraVector(vector, ne);

    return 0;
}