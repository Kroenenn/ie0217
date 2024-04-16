// Contacto.cpp

#include "Contacto.hpp"
#include <iostream>

void Contacto::init(const char* nom, const char* tel) {}

void Contacto::cleanup() {}

// Constructor de ListaContactos
ListaContactos::ListaContactos() : cabeza(nullptr) {}

// Destructor de ListaContactos
ListaContactos::~ListaContactos() {}

// Método para agregar un contacto a la lista enlazada

void ListaContactos::agregarContacto(const char* nombre, const char* telefono) {}

// Método para eliminar un contacto de la lista enlazada
bool ListaContactos::eliminarContacto(std::string nombre) {}

// Método para imprimir todos los contactos de la lista enlazada
void ListaContactos::imprimirLista() {
}

void ListaContactos::imprimirSoloNombres() {}


bool ListaContactos::estaVacia() {}

void ListaContactos::agregarContactoOrdenado(std::string nombre, std::string telefono) {}

// Constructor de ListaLocal
ListaLocal::ListaLocal() : cabeza(nullptr) {}

// Destructor de ListaLocal
ListaLocal::~ListaLocal() {}

// Método para agregar un contacto a la lista local
void ListaLocal::agregarContacto(const char* nombre, const char* telefono) {}

// Método para eliminar un contacto de la lista local
bool ListaLocal::eliminarContactoLocal(const std::string& nombre) {}

// Método para imprimir todos los contactos de la lista local
void ListaLocal::imprimirLista() {}

// Método para verificar si la lista local está vacía
bool ListaLocal::estaVacia() {}

// Método para imprimir solo los nombres de los contactos de la lista local
void ListaLocal::imprimirSoloNombres() {}