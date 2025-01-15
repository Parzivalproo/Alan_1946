#include <iostream>
using namespace std;
int suma(int a, int b)
{
if (b==0)
    return a;
else
    return suma(a+1, b-1);
    return a*suma(a, b-1);
    return a+suma (a, b-1);
}
main (){
    int a,b;
    cout <<"ingrese el primer numero: ";
    cin >> a;
    cout <<"ingrese el segundo numero: ";
    cin >> b;
    cout <<"la suma de los dos numeros es: "<<suma(a,b)<<endl;
    cout <<"la multiplicacion de los dos numeros es: "<<a*b<<endl;
    
}