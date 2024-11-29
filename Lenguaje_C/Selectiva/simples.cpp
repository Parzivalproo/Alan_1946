#include <iostream>
using namespace std;
main () 
{
    int num, r, d;
    cout << "Ingrese un numero ";
    cin >> num;
    cout << "Ingrese un divisor ";
    cin >> d;
    r= num%d;
    if(r==0)
    {
        cout << "El numero "<< num << " es divisible de " << d << endl;
    }
    else
    {
        cout << "El numero "<< num << " no es divisible de " << d << endl;
    }
    num=0;
}