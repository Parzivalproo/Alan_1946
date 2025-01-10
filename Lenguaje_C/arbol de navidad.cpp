#include <iostream>
using namespace std;

int main() {
    int filas;
    cout << "Ingrese el numero de filas del arbol: ";
    cin >> filas;


    for (int i = 1; i <= filas; i++) {

        for (int j = 1; j <= filas - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }


    for (int i = 1; i <= 2; i++) {
        for (int j = 2; j < filas; j++) {
            cout << " ";
        }
        cout << "|||" << endl;
    }

    return 0;
}
