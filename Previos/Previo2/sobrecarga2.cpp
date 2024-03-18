#include <iostream>
using namespace std;

// Función con dos parámetros
void display(int var1, double var2) {
    cout << "Número entero: " << var1;
    cout << " y número doble: " << var2 << endl;
}

// Función con un solo parámetro de tipo double
void display(double var) {
    cout << "Número doble: " << var << endl;
}

// Función con un solo parámetro de tipo int
void display(int var) {
    cout << "Número entero: " << var << endl;
}

int main() {
    int a = 5; // Declaración de variable entera
    double b = 5.5; // Declaración de variable double

    // Llamar a función con parámetro de tipo int
    display(a);

    // Llamar a función con parámetro de tipo double
    display(b);

    // Llamar a función con dos parámetros
    display(a, b);

    return 0;
}
