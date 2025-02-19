#include <iostream>
using namespace std;
struct rAutomoviles{
    int codigoA;
    string marca;
    string modelo;
    int anio;
    string placa;
}r1;
struct clienteVideoclub{
    string nombre;
    string direccion;
    int telefono;
    int adeuda;
    int codigocl;
}c1;
struct licenciaManejo{
    string nombres;
    string apellidoPaterno;
    string apellidoMaterno;
    string fechaDesde;
    string fechaVencimiento;
    string nacionalidad;
    string grupoSanguineo;
    string tipoLicencia;
    string restricciones;
    string donaOrganos;
    string direccion;
    int cedula;
}l1;
struct tarjetaCredito{
    string nombre;
    string fechaVencimiento;
    int numeroTarjeta;
    int saldo;
    int limite;
}t1;