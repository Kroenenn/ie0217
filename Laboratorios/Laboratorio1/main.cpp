#include <iostream>
#include "Contacto.hpp"
#include "Funciones.hpp"

#define MAX_CONTACTOS 100

enum Opciones { // Esto lo que hace es declarar un tipo de dato enumerado llamado Opciones
    AGREGAR = 1,
    MOSTRAR,
    BUSCAR,
    SALIR
};

int main() {
    Contacto listaContactos[MAX_CONTACTOS]; // Esto lo que hace es declarar un arreglo de Contacto de tamaño MAX_CONTACTOS
    int numContactos = 0;
    int opcion;
    do {
        std::cout << "\nMenu:\n" << std::endl;
        std::cout << "1. Agregar contacto" << std::endl;
        std::cout << "2. Mostrar contactos" << std::endl;
        std::cout << "3. Buscar contacto" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Ingrese su opción: ";
        std::cin >> opcion;

        switch (opcion){
            case AGREGAR:
                agregarContacto(listaContactos, numContactos); // Esto lo que hace es llamar a la función agregarContacto, pasándole como argumentos listaContactos y numContactos
                break;
            case MOSTRAR:
                mostrarContactos(listaContactos, numContactos); // Esto lo que hace es llamar a la función mostrarContactos, pasándole como argumentos listaContactos y numContactos
                break;
            case BUSCAR:
                buscarContacto(listaContactos, numContactos); // Esto lo que hace es llamar a la función buscarContacto, pasándole como argumentos listaContactos y numContactos
                break;
            case SALIR:
                std::cout << "Saliendo del programa...\n" << std::endl;
                break;
            default:
                std::cout << "Opción inválida. Intente de nuevo...\n" << std::endl;
                break;
        }
    } while (opcion != SALIR); // Esto lo que hace es repetir el ciclo do-while mientras la variable opcion sea diferente de SALIR
    return 0;
}

