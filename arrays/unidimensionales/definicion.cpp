#include <iostream>
using namespace std;
main () {
    int anios [5];//declaracion de un vector de 5 elementos
    int edad [5]={20,25,30,35,40};//declaracion e inicializacion de un vector de 5 elementos
    double estatura []={1.25,1.66,1.78,1.70,1.90};//declaracion e inicializacion de un vector de 5 elementos
    char sexo[5]= {'M','F','M','F','M'};//declaracion e inicializacion deun vector de 5 elementos
    cout << "el primer elemento del vector edad es: "<< edad [0] << endl;
    cout << "el ultimo elemento de estatura es: "<< estatura [4] << endl;
    cout << "el elemento mitad  sexo es: "<< sexo [5/2] << endl;
for (int i=0;i<5;i++){
    cout << "el elemento "<< i << " del vector edad es: "<< edad [i] << endl;    }
for (int i=0;i<5;i++){
    cout << "el elemento "<< i << " del vector sexo es: "<< sexo [i] << endl;
}
}