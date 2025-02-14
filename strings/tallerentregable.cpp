#include <iostream>
#include <string>
using namespace std;

void cadenaRempl(string cadenaPrincipal, string objetivo, string reemplazo) {
    size_t pos = cadenaPrincipal.find(objetivo);
    if (pos != string::npos) {
        cadenaPrincipal.replace(pos, objetivo.size(), reemplazo);
        cout << "Oracion modificada: " << cadenaPrincipal << endl;
    } else {
        cout << "No se encontro la palabra/frase en la oracion." << endl;
    }
}

int main() {
    string cadenaPrincipal = "Juan es mi amigo";
    string objetivo, reemplazo;
    cout << "Oracion actual: " << cadenaPrincipal << endl;
    cout << "Ingrese la palabra o frase que desea reemplazar: ";
    getline(cin, objetivo);
    cout << "Ingrese la nueva palabra o frase: ";
    getline(cin, reemplazo);
    cadenaRempl(cadenaPrincipal, objetivo, reemplazo);
    return 0;
}