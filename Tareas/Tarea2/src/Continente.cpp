/**
 * @file Continente.cpp
 * @brief Implementación de la clase Continente.
 * 
 * Este archivo contiene las definiciones de los métodos de la clase Continente.
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

#include "Continente.hpp"
#include <iostream>

// Constructor por defecto
// Se encarga de inicializar el nombre del continente y los punteros a los países.
Continente::Continente() : numPaises(0), nombre("") {
    for (int i = 0; i < MAX_PAISES; ++i) {
        paises[i] = nullptr;
    }
}

// Constructor con parámetros
// Se encarga de inicializar el nombre del continente y los punteros a los países.
// Se necesita ya que el constructor por defecto no inicializa el nombre.
Continente::Continente(const std::string& nombre) : numPaises(0), nombre(nombre) {
    for (int i = 0; i < MAX_PAISES; ++i) {
        paises[i] = nullptr; // nullptr se utiliza para indicar que el puntero no apunta a nada.
    }
}

// Destructor
// Se encarga de liberar la memoria asignada a los países.
Continente::~Continente() {
    for (int i = 0; i < numPaises; ++i) {
        delete paises[i];
        paises[i] = nullptr;
    }
}

// Método para agregar un país al continente.
// Se encarga de verificar si hay espacio en el array de países y si el país no es nullptr.
// Si se cumplen las condiciones, se agrega el país al array y se incrementa el contador de países.
bool Continente::agregarPais(Pais* nuevoPais) {
    if (numPaises < MAX_PAISES && nuevoPais != nullptr) {
        paises[numPaises++] = nuevoPais;
        return true;
    }
    return false;
}

// Método para eliminar un país del continente.
// Se encarga de buscar el país en el array y eliminarlo.
// Luego compacta el array para evitar espacios vacíos.
bool Continente::eliminarPais(const std::string& nombrePais) {
    for (int i = 0; i < numPaises; ++i) {
        if (paises[i] != nullptr && paises[i]->obtenerNombre() == nombrePais) {
            delete paises[i]; // Eliminar el país.
            paises[i] = nullptr;
            // Compactar el array tras la eliminación.
            for (int j = i; j < numPaises - 1; ++j) {
                paises[j] = paises[j + 1]; // Mover los países hacia la izquierda.
            }
            paises[--numPaises] = nullptr; // Decrementar el contador de países.
            return true;
        }
    }
    return false;
}

// Método para limpiar todos los países del continente.
// Se encarga de liberar la memoria asignada a los países y resetear el contador de países.
void Continente::limpiarPaises() {
    for (int i = 0; i < numPaises; ++i) {
        delete paises[i];  // Libera la memoria asignada para cada país
        paises[i] = nullptr;  // Prevenir dangling pointers
    }
    numPaises = 0;  // Resetear el contador de países
}

// Método para imprimir la información de todos los países en el continente.
// Se encarga de imprimir el nombre del continente y delegar la impresión a cada país.
void Continente::imprimirInformacion() const {
    std::cout << "\nContinente: " << nombre << std::endl;
    for (int i = 0; i < numPaises; ++i) {
        if (paises[i] != nullptr) {
            paises[i]->imprimirInformacion(); // Se delega la impresión a cada país.
        }
    }
}


// Método para buscar un país por nombre en el continente.
// Se encarga de buscar el país en el array de países y retornar un puntero a él.
// Si no se encuentra el país, retorna nullptr.
Pais* Continente::buscarPais(const std::string& nombrePais) {
    for (int i = 0; i < numPaises; ++i) {
        if (paises[i] && paises[i]->obtenerNombre() == nombrePais) {
            return paises[i];
        }
    }
    return nullptr;
}

// Método para obtener el nombre del continente.
std::string Continente::obtenerNombre() const {
    return nombre;
}

// Método para imprimir los nombres de todos los países en el continente.
void Continente::imprimirNombresPaises() const {
    for (int i = 0; i < numPaises; ++i) {
        if (paises[i] != nullptr) {
            std::cout << "- " << paises[i]->obtenerNombre() << std::endl;
        }
    }
}