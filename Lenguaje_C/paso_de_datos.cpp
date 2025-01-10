#include <iostream>
using namespace std;
float suma (float a, float b) {
return a+b;
}
float resta (float a, float b) {
    return a-b;
}
float multiplicacion (float a, float b) {
    return a*b;
}
float division (float a, float b) {
    return a/b;
}
int residuo (int a, int b) {
    return a%b;
}
main () {
    float a, b;
    cout << "ingrese el primer valor: ";
    cin >> a;
    cout << "ingrese el segundo valor: ";
    cin >> b;
    cout << "la suma es: "<<suma(a,b)<<endl;
    cout << "la resta es: "<<resta(a,b)<<endl;
    cout << "la multiplicacion es: "<<multiplicacion(a,b)<<endl;
    cout << "la division es: "<<division(a,b)<<endl;
    cout << "el residuo es: "<<residuo(a,b)<<endl;
    return 0;
}