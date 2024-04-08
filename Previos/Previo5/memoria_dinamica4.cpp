#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // Asignar memoria para un entero a un puntero
    int* ptr = (int*) malloc(sizeof(int)); // malloc asigna memoria en el heap y devuelve un puntero void* que se convierte a int*.

    // Asignar el valor 5 a la memoria asignada
    *ptr = 5;

    // Mostrar el valor de ptr
    cout << *ptr;

    return 0;
}

// Salida: 5
