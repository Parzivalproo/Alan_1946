#include <iostream>
using namespace std;
main ()
{
    int tabla [3][3];//declarando
    float peso [2][3]= {{1.2,3.4,5.6},{7.8,9.0,1.2}};// declarando e inicializando
    cout <<peso [0][0]<<endl;//imprimiendo el primer elemento de la primera fila y columna
    cout <<peso [1][1]<<endl;//imprimiendo el primer elemento de la segunda fila y primera colummna
 for (int i=0;i<2;i++){
 for (int j=0;j<3;j++){
 cout <<peso [i][j]<<"\t";//imprimiendo todos los elementos de la matriz
 }
 cout << endl;
 }

}