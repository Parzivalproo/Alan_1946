#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ordenarPalabrasPorLongitud(const string& cadena) {
    vector<string> palabras;
    string palabra;
    for (char c : cadena) {
        if (c == ' ') {
            if (!palabra.empty()) {
                palabras.push_back(palabra);
                palabra.clear();
            }
        } else {
            palabra.push_back(c);
        }
    }
    if (!palabra.empty())
        palabras.push_back(palabra);
    for (size_t i = 0; i < palabras.size(); i++) {
        for (size_t j = i + 1; j < palabras.size(); j++) {
            if (palabras[i].size() < palabras[j].size()) {
                string temp = palabras[i];
                palabras[i] = palabras[j];
                palabras[j] = temp;
            }
        }
    }
    string resultado;
    for (size_t i = 0; i < palabras.size(); i++) {
        resultado += palabras[i];
        if (i < palabras.size() - 1)
            resultado += " ";
    }
    return resultado;
}

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Cadena ordenada: " << ordenarPalabrasPorLongitud(cadena) << endl;
    return 0;
}
