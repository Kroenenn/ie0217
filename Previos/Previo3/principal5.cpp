// Programa para mostrar la dirección de cada elemento de un array
#include <iostream>
using namespace std;

int main() {
    float arreglo[3]; // Declarar un array de 3 floats
    // Declarar variable puntero
    float *puntero;

    // Mostrar dirección usando arrays:
    cout << "Mostrando dirección usando arrays: " << endl;
    // Usar bucle for para imprimir direcciones de todos los elementos del array
    for (int i = 0; i < 3; ++i) {
        cout << "&arreglo[" << i << "] = " << &arreglo[i] << endl;
    }

    // ptr = &arr[0]
    puntero = arreglo; // Asignar dirección del array al puntero

    // Mostrar dirección usando punteros:
    cout << "\nMostrando dirección usando punteros: " << endl;

    // Usar bucle for para imprimir direcciones de todos los elementos del array
    // Usando notación de punteros
    for (int i = 0; i < 3; ++i) {
        cout << "puntero + " << i << " = " << puntero + i << endl;
    }

    return 0;
}
