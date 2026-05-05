#include <iostream>
#include <iomanip>
using namespace std;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicacion(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b == 0) {
        cout << "Error: División por cero" << endl;
        return 0;
    }
    return a / b;
}

void calculadora() {
    cout << "=== CALCULADORA ===" << endl;
    
    while (true) {
        cout << "\n1. Suma\n2. Resta\n3. Multiplicación\n4. División\n5. Salir" << endl;
        cout << "Seleccione una opción (1-5): ";
        
        int opcion;
        cin >> opcion;
        
        if (opcion == 5) {
            cout << "¡Hasta luego!" << endl;
            break;
        }
        
        double num1, num2;
        cout << "Ingrese el primer número: ";
        cin >> num1;
        cout << "Ingrese el segundo número: ";
        cin >> num2;
        
        double resultado;
        switch (opcion) {
            case 1:
                resultado = suma(num1, num2);
                cout << fixed << setprecision(2);
                cout << "Resultado: " << resultado << endl;
                break;
            case 2:
                resultado = resta(num1, num2);
                cout << fixed << setprecision(2);
                cout << "Resultado: " << resultado << endl;
                break;
            case 3:
                resultado = multiplicacion(num1, num2);
                cout << fixed << setprecision(2);
                cout << "Resultado: " << resultado << endl;
                break;
            case 4:
                resultado = division(num1, num2);
                if (num2 != 0) {
                    cout << fixed << setprecision(2);
                    cout << "Resultado: " << resultado << endl;
                }
                break;
            default:
                cout << "Opción inválida" << endl;
        }
    }
}

int main() {
    calculadora();
    return 0;
}