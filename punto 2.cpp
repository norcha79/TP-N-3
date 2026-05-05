#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int contarPalabras(string cadena) {
    stringstream ss(cadena);
    string palabra;
    int contador = 0;
    
    while (ss >> palabra) {
        contador++;
    }
    return contador;
}

int main() {
    cout << "=== CONTADOR DE PALABRAS ===" << endl;
    cout << "Ingrese una cadena de texto: ";
    
    string cadena;
    getline(cin, cadena);
    
    int cantidad = contarPalabras(cadena);
    cout << "La cadena contiene " << cantidad << " palabra(s)" << endl;
    
    return 0;
}