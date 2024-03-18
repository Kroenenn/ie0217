#include <iostream>
using namespace std;

// Función para mostrar un número entero y un número flotante
void displayNum(int n1, float n2) {
    cout << "El número entero es " << n1 << endl;
    cout << "El número flotante es " << n2 << endl;
}

int main() {
    int num1 = 5; // Declaración/inicialización de una variable entera
    double num2 = 5.5; // Declaración/inicialización de una variable de tipo double

    // Llamada a la función displayNum con num1 y num2 como argumentos
    displayNum(num1, num2);

    return 0;
}
