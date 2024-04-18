#include "sortAlgorithms.hpp"

int main() {
    const int SIZE = 10000;
    int arr[SIZE];

    generateRandomArray(arr, SIZE); // Se llama a la función para generar un arreglo de números aleatorios para todos los algoritmos de ordenamiento debido a que se necesita un arreglo desordenado para cada uno de ellos.

    measuringSortingTime(bubbleSort, arr, SIZE, "Bubble Sort");
    generateRandomArray(arr, SIZE);
    measuringSortingTime(selectionSort, arr, SIZE, "Selection Sort");
    generateRandomArray(arr, SIZE);
    measuringSortingTime(insertionSort, arr, SIZE, "Insertion Sort");
    generateRandomArray(arr, SIZE);
    measuringQuickSortTime(quickSort, arr, 0, SIZE - 1, "Quick Sort"); // En este caso es SIZE - 1 porque el índice alto es el tamaño del arreglo menos uno.
    
    return 0;

}