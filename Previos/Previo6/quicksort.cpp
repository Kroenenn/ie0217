#include <iostream>
using namespace std;

// Función para intercambiar dos elementos
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Esta función toma el último elemento como pivote, lo coloca en su posición correcta
// en el arreglo ordenado, y coloca todos los menores que el pivote a la izquierda
// y todos los mayores a la derecha de él.
int partition(int array[], int low, int high) {
    int pivot = array[high];  // pivote
    int i = (low - 1);  // Índice del elemento más pequeño

    for (int j = low; j <= high - 1; j++) {
        // Si el elemento actual es menor que el pivote
        if (array[j] < pivot) {
            i++;  // incrementar el índice del elemento más pequeño
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

// Función principal para realizar el QuickSort
void quickSort(int array[], int low, int high) {
    if (low < high) {
        // pi es el índice de partición, array[pi] está ahora en su lugar
        int pi = partition(array, low, high);

        // Ordenar separadamente los elementos antes y después de la partición
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

// Función para imprimir un arreglo
void printArray(int array[], int size) {
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

// Código principal para probar las funciones de arriba
int main() {
    int data[] = {9, -3, 5, 2, 6, 8, -6, 1, 3};
    int n = sizeof(data) / sizeof(data[0]);
    quickSort(data, 0, n - 1);
    cout << "Arreglo ordenado: \n";
    printArray(data, n);
    return 0;
}
