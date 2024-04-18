#include "sortAlgorithms.hpp"

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) { // Este for se encarga de recorrer el arreglo n - 1 veces. Ya que en la última iteración el arreglo ya está ordenado.
        for (int j = 0; j < n - i - 1; ++j) { // Este for se encarga de recorrer el arreglo desde el inicio hasta n - i - 1. Ya que en cada iteración el mayor elemento se coloca al final.
            if (arr[j] > arr[j + 1]) { // Si el elemento actual es mayor que el siguiente elemento, se intercambian.
                int temp = arr[j]; // Se intercambian los elementos utilizando la variable temporal.
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp;
            }
        }
    }
}


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) { // Este for se encarga de recorrer el arreglo n - 1 veces. Ya que en la última iteración el arreglo ya está ordenado.
        int min_index = i; // Se inicializa el índice del elemento más pequeño como el índice actual.
        for (int j = i + 1; j < n; ++j) { // Este for se encarga de recorrer el arreglo desde el índice actual hasta el final.
            if (arr[j] < arr[min_index]) { // Si el elemento actual es menor que el elemento más pequeño, se actualiza el índice del elemento más pequeño.
                min_index = j; 
            }
        }
        int temp = arr[i]; // Se intercambian los elementos utilizando la variable temporal.
        arr[i] = arr[min_index]; 
        arr[min_index] = temp;
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) { // Este for se encarga de recorrer el arreglo desde el segundo elemento hasta el final.
        int key = arr[i]; // Se guarda el elemento actual en una variable temporal.
        int j = i - 1; // Se inicializa el índice del elemento anterior al elemento actual.
        while (j >= 0 && arr[j] > key) { // Mientras el índice sea mayor o igual a 0 y el elemento anterior sea mayor que el elemento actual.
            arr[j + 1] = arr[j]; // Se mueve el elemento anterior una posición hacia adelante.
            --j; // Se disminuye el índice.
        }
        arr[j + 1] = key; // Se coloca el elemento actual en la posición correcta.
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Se selecciona el último elemento como pivote.
    int i = low - 1; // Se inicializa el índice del elemento más pequeño.
    for (int j = low; j < high; ++j) { // Este for se encarga de recorrer el arreglo desde el índice bajo hasta el índice alto.
        if (arr[j] < pivot) { // Si el elemento actual es menor que el pivote.
            ++i; // Se incrementa el índice del elemento más pequeño.
            int temp = arr[i]; // Se intercambian los elementos utilizando la variable temporal.
            arr[i] = arr[j]; 
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1]; // Se intercambian los elementos utilizando la variable temporal. Esto es afuera del for para que el pivote quede en la posición correcta.
    arr[i + 1] = arr[high]; // Se coloca el pivote en la posición correcta.
    arr[high] = temp; 
    return i + 1; // Se retorna el índice del pivote.
}

void quickSort(int arr[], int low, int high) {
    if (low < high) { // Si el índice bajo es menor que el índice alto.
        int pi = partition(arr, low, high); // Se obtiene el índice del pivote.
        quickSort(arr, low, pi - 1); // Se ordena la parte izquierda del pivote.
        quickSort(arr, pi + 1, high); // Se ordena la parte derecha del pivote.
                                      // Es recursivo, por lo que se llama a la función quickSort con la parte izquierda y derecha del pivote.
    }
}

void generateRandomArray(int arr[], int n) {
    srand(time(0)); // Se inicializa la semilla para generar números aleatorios.

    for (int i = 0; i < n; ++i) { // Este for se encarga de recorrer el arreglo.
        arr[i] = rand() % 1000; // Se genera un número aleatorio entre 0 y 999 y se guarda en el arreglo.
    }
}

void measuringSortingTime(void (*sortingAlgorithm)(int[], int), int arr[], int n, string algorithmName) {
    
    high_resolution_clock::time_point start = high_resolution_clock::now(); // Se obtiene el tiempo actual. "high_resolution_clock::time_point" es un tipo de dato que se utiliza para medir el tiempo.
                                                                            // "high_resolution_clock::now()" es una función que se utiliza para obtener el tiempo actual.
    sortingAlgorithm(arr, n); // Se llama a la función de ordenamiento.
    high_resolution_clock::time_point stop = high_resolution_clock::now(); // Se obtiene el tiempo actual después de que la función de ordenamiento termina.

    std::chrono::microseconds duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start); // Se obtiene la duración de la ejecución de la función de ordenamiento.
                                                                                                              // "std::chrono::duration_cast<std::chrono::microseconds>(stop - start)" se utiliza para obtener la duración en microsegundos.
                                                                                                              // std::chrono::duration_cast<std::chrono::microseconds> es una función que se utiliza para convertir el tiempo en microsegundos.
    // auto duration = duration_cast<microseconds>(stop - start);

    cout << "Tiempo de " << algorithmName << ": " << duration.count() << " microsegundos" << endl;

}

void measuringQuickSortTime(void (*sortingAlgorithm)(int[], int, int), int arr[], int low, int high, string algorithmName) {
    
    high_resolution_clock::time_point start = high_resolution_clock::now(); // Se obtiene el tiempo actual.
    sortingAlgorithm(arr, low, high);  // Se llama a la función de ordenamiento. En este caso, quickSort.
    high_resolution_clock::time_point stop = high_resolution_clock::now(); // Se obtiene el tiempo actual después de que la función de ordenamiento termina.

    std::chrono::microseconds duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start); // Se obtiene la duración de la ejecución de la función de ordenamiento.
                                                                                                              // "std::chrono::duration_cast<std::chrono::microseconds>(stop - start)" se utiliza para obtener la duración en microsegundos.
                                                                                                              // std::chrono::duration_cast<std::chrono::microseconds> es una función que se utiliza para convertir el tiempo en microsegundos.
    // auto duration = duration_cast<microseconds>(stop - start);

    cout << "Tiempo de " << algorithmName << ": " << duration.count() << " microsegundos" << endl;

}