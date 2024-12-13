#include <iostream>
using namespace std;

int main() {
    int nTerminos;  
    double x = 0;   
    int n = 2;      
    int d = 1;      
    int sign = 1;   
    int i = 1;      

   
    cout << "Ingresa el número de términos para la serie: ";
    cin >> nTerminos;

    while (i <= nTerminos) {
        x += sign * (double)n / d;
        n = n + (i + 1);  
        d = d + 2;        
        sign *= -1;
        i++;
    }
    cout << "El valor de la serie es: " << x << endl;
      cout << "El valor de la serie es: " << d << endl;
        cout << "El valor de la serie es: " << n << endl;
    return 0;
}
