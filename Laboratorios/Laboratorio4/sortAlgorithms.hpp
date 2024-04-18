#ifndef SORT_ALGORITHMS_HPP
#define SORT_ALGORITHMS_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <string>

using namespace std;
using namespace std::chrono; // Para utilizar la librería de tiempo de C++.

void bubbleSort(int arr[], int n); // Prototipo de la función bubbleSort, se le pasa un arreglo de enteros y el tamaño del arreglo.
void selectionSort(int arr[], int n); // Prototipo de la función selectionSort, se le pasa un arreglo de enteros y el tamaño del arreglo.
void insertionSort(int arr[], int n); // Prototipo de la función insertionSort, se le pasa un arreglo de enteros y el tamaño del arreglo.
void quickSort(int arr[], int low, int high); // Prototipo de la función quickSort, se le pasa un arreglo de enteros, el índice bajo y el índice alto.
 
int partition(int arr[], int low, int high); // Prototipo de la función partition, se le pasa un arreglo de enteros, el índice bajo y el índice alto.

void generateRandomArray(int arr[], int n); // Prototipo de la función generateRandomArray, se le pasa un arreglo de enteros y el tamaño del arreglo.

void measuringSortingTime(void (*sortingAlgorithm)(int[], int), int arr[], int n, string algorithmName); // Prototipo de la función measuringSortingTime, se le pasa un puntero a una función de ordenamiento, un arreglo de enteros, el tamaño del arreglo y el nombre del algoritmo de ordenamiento.
                                                                                                         // Se utiliza para medir el tiempo de ejecución de los algoritmos de ordenamiento bubbleSort, selectionSort e insertionSort.
                                                                                                         // El puntero a la función de ordenamiento se utiliza para poder medir el tiempo de ejecución de los tres algoritmos de ordenamiento con una sola función.
void measuringQuickSortTime(void (*sortingAlgorithm)(int[], int, int), int arr[], int low, int high, string algorithmName); // Prototipo de la función measuringQuickSortTime, se le pasa un puntero a una función de ordenamiento, un arreglo de enteros, el índice bajo, el índice alto y el nombre del algoritmo de ordenamiento.

#endif
