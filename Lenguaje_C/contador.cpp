#include <iostream>
using namespace std;
void counter(int n)
{
if (n==0)
    return;
else
    {
        cout << "valor de n "<<n<< endl;
        counter (n-1);
        cout << "valor de n despues del control "<<n<< endl;
        return;
    }
}
main ()
{
int contador = 3;
 counter (contador);
}
