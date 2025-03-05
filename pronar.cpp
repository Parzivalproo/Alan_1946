#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

string aMinuscula(const string& s) {
    string resultado = s;
    for (int i = 0; i < resultado.size(); i++) {
        if (resultado[i] >= 'A' && resultado[i] <= 'Z')
            resultado[i] = resultado[i] + ('a' - 'A');
    }
    return resultado;
}

vector<string> separar(const string& s, char delimitador) {
    vector<string> tokens;
    size_t inicio = 0, pos;
    while ((pos = s.find(delimitador, inicio)) != string::npos) {
        tokens.push_back(s.substr(inicio, pos - inicio));
        inicio = pos + 1;
    }
    tokens.push_back(s.substr(inicio));
    return tokens;
}

struct ProductoTotal {
    string producto;
    int total;
};

struct SucursalRecaudacion {
    string sucursal;
    double recaudacion;
};

void procesarEmpresa() {
    ifstream archivoEntrada("empresa.txt");
    if (!archivoEntrada.is_open()) {
        cout << "No se pudo abrir empresa.txt" << endl;
        return;
    }

    vector<ProductoTotal> productos;
    vector<SucursalRecaudacion> sucursales;
    int totalSur = 0;
    int totalTecladoNorte = 0;

    string linea;
    while (getline(archivoEntrada, linea)) {
        if (linea.empty()) continue;

        vector<string> campos = separar(linea, '\t');
        if (campos.size() != 5 && campos.size() != 6) continue;

        int cantidad;
        double precio;
        string producto, sucursal;

        try {
            cantidad = stoi(campos[campos.size() == 6 ? 3 : 2]);
            precio = stod(campos[campos.size() == 6 ? 4 : 3]);
        } catch (...) {
            continue;
        }

        producto = campos[1];
        sucursal = campos[campos.size() == 6 ? 5 : 4];

        bool encontrado = false;
        for (int i = 0; i < productos.size(); i++) {
            if (productos[i].producto == producto) {
                productos[i].total += cantidad;
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            productos.push_back({producto, cantidad});
        }

        string sucursalMinuscula = aMinuscula(sucursal);
        if (sucursalMinuscula == "sur")
            totalSur += cantidad;
        string productoMinuscula = aMinuscula(producto);
        if (productoMinuscula == "teclado" && sucursalMinuscula == "norte")
            totalTecladoNorte += cantidad;

        bool sucursalEncontrada = false;
        for (int j = 0; j < sucursales.size(); j++) {
            if (sucursales[j].sucursal == sucursal) {
                sucursales[j].recaudacion += cantidad * precio;
                sucursalEncontrada = true;
                break;
            }
        }
        if (!sucursalEncontrada) {
            sucursales.push_back({sucursal, cantidad * precio});
        }
    }

    archivoEntrada.close();

    double recaudacionTotal = 0.0;
    for (int i = 0; i < sucursales.size(); i++)
        recaudacionTotal += sucursales[i].recaudacion;

    string sucursalMaxima = "";
    double recaudacionMaxima = -1;
    for (int i = 0; i < sucursales.size(); i++) {
        if (sucursales[i].recaudacion > recaudacionMaxima) {
            recaudacionMaxima = sucursales[i].recaudacion;
            sucursalMaxima = sucursales[i].sucursal;
        }
    }

    ofstream archivoSalida("consolidado.txt");
    archivoSalida << "Totales por producto:\n";
    for (int i = 0; i < productos.size(); i++)
        archivoSalida << productos[i].producto << ": " << productos[i].total << "\n";
    archivoSalida << "\nCantidad total de articulos en la sucursal Sur: " << totalSur << "\n";
    archivoSalida << "Cantidad del articulo 'teclado' en la sucursal Norte: " << totalTecladoNorte << "\n\n";
    archivoSalida << "Recaudacion por sucursal:\n";
    for (int i = 0; i < sucursales.size(); i++)
        archivoSalida << sucursales[i].sucursal << ": " << sucursales[i].recaudacion << "\n";
    archivoSalida << "\nRecaudacion total de la empresa: " << recaudacionTotal << "\n";
    archivoSalida << "Sucursal con mayor recaudacion: " << sucursalMaxima << "\n";
    archivoSalida.close();
}

int main() {
    procesarEmpresa();
    return 0;
}
