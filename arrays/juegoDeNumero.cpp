#include <iostream>
#include "../librerias/arrays.h"
using namespace std;
using namespace vectorn;
using namespace ordenarV;

int main() {
    int ne, rin, rsu, dato;
    cout << "Ingrese el numero de elementos del vector: ";
    cin >> ne;
    cout << "Ingrese el rango para generar los numeros: ";
    cin >> rin >> rsu;
    
    int vector[ne];
    llenarVector(vector, ne, rin, rsu);
    ordenarInsersion(vector, ne);
    
    srand(time(0));
    int elegido = vector[rand() % ne];
    int intentos = 3;
    bool adivinado = false;
    
    cout << "Adivina el numero seleccionado por la maquina. Tienes " << intentos << " intentos.\n";
    while (intentos > 0) {
        cout << "Ingresa un numero: ";
        cin >> dato;
        
        if (dato == elegido) {
            cout << "Felicidades, Has adivinado el numero." << endl;
            adivinado = true;
            break;
        }
        else if (isBusquedaBinaria(vector, ne, dato)) {
            cout << "El numero ingresado esta en el vector, pero es incorrecto." << endl;
        }
        
        if (dato < elegido) {
            cout << "El numero es mayor." << endl;
        } else {
            cout << "El numero es menor." << endl;
        }
        
        intentos--;
        cout << "Te quedan " << intentos << " intentos." << endl;
    }
    
    if (!adivinado) {
        cout << "Has agotado tus intentos. El numero era " << elegido << "." << endl;
    }
    
    return 0;
}
