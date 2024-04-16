# Programas del Previo 6

Clase 6: C++ - Algoritmos de ordenamiento

Todos los archivos se pueden compilar y ejecutar de la siguiente forma:

Compilar:

```bash
g++ -o <nombre_archivo>.exe .\<nombre_archivo>.cpp
```

Ejecutar:

```bash
.\<nombre_archivo>.exe
```

| Función               | Archivo(s)             | Compilar                            | Ejecutar                            |
| --------------------- | ---------------------- | ----------------------------------- | ----------------------------------- |
| Algoritmo Bubble Sort | `bubblesort.cpp`       | `g++ -o bubblesort.exe .\bubblesort.cpp` | `.\bubblesort.exe`       |
| Algoritmo Insertion Sort | `insertionsort.cpp` | `g++ -o insertionsort.exe .\insertionsort.cpp` | `.\insertionsort.exe` |
| Algoritmo Quick Sort  | `quicksort.cpp`        | `g++ -o quicksort.exe .\quicksort.cpp` | `.\quicksort.exe`        |
| Algoritmo Selection Sort | `selectionsort.cpp` | `g++ -o selectionsort.exe .\selectionsort.cpp` | `.\selectionsort.exe` |

## Descripción de Archivos

- `bubblesort.cpp`: Implementación del algoritmo de ordenamiento Bubble Sort.
- `insertionsort.cpp`: Implementación del algoritmo de ordenamiento Insertion Sort.
- `quicksort.cpp`: Implementación del algoritmo de ordenamiento Quick Sort.
- `selectionsort.cpp`: Implementación del algoritmo de ordenamiento Selection Sort.

## Compilación // Método Makefile

Para compilar todos los programas, se ejecuta el comando "make" desde la línea de comandos en el directorio donde se encuentra el "Makefile".

```bash
make
```

## Ejecución // Método Makefile

Una vez que los programas se han compilado, se puede ejecutar cualquier ejecutable utilizando el comando ./ seguido del nombre del programa sin la extensión .cpp. Por ejemplo:

```bash
./holaMundo.exe
```

## Limpieza

Para eliminar todos los archivos ejecutables y otros archivos generados durante la compilación, se puede usar el comando make clean:

```bash
make clean
```

---
