#include "Funciones.hpp"
#include <iostream>
using namespace std;

int main() {
    Libro* listaLibros = nullptr; // Se inicializa la lista de libros como nula, Libro* es un puntero a un libro
    int opcion;

    do{

        cout << "Seleccione una opción:" << endl;
        cout << "1. Agregar libro" << endl;
        cout << "2. Mostrar todos los libros" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;

        switch (opcion){
            case AGREGAR_LIBRO:
                agregarLibro(listaLibros);
                break;
            case MOSTRAR_LIBROS:
                mostrarLibros(listaLibros);
                break;
            case SALIR:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }

    } while (opcion != 3);

    liberarMemoria(listaLibros);

    return 0;
}
