#include <iostream>
#define GRAVEDAD 9.81
using namespace std;
main()
{
    const int altura=25;
   const float pi=3.1416;
   const char letra='a';
   const string palabra="Hola mundo";
   enum  {amarillo = 1, azul, rojo};
   cout << "Las constantes definidas son : \n";
   cout << "altura: "<<altura<<endl;
   cout << "pi: "<<pi<<endl;
   cout << "letra: "<<letra<<endl;
   cout << "palabra: "<<palabra<<endl;
   cout << "amarillo: "<<amarillo<<endl;
   cout << "azul: "<<azul<<endl;
   cout << "rojo: "<<rojo<<endl;
   cout << "gravedad: "<<GRAVEDAD<<endl;
}