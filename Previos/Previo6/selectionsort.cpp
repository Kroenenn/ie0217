// Ordenamiento por selección en C++
#include <iostream>
using namespace std;

// función para intercambiar la posición de dos elementos
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// función para imprimir un arreglo
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// función para realizar el ordenamiento por selección
void selectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {
            // Para ordenar en orden descendente, cambie > a < en esta línea.
            // Seleccione el elemento mínimo en cada bucle.
            if (array[i] < array[min_idx])
                min_idx = i;
        }
        // poner el mínimo en la posición correcta
        swap(&array[min_idx], &array[step]);
    }
}

// código del conductor
int main() {
    int data[] = {20, 12, 10, 15, 2};
    int size = sizeof(data) / sizeof(data[0]);
    selectionSort(data, size);
    cout << "Arreglo ordenado en orden ascendente:\n";
    printArray(data, size);
    return 0;
}
