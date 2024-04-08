#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    float *ptr, *new_ptr;
    ptr = (float*) malloc(5 * sizeof(float)); // malloc asigna memoria en el heap y devuelve un puntero void* que se convierte a float*.
                                              // malloc recibe un argumento que es el tamaño en bytes de la memoria a asignar.


    if(ptr == NULL) {
        cout << "Fallo en asignación de memoria";
        exit(1);
    }

    /* Inicializando bloque de memoria */
    for (int i = 0; i < 5; i++) { // se usa i < 5 porque se asignó memoria para 5 flotantes. El for se usa para inicializar los valores de los flotantes.
        ptr[i] = i * 1.5; // ptr[i] lo que hace es acceder al i-ésimo elemento del arreglo.
    }

    /* Reasignando memoria */
    new_ptr = (float*) realloc(ptr, 10 * sizeof(float)); // realloc reasigna memoria en el heap y devuelve un puntero void* que se convierte a float*.
                                                         // realloc recibe dos argumentos: el puntero a la memoria a reasignar y el nuevo tamaño en bytes.
    if(new_ptr == NULL) { // Si realloc falla, devuelve NULL.
        cout << "Fallo en reasignación de memoria";
        exit(1);
    }

    /* Inicializando bloque de memoria reasignado */
    for (int i = 5; i < 10; i++) { // se usa i < 10 porque se reasignó memoria para 10 flotantes. El for se usa para inicializar los valores de los flotantes.
        new_ptr[i] = i * 2.5;
    }

    cout << "Imprimiendo Valores" << endl;
    for (int i = 0; i < 10; i++) {
        cout << new_ptr[i] << endl;
    }
    free(new_ptr);
    return 0;
}
