#include <iostream>
#include <string>
using namespace std;

string categorizar(int valor) {
  if (valor >= 1 && valor <= 5) {
    return "Deficiente";
  } else if (valor >= 6 && valor <= 10) {
    return "Regular";
  } else if (valor >= 11 && valor <= 15) {
    return "Bueno";
  } else if (valor >= 16 && valor <= 18) {
    return "Muy bueno";
    }else if (valor<=0 || valor>20){
        return "Ninguna";
    } else {
    return "Excelente";
  }
}

int main() {
  int valor;
  cout << "Ingrese un valor entre 1 y 20: ";
  cin >> valor;
  cout << "La categoria es: " << categorizar(valor) << endl;
  return 0;
}