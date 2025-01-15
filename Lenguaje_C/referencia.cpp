#include <iostream>
using namespace std;
void operaciones (float num1, float num2, float &suma, float &resta, float &multiplicacion, float &division, float &resultado) {
suma = num1 + num2;
resta = num1 - num2;
multiplicacion = num1 * num2;
division = num1 / num2;
resultado = (int)num1 % (int)num2;
}
main (){
    float num1, num2, suma, resta, multiplicacion, division;
    int residuo;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    operaciones (num1, num2, suma, resta, multiplicacion, division, resultado);
    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicacion es: " << multiplicacion << endl;
    cout << "La division es: " << division << endl;
    cout << "El residuo es: " << residuo << endl;
    return 0;
}