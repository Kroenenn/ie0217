// main.cpp

#include "Contacto.hpp"
#include "HashTable.hpp"
#include <iostream>
#include <string>

int main() {
    HashTable hashTable;
    std::string nombre, telefono;
    ListaLocal listaLocal;
    char opcion;
    bool ejecutando = true;

    while (ejecutando) {
        std::cout << "-----------------------------\n";
        std::cout << "Menú de Gestión de Contactos:\n";
        std::cout << "1. Agregar contacto\n";
        std::cout << "2. Eliminar contacto\n";
        std::cout << "3. Mostrar todos los contactos en orden alfabético\n";
        std::cout << "4. Mostrar tabla hash\n";
        std::cout << "5. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        std::cin.ignore(); // Limpieza de buffer de entrada

        switch (opcion) {
            case '1':
                std::cout << "-----------------------------\n";
                std::cout << "Ingrese el nombre del contacto: ";
                std::getline(std::cin, nombre);
                std::cout << "Ingrese el número de teléfono: ";
                std::getline(std::cin, telefono);
                listaLocal.agregarContacto(nombre.c_str(), telefono.c_str());
                hashTable.agregarContacto(nombre, telefono);
                break;
            case '2': {
                std::cout << "-----------------------------\n";
                std::cout << "Contactos disponibles en el celular:\n";
                listaLocal.imprimirSoloNombres();
                std::cout << "Contactos disponibles en la nube:\n";
                hashTable.mostrarTodosLosContactos();
                
                std::cout << "Ingrese el nombre del contacto a eliminar: ";
                std::getline(std::cin, nombre);

                char opcionEliminar;
                std::cout << "Desea eliminar el contacto solo del celular (c), solo de la nube (n), o de ambos (b)? (c/n/b): ";
                std::cin >> opcionEliminar;
                std::cin.ignore(); // Limpieza de buffer de entrada

                bool eliminadoCelular = false;
                bool eliminadoNube = false;

                switch (opcionEliminar) {
                    case 'c':
                        if (listaLocal.eliminarContactoLocal(nombre)) {
                            std::cout << "El contacto ha sido eliminado del celular.\n";
                        } else {
                            std::cout << "El contacto no se encontró en el celular.\n";
                        }
                        break;
                    case 'n':
                        if (hashTable.eliminarContacto(nombre, true)) {
                            std::cout << "El contacto ha sido eliminado de la nube.\n";
                        } else {
                            std::cout << "El contacto no se encontró en la nube.\n";
                        }
                        break;
                    case 'b': {
                        
                        bool eliminadoCelular = listaLocal.eliminarContactoLocal(nombre);
                        bool eliminadoNube = hashTable.eliminarContacto(nombre, true);
                        if (eliminadoCelular || eliminadoNube) {
                            std::cout << "El contacto ha sido eliminado de ambos.\n";
                        } else {
                            std::cout << "El contacto no se encontró.\n";
                        }
                        break;
                    }
                    default:
                        std::cout << "Opción no válida.\n";
                        break;
                }
                break;
            }
            case '3': {
                std::cout << "-----------------------------\n";
                std::cout << "Contactos locales en orden alfabético:\n";
                listaLocal.imprimirListaOrdenada();;
                break;
            }
            case '4':
                std::cout << "-----------------------------\n";
                hashTable.imprimirHashTable();
                break;
            case '5':
                std::cout << "-----------------------------\n";
                std::cout << "Saliendo del programa...\n";
                ejecutando = false;
                break;
            default:
                std::cout << "-----------------------------\n";
                std::cout << "Opción no válida. Intente de nuevo.\n";
        }
    }

    return 0;
}