//uso del operador ternario
#include <iostream>
using namespace std;
main () {
    int n1, n2, resultado;
    bool operacion;
    cout << "Ingresa un numero ";
    cin >> n1;
    cout << "Ingresa otro numero ";
    cin >> n2;
    cout << "Primera forma: "<< endl;
    (n1>n2)?cout<< n1 <<" es mayor que  "<< n2 : cout << n2 << " es mayor que "<<n1;
    cout << endl;
    cout << "Segunda forma: "<< endl;
    resultado = (n1>n2)?n1/n2:n1%n2;
    cout << "el resultado es: "<< resultado<< endl;
    operacion = (n1>n2)? true: false;
    if (operacion)
    cout << "el resultado guarda la de division de " << n1 << " entre " << n2 << endl;
    else
    cout << "El resultado guarda el modulo de " << n1 << " entre " << n2 << endl;

}