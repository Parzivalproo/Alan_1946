#include <iostream>
#include <cstring>
using namespace std;

string identificarTipo(const char array[]) {
    bool tieneDigitos = false;
    bool tieneLetras = false;
    bool tieneOtros = false;

    for (size_t i = 0; array[i] != '\0'; ++i) {
        char c = array[i];

        if (c >= '0' && c <= '9') {
            tieneDigitos = true;
        } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            tieneLetras = true;
        } else {
            tieneOtros = true;
        }
    }

    if (tieneDigitos && !tieneLetras && !tieneOtros) {
        return "Numerica";
    } else if (tieneLetras && !tieneDigitos && !tieneOtros) {
        return "Alfabetica";
    } else if (tieneLetras && tieneDigitos && !tieneOtros) {
        return "Alfanumerica";
    } else {
        return "Contiene caracteres no alfanumericos";
    }
}
int main() {
    char array[100];
    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(array, 100);
    string tipo = identificarTipo(array);
    cout << "El tipo de cadena es: " << tipo << endl;
    return 0;
}