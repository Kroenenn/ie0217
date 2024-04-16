// Ordenamiento por inserción en C++
#include <iostream>
using namespace std;

// Función para imprimir un arreglo
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Función para realizar el ordenamiento por inserción
void insertionSort(int array[], int size) {
    for (int step = 1; step < size; step++) {
        int key = array[step]; // esto loque hace es que se toma el valor de la posicion 1 del arreglo y se guarda en key
        int j = step - 1; // esto sirve para que se tome el valor de la posicion anterior a la que se esta evaluando

        // Comparar la clave con cada elemento a la izquierda de ella
        // hasta encontrar un elemento menor que ella.
        // Para orden descendente, cambiar key<array[j] a key>array[j].
        while (key < array[j] && j >= 0) { // esto sirve para que se haga la comparacion de los valores del arreglo
            array[j + 1] = array[j]; // esto sirve para que se haga el cambio de los valores del arreglo
            --j; // esto sirve para que se haga la comparacion de los valores del arreglo
        }
        array[j + 1] = key; // esto sirve para que se haga el cambio de los valores del arreglo 
    }
}

// código principal
int main() {
    int data[] = {9, 5, 1, 4, 3};
    int size = sizeof(data) / sizeof(data[0]);
    insertionSort(data, size);
    cout << "Arreglo ordenado en orden ascendente:\n";
    printArray(data, size);
    return 0;
}