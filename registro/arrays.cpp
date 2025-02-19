#include <iostream>
#include <iomanip>
using namespace std;
struct estudiante{
    int id;
    string nombres;
    float notap;
};

main (){
    int ne;
    float suma=0, promedio=0;
    bool ordena= true;
    cout << "ingrese la cantidad de estudiantes: ";
    cin >> ne;
    estudiante estudiantes[ne], aux;
    for (int i = 0; i < ne; i++){
    cout << "ingrese el id del estudiante: \n";
    cin >> estudiantes[i].id;
    cout << "ingrese el nombre del estudiante: \n";
    cin.ignore();
    getline(cin, estudiantes[i].nombres);
    cout << "ingrese la nota del estudiante: \n";
    cin >> estudiantes[i].notap;
}
cout << "datos ingresados: \n";
cout << setw (5) << "ID" << setw (10) << "nombres" << setw (20) << "notas" << endl;
for (int i = 0; i < ne; i++){
    cout << setw (3);
cout <<estudiantes[i].id<<setw (12);
cout <<estudiantes[i].nombres<<setw (15);
cout <<estudiantes[i].notap<<endl;
suma += estudiantes[i].notap;
}
cout << "el promedio es: " << (float)suma / ne << endl;
cout << "listado de estudiantes de mayor nota a menor nota: \n";
for (int i = 0; i < ne-1 && ordena; i++){
    ordena=false;
    for (int j = 0; j < ne ; j++){
        if(estudiantes[j].notap< estudiantes[j+1].notap){
            aux= estudiantes[j+1];
            estudiantes[j+1]= estudiantes[j];
            estudiantes[j]= aux;
            ordena=true;
        }}}
        for (int i = 0; i < ne; i++){
            cout << setw (3);
        cout <<estudiantes[i].id<<setw (12);
        cout <<estudiantes[i].nombres<<setw (15);
        cout <<estudiantes[i].notap<<endl;

}}