// Contacto.cpp

#include "Contacto.hpp"
#include <iostream>
#include <cstdlib>
#include <cstring>

void Contacto::init(const char* nom, const char* tel) {
    nombre = (char*)malloc(strlen(nom) + 1); // Se asigna memoria para el nombre
    strcpy(nombre, nom); //strcpy copia el contenido de nom a nombre
    telefono = (char*)malloc(strlen(tel) + 1); // Se asigna memoria para el teléfono
    strcpy(telefono, tel); //strcpy copia el contenido de tel a telefono
    siguiente = nullptr; // El siguiente contacto es nulo, esto es porque es el último contacto en la lista enlazada
}

void Contacto::cleanup() {
    free(nombre);
    free(telefono);
    nombre = nullptr;
    telefono = nullptr;
    siguiente = nullptr;
}

// Constructor de ListaContactos
ListaContactos::ListaContactos() : cabeza(nullptr) {}

// Destructor de ListaContactos
ListaContactos::~ListaContactos() {
    Contacto* actual = cabeza; // Se inicia en la cabeza de la lista
    while (actual != nullptr) { // Mientras no se llegue al final de la lista
        Contacto* aEliminar = actual; // Se guarda el contacto actual en una variable auxiliar
        actual = actual->siguiente; // Se avanza al siguiente contacto
        aEliminar->cleanup();  // Se limpian los datos del contacto
        free(aEliminar);       // Se libera la memoria del contacto
    }
}

// Método para agregar un contacto a la lista enlazada

void ListaContactos::agregarContacto(const char* nombre, const char* telefono) {
    Contacto* nuevoContacto = (Contacto*)malloc(sizeof(Contacto)); // Se asigna memoria para un nuevo contacto
    if (nuevoContacto != nullptr) { // Si se asignó memoria correctamente
        nuevoContacto->init(nombre, telefono); // Se inicializan los datos del nuevo contacto
        nuevoContacto->siguiente = cabeza; // El siguiente del nuevo contacto es la cabeza de la lista
        cabeza = nuevoContacto; // La cabeza de la lista es el nuevo contacto
    } else {
        // Manejo de error si malloc falla
        std::cout << "Error: No se pudo asignar memoria para el nuevo contacto.\n";
    }
}

// Método para eliminar un contacto de la lista enlazada
bool ListaContactos::eliminarContacto(std::string nombre) {
    Contacto *actual = cabeza; // Se inicia en la cabeza de la lista, se utiliza *actual para recorrer la lista y encontrar el contacto a eliminar 
    Contacto *anterior = nullptr; // Se utiliza *anterior para enlazar el contacto anterior al contacto a eliminar

    while (actual != nullptr) { // Mientras no se llegue al final de la lista
        if (nombre == actual->nombre) { // Si se encuentra el contacto con el nombre dado
            if (anterior != nullptr) { // Si el contacto no es el primero en la lista
                anterior->siguiente = actual->siguiente; // Se enlaza el anterior con el siguiente
            } else {
                cabeza = actual->siguiente; // Si el contacto es el primero, se actualiza la cabeza
            }
            actual->cleanup(); // Se limpian los datos del contacto
            free(actual); // Se libera la memoria del contacto
            return true;
        }
        anterior = actual; // Si no se encuentra el contacto, se actualiza el anterior
        actual = actual->siguiente; // Se avanza al siguiente contacto
    }
    return false;

}

// Método para imprimir todos los contactos de la lista enlazada
void ListaContactos::imprimirLista() {
    Contacto* actual = cabeza; // Se utiliza Contacto* actual para recorrer la lista y encontrar el contacto a imprimir, ya que es un puntero
    while (actual != nullptr) {
        std::cout << "Nombre: " << actual->nombre << ", Teléfono: " << actual->telefono << std::endl;
        actual = actual->siguiente; // Se avanza al siguiente contacto
    }
}

void ListaContactos::imprimirSoloNombres() {
    Contacto* actual = cabeza;
    while (actual != nullptr) {
        std::cout << "\t- " << actual->nombre << std::endl; // Imprime solo el nombre del contacto
        actual = actual->siguiente; // Se avanza al siguiente contacto
    }
}


bool ListaContactos::estaVacia() {
    return cabeza == nullptr;  // Retorna true si la lista está vacía, false si no
}

void ListaContactos::agregarContactoOrdenado(std::string nombre, std::string telefono) {
    // Asignar memoria para un nuevo Contacto
    Contacto* nuevoContacto = (Contacto*)malloc(sizeof(Contacto));
    
    if (nuevoContacto != nullptr) {
        // Asignar memoria y copiar los datos del nombre y teléfono
        // nuevoContacto->nombre es un puntero a un arreglo de caracteres
        // Se asigna memoria para el tamaño del string + 1 para el caracter nulo
        // (char*) es un cast a char* para que malloc pueda asignar memoria para un arreglo de caracteres
        nuevoContacto->nombre = (char*)malloc(nombre.length() + 1);
        strcpy(nuevoContacto->nombre, nombre.c_str());
        nuevoContacto->telefono = (char*)malloc(telefono.length() + 1);
        strcpy(nuevoContacto->telefono, telefono.c_str());
        nuevoContacto->siguiente = nullptr; // esto se hace para que el nuevo contacto sea el último en la lista

        // Caso especial: si la lista está vacía o el nuevo contacto debe ir al principio
        if (cabeza == nullptr || std::string(cabeza->nombre) > nombre) {
            // cabeza->nombre es el nombre del primer contacto en la lista
            // Si la lista está vacía, entonces el nuevo contacto es el primer contacto
            // Si el nombre del primer contacto es mayor que el nombre del nuevo contacto, entonces el nuevo contacto es el primer contacto
            nuevoContacto->siguiente = cabeza;
            cabeza = nuevoContacto;
            return;
        }
        // Iniciar en la cabeza de la lista
        Contacto* actual = cabeza;

        // Recorrer la lista para encontrar el lugar de inserción
        while (actual->siguiente != nullptr) {
            // Comprobar si el nombre del siguiente contacto es mayor que el nombre del nuevo contacto
            if (std::string(actual->siguiente->nombre) >= nombre) {
                // Si se encuentra un nombre mayor, entonces es aquí se inserta el nuevo contacto
                // actual->siguiente es el contacto después del cual se debe insertar el nuevo contacto
                //por lo que actual->siguiente->nombre lo que hace es que se compara el nombre del siguiente contacto
                // con el nombre del nuevo contacto, si es mayor o igual se inserta el nuevo contacto
                break;
            }
            // Si no, pasar al siguiente contacto en la lista
            actual = actual->siguiente;
        }

        // Cuando salimos del bucle, 'actual' apunta al contacto después del cual debemos insertar el nuevo contacto

        // Inserta el nuevo contacto
        nuevoContacto->siguiente = actual->siguiente; // aqui lo que pasa es que el siguiente del nuevo contacto es el siguiente del actual
        actual->siguiente = nuevoContacto; // y el siguiente del actual es el nuevo contacto
    } else {
        // Manejo de error si malloc falla
        std::cout << "Error: No se pudo asignar memoria para el nuevo contacto.\n";

    }
}

// Constructor de ListaLocal
ListaLocal::ListaLocal() : cabeza(nullptr) {}

// Destructor de ListaLocal
ListaLocal::~ListaLocal() {
    Contacto* actual = cabeza; // Se inicia en la cabeza de la lista
    while (actual != nullptr) {
        // Se usa un puntero auxiliar para guardar el contacto actual
        Contacto* aEliminar = actual; // Se guarda el contacto actual en una variable auxiliar
        actual = actual->siguiente; // Se avanza al siguiente contacto
        aEliminar->cleanup(); 
        free(aEliminar);      
    }
}

// Método para agregar un contacto a la lista local
void ListaLocal::agregarContacto(const char* nombre, const char* telefono) { // Se utiliza const char* para que se pueda pasar un string como argumento
    // const char* es un puntero a un arreglo de caracteres constantes
    Contacto* nuevoContacto = (Contacto*)malloc(sizeof(Contacto)); // Se asigna memoria para un nuevo contacto
    if (nuevoContacto != nullptr) { // Si se asignó memoria correctamente
        nuevoContacto->init(nombre, telefono); // Se inicializan los datos del nuevo contacto
        nuevoContacto->siguiente = cabeza; // El siguiente del nuevo contacto es la cabeza de la lista
        cabeza = nuevoContacto; // La cabeza de la lista es el nuevo contacto, esto es porque es el último contacto en la lista enlazada.
    } else {
        // Manejo de error si malloc falla
        std::cout << "Error: No se pudo asignar memoria para el nuevo contacto.\n";
    }
}

// Método para eliminar un contacto de la lista local
bool ListaLocal::eliminarContactoLocal(const std::string& nombre) {
    Contacto *actual = cabeza, *anterior = nullptr;
    while (actual != nullptr) { // Mientras no se llegue al final de la lista
        if (nombre == actual->nombre) { // Si se encuentra el contacto con el nombre dado
            if (anterior) { // Si el contacto no es el primero en la lista
                anterior->siguiente = actual->siguiente; // Se enlaza el anterior con el siguiente
            } else {
                cabeza = actual->siguiente; // Si el contacto es el primero, se actualiza la cabeza
            }
            actual->cleanup(); // Se limpian los datos del contacto
            free(actual); // Se libera la memoria del contacto
            return true;
        }
        anterior = actual; // Si no se encuentra el contacto, se actualiza el anterior
        actual = actual->siguiente; // Se avanza al siguiente contacto
    }
    return false;
}

// Método para imprimir todos los contactos de la lista local
void ListaLocal::imprimirLista() {
    Contacto* actual = cabeza;
    while (actual != nullptr) {
        std::cout << "Nombre: " << actual->nombre << ", Teléfono: " << actual->telefono << std::endl;
        actual = actual->siguiente;
    }
}

// Método para verificar si la lista local está vacía
bool ListaLocal::estaVacia() {
    return cabeza == nullptr;
}

// Método para imprimir solo los nombres de los contactos de la lista local
void ListaLocal::imprimirSoloNombres() {
    Contacto* actual = cabeza; // Se inicia en la cabeza de la lista
    while (actual != nullptr) { // Mientras no se llegue al final de la lista
        std::cout << "\t- " << actual->nombre << std::endl; // Se imprime el nombre del contacto
        actual = actual->siguiente; // Se avanza al siguiente contacto
    }
}

// Método para ordenar la lista enlazada de contactos por nombre (orden alfabético)
void ListaLocal::ordenarLista() {
    if (cabeza == nullptr || cabeza->siguiente == nullptr) {
        // La lista ya está ordenada si tiene 0 o 1 elementos.
        return;
    }

    Contacto* ordenado = nullptr; // Lista nueva para elementos ordenados.
    Contacto* actual = cabeza; // Comienza desde el principio de la lista desordenada.

    while (actual != nullptr) {
        Contacto* next = actual->siguiente; // Guarda el siguiente elemento.

        // Encuentra la ubicación correcta en la lista ordenada.
        if (ordenado == nullptr || strcmp(actual->nombre, ordenado->nombre) < 0) {
            // Si el elemento actual va al principio de la lista ordenada.
            actual->siguiente = ordenado;
            ordenado = actual;
        } else {
            // Encuentra el elemento antes del cual va 'actual'.
            Contacto* ordenadoActual= ordenado;
            while (ordenadoActual->siguiente != nullptr && strcmp(actual->nombre, ordenadoActual->siguiente->nombre) > 0) {
                ordenadoActual = ordenadoActual->siguiente;
            }
            // Inserta 'current' en la ubicación correcta.
            actual->siguiente = ordenadoActual->siguiente;
            ordenadoActual->siguiente = actual;
        }

        // Avanza al siguiente elemento en la lista desordenada.
        actual = next;
    }

    cabeza = ordenado; // Actualiza la cabeza de la lista con la lista ordenada.
}

// Método para imprimir todos los contactos de la lista local, ya ordenados.
void ListaLocal::imprimirListaOrdenada() {
    ordenarLista(); // Primero ordena la lista.
    imprimirLista(); // Luego imprime la lista ya ordenada.
}