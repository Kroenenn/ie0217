// Optimizado bubble sort en C++
#include <iostream>
using namespace std;

// realizar ordenamiento por burbuja
void bubbleSort(int array[], int size) {
    // bucle para acceder a cada elemento del array
    for (int step = 0; step < (size - 1); ++step) {
        // verificar si ocurre intercambio
        int swapped = 0;

        // bucle para comparar dos elementos
        for (int i = 0; i < (size - step - 1); ++i) {
            // comparar dos elementos del array
            // cambiar > a < para ordenar en orden descendente
            if (array[i] > array[i + 1]) {
                // intercambio ocurre si los elementos
                // no están en el orden deseado
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                swapped = 1;
            }
        }

        // si no ocurre intercambio significa que el array ya está ordenado
        // entonces no es necesario más comparaciones
        if (swapped == 0)
            break;
    }
}

// imprimir un array
void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << " " << array[i];
    }
    cout << "\n";
}

int main() {
    int data[] = {-2, 45, 0, 11, -9};

    // encontrar la longitud del array
    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);

    cout << "Array Ordenado en Orden Ascendente:\n";
    printArray(data, size);

    return 0;
}
