#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int maquina() {
    return rand() % 3 + 1;
}

int usuario() {
    int ne;
    cout << "1. Piedra" << endl;
    cout << "2. Papel" << endl;
    cout << "3. Tijera" << endl;
    cout << "Ingrese su eleccion: ";
    cin >> ne;
    while (ne < 1 || ne > 3) {
        cout << "Eleccion invalida. Por favor, ingrese un numero entre 1 y 3: ";
        cin >> ne;
    }
    return ne;
}

void imprimirEleccion(int ne, string nombre) {
    string opciones[] = {"Piedra", "Papel", "Tijera"};
    cout << nombre << " = " << opciones[ne - 1] << endl;
}

bool determinarGanador(int usuario, int maquina) {
    if (usuario == maquina) {
        cout << "Empate" << endl;
        return false;
    } else if ((usuario == 1 && maquina == 3) || (usuario == 2 && maquina == 1) || (usuario == 3 && maquina == 2)) {
        cout << "Usuario gana la ronda." << endl;
        return true;
    } else {
        cout << "Maquina gana la ronda." << endl;
        return false;
    }
}

int main() {
    srand(time(NULL));
    int puntosUsuario = 0, puntosMaquina = 0;
    int dificultad;
    
    cout << "Seleccione la dificultad: \n1. Facil \n2. Medio \n3. Dificil" << endl;
    cin >> dificultad;
    while (dificultad < 1 || dificultad > 3) {
        cout << "Dificultad invalida. Por favor, ingrese un numero entre 1 y 3: ";
        cin >> dificultad;
    }
    
    if (dificultad == 2) {
        puntosMaquina = 1;
    } else if (dificultad == 3) {
        puntosMaquina = 2;
    }

    while (puntosUsuario < 3 && puntosMaquina < 3) {
        int usuarioEleccion = usuario();
        int maquinaEleccion = maquina();

        imprimirEleccion(usuarioEleccion, "Usuario");
        imprimirEleccion(maquinaEleccion, "Maquina");
        cout << "**********************************" << endl;

        if (determinarGanador(usuarioEleccion, maquinaEleccion)) {
            puntosUsuario++;
        } else if (usuarioEleccion != maquinaEleccion) {
            puntosMaquina++;
        }

        cout << "Puntos: Usuario " << puntosUsuario << " - Maquina " << puntosMaquina << endl;
        cout << "**********************************" << endl;
        
        if (puntosUsuario == 3) {
            cout << "\nUsuario gana el juego!" << endl;
            break;
        } else if (puntosMaquina == 3) {
            cout << "\nMaquina gana el juego!" << endl;
            break;
        }
    }

    return 0;
}