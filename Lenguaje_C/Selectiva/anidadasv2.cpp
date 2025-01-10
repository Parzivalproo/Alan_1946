#include <iostream>
using namespace std;
main()
{
    int a,b,c;
    cout << "ingresa valor 1:";
    cin >> a;
    cout << "ingresa valor 2:";
    cin >> b;
    cout << "ingresa valor 3:";
    cin >> c;
    if (a >= b && a > c){
            cout << "el valor mayor es " << a << endl;
    }else if (b > a && b >= c){ 
    cout << "el valor mayor es " << b << endl;
}else if (c >= a && c > b){
    cout << "el valor mayor es " << c << endl;
}else {
    cout << "los valores son iguales" << endl;
}
}