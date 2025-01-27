#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int maquina() {
    srand(time(NULL));
    int ne = (rand() % 3 + 1);
    return ne;
}

int usuario() {
    int ne;
    cout << "1. Piedra" << endl;
    cout << "2. Papel" << endl;
    cout << "3. Tijera" << endl;
    cout << "Ingrese su eleccion" << endl;
    cin >> ne;
    while (ne < 1 || ne > 3) {
        cout << "Elección invalida. Por favor, ingrese un numero entre 1 y 3." << endl;
        cin >> ne;
    }
    return ne;
}

void imprimirEleccion(int ne, string nombre) {
    if (ne == 1) {
        cout << nombre << "= Piedra" << endl;
    } else if (ne == 2) {
        cout << nombre << "= Papel" << endl;
    } else if (ne == 3) {
        cout << nombre << "= Tijera" << endl;
    }
}

void determinarGanadorRonda(int usuario, int maquina) {
    if (usuario == maquina) {
        cout << "Empate" << endl;
    } else if ((usuario == 1 && maquina == 3) || (usuario == 2 && maquina == 1) || (usuario == 3 && maquina == 2)) {
        cout << "Usuario gana la ronda" << endl;
    } else {
        cout << "Maquina gana la ronda" << endl;
    }
}

int main() {
    int usuarioEleccion = usuario();
    int maquinaEleccion = maquina();
    imprimirEleccion(usuarioEleccion, "Usuario");
    imprimirEleccion(maquinaEleccion, "Máquina");
    determinarGanadorRonda(usuarioEleccion, maquinaEleccion);
    return 0;
}