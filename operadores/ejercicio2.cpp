#include <iostream>
using namespace std;
main () {
    int n1, n2;
    cout << "Ingresa un numero ";
    cin >> n1;
    cout << "Ingresa otro numero ";
    cin >> n2;
    cout << "Primera forma: "<< endl;
    (n1>n2)?cout<< n1 <<" es mayor que  "<< n2 : cout << n2 << " es mayor que "<<n1;
}