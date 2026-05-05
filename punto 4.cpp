#include <iostream>
#include <string>
using namespace std;

bool buscarPalabra(string cadena, string palabra) {
    // Convertir a minúsculas para búsqueda insensible a mayúsculas
    for (char& c : cadena) c = tolower(c);
    for (char& c : palabra) c = tolower(c);
    
    size_t pos = cadena.find(palabra);
    return pos != string::npos;
}

void imprimirResultado(bool encontrada, string palabra) {
    if (encontrada) {
        cout << "✓ La palabra '" << palabra << "' SÍ se encuentra en la cadena" << endl;
    } else {
        cout << "✗ La palabra '" << palabra << "' NO se encuentra en la cadena" << endl;
    }
}

int main() {
    cout << "=== BUSCADOR DE PALABRAS ===" << endl;
    cout << "Ingrese la cadena: ";
    
    string cadena, palabra;
    getline(cin, cadena);
    cout << "Ingrese la palabra a buscar: ";
    getline(cin, palabra);
    
    bool encontrada = buscarPalabra(cadena, palabra);
    imprimirResultado(encontrada, palabra);
    
    return 0;
}