/**
 * @file HashTable.cpp
 * @brief Archivo de implementación de la clase HashTable.
 * 
 * Este archivo contiene la implementación de la clase HashTable.
 * Contiene funciones como agregarContacto, eliminarContacto, buscarContacto, imprimirHashTable,
 * mostrarTodosLosContactos y fusionarYOrdenarListas.
 * 
 * 
 * MIT License
 * 
 * Copyright (c) 2024 Oscar Porras Silesky
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
*/

#include "HashTable.hpp"
#include <iostream>
#include <cstring>

HashTable::HashTable() {
    for (int i = 0; i < TAMANO_TABLA; ++i) {
        tabla[i] = ListaContactos(); // Esto lo que hace es que se inicializa la tabla de contactos con una lista de contactos vacía en cada índice de la tabla
    }
}

HashTable::~HashTable() {

}

int HashTable::funcionHash(std::string clave) {
    unsigned long hash = 0; // Unsigned long es un tipo de dato que puede almacenar valores enteros no negativos
    for (char c : clave) { // Se utiliza char c para recorrer cada caracter de la clave
        hash += c; // Suma el valor ASCII de cada caracter a hash
    }
    return hash % TAMANO_TABLA; // Retorna el residuo de la división de hash entre el tamaño de la tabla
}

void HashTable::agregarContacto(std::string nombre, std::string telefono) {
    int indice = funcionHash(nombre); // Obtiene el índice hash para el nombre del contacto
    
    const char* nombre_c = nombre.c_str(); // Convierte el string a un puntero de char
    const char* telefono_c = telefono.c_str(); // Convierte el string a un puntero de char

    tabla[indice].agregarContacto(nombre_c, telefono_c); // Agrega el contacto a la lista enlazada del índice hash
}

bool HashTable::eliminarContacto(std::string nombre, bool eliminarDeMemoria) {
   // Para borrar tanto de la memoria como de la nube, se debe llamar a eliminarContacto de ListaContactos
    if (eliminarDeMemoria) { // Si se elimina de la memoria y la nube
        for (int i = 0; i < TAMANO_TABLA; ++i) {
            if (tabla[i].eliminarContacto(nombre)) { // Llama a eliminarContacto de ListaContactos para cada lista enlazada
                return true;
            }
        }
        return false;
    } else {
        // Si solo se elimina de la memoria, se debe buscar el contacto y marcarlo como eliminadoDeMemoria
        Contacto* contacto = buscarContacto(nombre); // Busca el contacto en la tabla hash
        if (contacto != nullptr) { // Si se encuentra el contacto
            contacto->eliminadoDeMemoria = true; // Marca el contacto como eliminado de la memoria
            return true;
        }
        return false;
    }
    
    
}

Contacto* HashTable::buscarContacto(std::string nombre) {
    int indice = funcionHash(nombre); // Obtiene el índice hash para el nombre del contacto
    Contacto* actual = tabla[indice].cabeza; // Comienza en la cabeza de la lista enlazada del índice hash

    while (actual != nullptr) { // Recorre la lista enlazada
        if (strcmp(actual->nombre, nombre.c_str()) == 0) { // Compara el nombre del contacto actual con el buscado
            return actual; // Retorna el contacto si el nombre coincide
        }
        actual = actual->siguiente; // Avanza al siguiente contacto en la lista
    }
    return nullptr; // Retorna nullptr si no se encuentra el contacto
}

void HashTable::imprimirHashTable() {
    std::cout << "Tabla Hash Completa:\n";
    for (int i = 0; i < TAMANO_TABLA; ++i) {
        std::cout << "Índice " << i << ":";
        if (!tabla[i].estaVacia()) {
            tabla[i].imprimirLista();
        } else {
            std::cout << " [Vacío]";
        }
        std::cout << std::endl;
    }

}

void HashTable::mostrarTodosLosContactos() {
    for (int i = 0; i < TAMANO_TABLA; ++i) {
        if (!tabla[i].estaVacia()) { 
            tabla[i].imprimirLista();
        }
    }

}

void HashTable::fusionarYOrdenarListas(ListaContactos& listaMaestra) {
    for (int i = 0; i < TAMANO_TABLA; ++i) {
        if (!tabla[i].estaVacia()) { // Si la lista enlazada no está vacía
            Contacto* actual = tabla[i].cabeza; // Comienza en la cabeza de la lista enlazada del índice hash actual
            while (actual != nullptr) { // Si el contacto actual no es nullptr (no es el final de la lista)
                // Solo agregar el contacto si no está marcado como eliminado de la memoria
                if (!actual->eliminadoDeMemoria) {
                    // La lista maestra se encarga de ordenar los contactos
                    // utilizando la función agregarContactoOrdenado
                    listaMaestra.agregarContactoOrdenado(actual->nombre, actual->telefono); // Agrega el contacto a la lista maestra
                }
                actual = actual->siguiente; // Avanza al siguiente contacto en la lista
            }
        }
    }

}

