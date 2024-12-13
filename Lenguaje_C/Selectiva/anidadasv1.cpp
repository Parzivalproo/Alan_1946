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
    if (a > b){
        if (a > c){
            cout << "el valor mayor es " << a << endl;
    } else {
        cout << "el valor mayor es " << c << endl;
    }
}
else { 
    if (b > c){
        cout << "el valor mayor es " << b << endl;
    }
    else{
        if (c > a){
            cout << "el valor mayor es " << c << endl;
    }
    else {
        cout << "los valores son iguales" << endl;
    }
}
}
}