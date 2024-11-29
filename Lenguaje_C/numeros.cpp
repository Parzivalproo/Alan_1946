#include <iostream>
using namespace std;
main ()
{
    int n1=5, n2=6, n3=7, aux;
    aux=n3;
    n3=n2;
    n2=n1;
    n1=aux;
    cout<<"el valor de n1= "<< n1 << endl;
    cout<< "el valor de n2= "<< n2 << endl;
    cout<< "el valor de n3= "<< n3 << endl;

}