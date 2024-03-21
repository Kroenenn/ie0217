#include "Funciones.hpp"

void agregarContacto(Contacto listaContactos[], int &numContactos) { 
    Contacto nuevoContacto; // Esto lo que hace es crear un nuevo contacto de tipo Contacto
    std::cout << "Ingrese el nombre del contacto: ";
    std::cin >> nuevoContacto.nombre; // Esto lo que hace es copiar el contenido de nuevoContacto a la posición numContactos del arreglo listaContactos
    std::cout << "Ingrese el numero de telefono del contacto: ";
    std::cin >> nuevoContacto.telefono; // Esto lo que hace es copiar el contenido de nuevoContacto a la posición numContactos del arreglo listaContactos

    listaContactos[numContactos++] = nuevoContacto; // Esto lo que hace es copiar el contenido de nuevoContacto a la posición numContactos del arreglo listaContactos
}

void mostrarContactos(const Contacto listaContactos[], int numContactos) {
    std::cout << "\nLista de contactos:\n" << std::endl;
    for (int i = 0; i < numContactos; ++i) { // Esto lo que hace es recorrer el arreglo listaContactos
        std::cout << "Nombre: " << listaContactos[i].nombre << ", Teléfono: " << listaContactos[i].telefono << std::endl; // Esto lo que hace es imprimir el contenido de la posición i del arreglo listaContactos
    }
}

void buscarContacto(const Contacto listaContactos[], int numContactos) {
    std::string nombreBusqueda;
    std::cout << "Ingrese el nombre del contacto a buscar: ";
    std::cin >> nombreBusqueda;
    bool encontrado = false; // Se utiliza encontrado para saber si se encontró el contacto, es de tipo booleano porque solo puede tener dos valores, true o false

    for (int i = 0; i < numContactos; ++i) { // Esto lo que hace es recorrer el arreglo listaContactos
        if (listaContactos[i].nombre == nombreBusqueda) { // Esto lo que hace es comparar el contenido de la posición i del arreglo listaContactos con el contenido de nombre
            std::cout << "Nombre: " << listaContactos[i].nombre << ", Teléfono: " << listaContactos[i].telefono << "\n"; // Esto lo que hace es imprimir el contenido de la posición i del arreglo listaContactos
            encontrado = true; // Esto lo que hace es asignar true a la variable encontrado
            break; // Esto lo que hace es salir del ciclo for, ya que se encontró el contacto
        }
    }
    if (!encontrado) // Esto lo que hace es verificar si encontrado es falso
        std::cout << "Contacto no encontrado \n";
}