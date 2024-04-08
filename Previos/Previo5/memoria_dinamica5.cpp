#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int)); // calloc asigna memoria en el heap y devuelve un puntero void* que se convierte a int*.
                                         // La diferencia con malloc es que calloc inicializa la memoria asignada a 0.
                                         // calloc recibe dos argumentos: el número de elementos y el tamaño de cada elemento.
    if (!ptr) {
        cout << "Fallo en asignación de memoria";
        exit(1);
    }
    cout << "Inicializando valores..." << endl << endl;
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 2 + 1; // ptr[i] lo que hace es acceder al i-ésimo elemento del arreglo.
    }
    cout << "Valores inicializados" << endl;
    for (int i = 0; i < 5; i++) {
        
        cout << *(ptr + i) << endl;
    }
    free(ptr);
    return 0;
}
