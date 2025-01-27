#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int maquina(int dificultad) {
    srand(time(NULL));
    int ne;
    if (dificultad == 1) { // Fácil
        ne = (rand() % 3 + 1);
    } else if (dificultad == 2) { // Medio
        // La máquina tiene un 60% de probabilidades de elegir papel
        if (rand() % 10 < 6) {
            ne = 2;
        } else {
            ne = (rand() % 3 + 1);
        }
    } else if (dificultad == 3) { // Difícil
        // La máquina tiene un 70% de probabilidades de elegir tijera
        if (rand() % 10 < 7) {
            ne = 3;
        } else {
            ne = (rand() % 3 + 1);
        }
    }
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
        cout << "Elección inválida. Por favor, ingrese un número entre 1 y 3." << endl;
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

void determinarGanador(int usuario, int maquina) {
    if (usuario == maquina) {
        cout << "Empate!" << endl;
    } else if ((usuario == 1 && maquina == 3) || (usuario == 2 && maquina == 1) || (usuario == 3 && maquina == 2)) {
        cout << "Usuario gana!" << endl;
    } else {
        cout << "Máquina gana!" << endl;
    }
}

int main() {
    int dificultad;
    cout << "Ingrese la dificultad (1. Fácil, 2. Medio, 3. Difícil)" << endl;
    cin >> dificultad;
    while (dificultad < 1 || dificultad > 3) {
        cout << "Dificultad inválida. Por favor, ingrese un número entre 1 y 3." << endl;
        cin >> dificultad;
    }

    int rondas = 5;
    int puntosUsuario = 0;
    int puntosMaquina = 0;

    for (int i = 0; i < rondas; i++) {
        cout << "\nRonda " << i + 1 << endl;
        int usuarioEleccion = usuario();
        int maquinaEleccion = maquina(dificultad);
        imprimirEleccion(usuarioEleccion, "Usuario");
        imprimirEleccion(maquinaEleccion, "Máquina");
        determinarGanador(usuarioEleccion, maquinaEleccion);
        if (usuarioEleccion == maquinaEleccion) {
            cout << "Empate, no se otorgan puntos." << endl;
        } else if ((usuarioEleccion == 1 && maquinaEleccion == 3) || (usuarioEleccion == 2 && maquinaEleccion == 1) || (usuarioEleccion == 3 && maquinaEleccion == 2)) {
            puntosUsuario++;
            cout << "Usuario gana la ronda, suma 1 punto." << endl;
        } else {
            puntosMaquina++;
            cout << "Máquina gana la ronda, suma 1 punto." << endl;
        }
        cout << "Puntos: Usuario " << puntosUsuario << ", Máquina " << puntosMaquina << endl;
    }

    if (puntosUsuario > puntosMaquina) {
        cout << "\nUsuario gana el juego!" << endl;
    } else if (puntosMaquina > puntosUsuario) {
        cout << "\nMáquina gana el juego!" << endl;
    } else {
        cout << "\nEmpate en el juego!" << endl;
    }

    return 0;
}