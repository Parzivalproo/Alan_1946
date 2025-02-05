#include <stdlib.h>
#include <time.h>
using namespace std;
namespace vectorn {
    void llenarVector(int v[], int n, int ri=0, int rs=10) {
    int i;
    for (int i = 0; i < n; i++) {
        v[i] = rand() % (rs - ri + 1) + ri;
        //v[i] = ri + rand() % (rs+1-ri);
        //variable= limite_inferior + rand() % (limite_superior+1-limite_inferior);
    }
}
}
void mostrarVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
    cout << v[i] << "\t";
    }
}

int ordenarSeleccion(int v[], int n) {
    int contador = 0, aux;
    bool cambio = true;
    for (int i = 0; i < n-1 && cambio; i++) {
        cambio = false;
        for (int j = i + 1; j < n; j++) {
            contador++;
            if (v[i] > v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                cambio = true;
            }
        }
    }
    return contador;
}
