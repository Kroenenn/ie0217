// TablaHash.hpp

#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP

#include "Contacto.hpp"

const int TAMANO_TABLA = 25;

struct HashTable {
    ListaContactos tabla[TAMANO_TABLA];

    HashTable();
    ~HashTable();
    int funcionHash(std::string clave);
    void agregarContacto(std::string nombre, std::string telefono);
    bool eliminarContacto(std::string nombre, bool eliminarDeMemoria);
    Contacto* buscarContacto(std::string nombre);
    void imprimirHashTable();
    void mostrarTodosLosContactos();

    void fusionarYOrdenarListas(ListaContactos& listaMaestra);
};

#endif // HASHTABLE_HPP