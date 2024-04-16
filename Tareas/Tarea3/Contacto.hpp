// Contacto.hpp

#ifndef CONTACTO_HPP
#define CONTACTO_HPP

#include <string>

struct Contacto {
    char* nombre;
    char* telefono;
    Contacto* siguiente;
    bool eliminadoDeMemoria;
    void init(const char* nombre, const char* telefono);
    void cleanup();
};

struct ListaContactos {
    Contacto* cabeza;

    ListaContactos();
    ~ListaContactos();
    void agregarContacto(const char* nombre, const char* telefono);
    bool eliminarContacto(std::string nombre);
    void imprimirLista();
    bool estaVacia();
    void imprimirSoloNombres();
    
    void agregarContactoOrdenado(std::string nombre, std::string telefono);
};

struct ListaLocal {
    Contacto* cabeza;

    ListaLocal();
    ~ListaLocal();
    void agregarContacto(const char* nombre, const char* telefono);
    bool eliminarContactoLocal(const std::string& nombre);
    void imprimirLista();
    bool estaVacia();
    void imprimirSoloNombres();
};

#endif // CONTACTO_HPP