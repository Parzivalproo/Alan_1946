#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void llenarVector(int v[], int n){
        srand(time(NULL));
        for(int i=0; i<n; i++){
        //v[i]=rand()%20+1;
        cin >> v[i];
        }
    }
int ordenarBurbuja(int v[], int n){
    int aux, contador= 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            contador++;
            if( v[j]>v[j+1]){
                aux = v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
    return contador;
}
void mostrarVector(int v[], int n){
    for(int i=0; i<n;i++){
        cout << v[i]<<" ";
    }
}
main(){
    int ne;
    cout << "Numero de elemntos: ";
    cin>>ne;
    int vec[ne];
    llenarVector(vec,ne);
    cout<<"Vector original: ";
    mostrarVector(vec,ne);
    cout<<endl;
    cout << "El # de comparaciones burbuja v1: "<<ordenarBurbuja(vec,ne)<<endl;
    cout<< "Vector ordenado: "<<endl;
    mostrarVector(vec,ne);
}