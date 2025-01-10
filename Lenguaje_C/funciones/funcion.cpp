#include <iostream>
using namespace std;

// Función para calcular el factorial
int factorial(int num) {
    int fac = 1;
    for (int i = 1; i <= num; i++) {
        fac *= i;
    }
    return fac;
}

// Función para calcular el término n-ésimo de Fibonacci
int fibonacci(int num) {
    int a = 0, b = 1, c = 0;
    for (int i = 1; i <= num; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c; // Retorna el término en posición "num"
}

// Algoritmo CalcularSerie
int main() {
    int numer;
    double resultado = 0, suma = 0;

    // Solicitar el término deseado
    cout << "Ingrese el número del término que desea calcular: ";
    cin >> numer;

    // Calcular la serie
    for (int i = 1; i <= numer; i++) {
        resultado = (double)factorial(i) / fibonacci(i);
        suma += resultado;
    }

    // Mostrar el resultado
    cout << "El resultado es " << suma << endl;

    return 0;
}
