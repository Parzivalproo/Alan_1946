#include <iostream>
using namespace std;
main ()
{

int n1, n2;
char operacion;
cout << "ingrese el primer numero: ";
cin >> n1;
cout << "ingrese el segundo numero: ";
cin >> n2;
cout << "ingrese la operacion (+,-,*,/): ";
cin >> operacion;

switch (operacion)
{
    case '+':
cout << n1<< " + " <<n2 << " = " << n1+n2<< endl;
    break;
    case '-':
cout << n1<< " - " <<n2 << " = " << n1-n2<< endl;
    break;
    case '*':
cout << n1<< " * " <<n2 << " = " << n1*n2 << endl;
    break;
    case '/':
 if (n2==0)
 cout << "no se puede dividir entre cero" << endl;
 else
 cout << n1<< " / " <<n2 << " = " << n1/n2<< endl;
    break;

}
}