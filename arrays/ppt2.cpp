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
        cout << "Eleccion invalida. Por favor, ingrese un numero entre 1 y 3." << endl;
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
        cout << "Empate" << endl;
    } else if ((usuario == 1 && maquina == 3) || (usuario == 2 && maquina == 1) || (usuario == 3 && maquina == 2)) {
        cout << "Usuario gana" << endl;
    } else {
        cout << "Maquina gana" << endl;
    }
}

int main() {
    int dificultad;
    cout << "Ingrese la dificultad (1. Principiante, 2. Intermedio, 3. Avanzado)" << endl;
    cin >> dificultad;
    while (dificultad < 1 || dificultad > 3) {
        cout << "Dificultad invalida. Por favor, ingrese un numero entre 1 y 3." << endl;
        cin >> dificultad;
        cout <<"****************************************"<<endl;
    }

    int rondas = 5;
    int puntosUsuario = 0;
    int puntosMaquina = 0;

    if (dificultad == 1) { // Principiante
        puntosUsuario = 0;
        puntosMaquina = 0;
    } else if (dificultad == 2) { // Intermedio
        puntosUsuario = 0;
        puntosMaquina = 1;
    } else if (dificultad == 3) { // Avanzado
        puntosUsuario = 0;
        puntosMaquina = 2;
    }

    for (int i = 0; i < rondas; i++) {
        cout << "\nRonda " << i + 1 << endl;
        int usuarioEleccion = usuario();
        int maquinaEleccion = maquina();

        imprimirEleccion(usuarioEleccion, "Usuario");
        imprimirEleccion(maquinaEleccion, "Maquina");
        cout <<"****************************************"<<endl;
        determinarGanador(usuarioEleccion, maquinaEleccion);
        if (usuarioEleccion == maquinaEleccion) {
            cout << "Empate, no se otorgan puntos." << endl;
        } else if ((usuarioEleccion == 1 && maquinaEleccion == 3) || (usuarioEleccion == 2 && maquinaEleccion == 1) || (usuarioEleccion == 3 && maquinaEleccion == 2)) {
            puntosUsuario++;
            cout << "Usuario gana la ronda, suma 1 punto." << endl;
        } else {
            puntosMaquina++;
            cout << "Maquina gana la ronda, suma 1 punto." << endl;
        }
        cout << "Puntos: Usuario " << puntosUsuario << ", Maquina " << puntosMaquina << endl;
        cout <<"****************************************"<<endl;
    }

    if (puntosUsuario >= 3) {
    cout << "\nUsuario gana el juego" << endl;
}  if (puntosMaquina >= 3) {
    cout << "\nMaquina gana el juego" << endl;
}
return 0;
}