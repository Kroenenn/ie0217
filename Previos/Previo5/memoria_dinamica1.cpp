#include <iostream>
using namespace std;

int main() {

    // Declarar un puntero a entero
    int* pointInt;

    // Declarar un puntero a flotante
    float* pointFloat;

    // Asignar memoria dinámicamente
    pointInt = new int; // El new int asigna un entero de 4 bytes en el heap y devuelve la dirección de memoria.
    pointFloat = new float;

    // Asignar valor a la memoria
    *pointInt = 45;
    *pointFloat = 45.45f; // Se usa f para indicar que es un flotante

    // Imprimir valores
    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    // Liberar memoria
    delete pointInt; // Se libera la memoria asignada en el heap, esto es necesario para evitar fugas de memoria.
    delete pointFloat;

    return 0;
}
