#include <iostream>
using namespace std;

// Definición de la función para intercambiar valores
void swap(int &n1, int &n2) {
    int temp; // Variable temporal para el intercambio
    temp = n1; // Guarda el valor de n1 en temp
    n1 = n2; // Asigna el valor de n2 a n1
    n2 = temp; // Asigna el valor guardado en temp a n2
}

int main() {
    // Inicializar variables
    int a = 1, b = 2;

    // Mostrar valores antes del intercambio
    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Llamar a la función para intercambiar números
    swap(a, b);

    // Mostrar valores después del intercambio
    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
