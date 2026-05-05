#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool esAnagrama(string cadena1, string cadena2) {
    // Eliminar espacios y convertir a minúsculas
    cadena1.erase(remove(cadena1.begin(), cadena1.end(), ' '), cadena1.end());
    cadena2.erase(remove(cadena2.begin(), cadena2.end(), ' '), cadena2.end());
    
    for (char& c : cadena1) c = tolower(c);
    for (char& c : cadena2) c = tolower(c);
    
    // Verificar misma longitud
    if (cadena1.length() != cadena2.length()) {
        return false;
    }
    
    // Ordenar y comparar
    sort(cadena1.begin(), cadena1.end());
    sort(cadena2.begin(), cadena2.end());
    
    return cadena1 == cadena2;
}

int main() {
    cout << "=== DETECTOR DE ANAGRAMAS ===" << endl;
    cout << "Ejemplos: 'roma' y 'amor', 'algoritmo' y 'logaritmo'" << endl;
    
    cout << "Ingrese la primera cadena: ";
    string cadena1, cadena2;
    getline(cin, cadena1);
    
    cout << "Ingrese la segunda cadena: ";
    getline(cin, cadena2);
    
    if (esAnagrama(cadena1, cadena2)) {
        cout << "✓ '" << cadena1 << "' y '" << cadena2 << "' SÍ son anagramas" << endl;
    } else {
        cout << "✗ '" << cadena1 << "' y '" << cadena2 << "' NO son anagramas" << endl;
    }
    
    return 0;
}