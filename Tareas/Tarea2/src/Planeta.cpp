/**
 * @file Planeta.cpp
 * @brief Implementación de la clase Planeta.
 * 
 * Este archivo contiene las definiciones de los métodos de la clase Planeta.
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

#include "Planeta.hpp"
#include <iostream>

// Constructor de la clase Planeta
// Se encarga de inicializar el nombre del planeta y los punteros a los continentes.
Planeta::Planeta(const std::string& nombre) : nombre(nombre), numContinentes(0) {
    for (int i = 0; i < MAX_CONTINENTES; ++i) {
        continentes[i] = nullptr; // Inicializa todos los punteros a nullptr.
    }
}

// Destructor
// Se encarga de liberar la memoria asignada a los continentes.
Planeta::~Planeta() {
    for (int i = 0; i < numContinentes; ++i) {
        delete continentes[i]; // Libera cada continente.
    }
}

// Método para agregar un continente al planeta.
// Se encarga de verificar si hay espacio en el array de continentes y si el continente no es nullptr.
bool Planeta::agregarContinente(Continente* nuevoContinente) {
    if (numContinentes < MAX_CONTINENTES && nuevoContinente != nullptr) {
        continentes[numContinentes++] = nuevoContinente;
        return true;
    }
    return false;
}

// Método para imprimir la información general del planeta.
// Se encarga de imprimir el nombre del planeta, la cantidad de continentes y los continentes accesibles por avión.
// Delega la impresión de la información de los países a cada continente.
void Planeta::imprimirInformacion() const {
    std::cout << "-----------------------------------------";
    std::cout << "\n\nInformación General:\n";
    std::cout << "\nPlaneta " << this->nombre << " posee " << numContinentes << " continentes: ";
    for (int i = 0; i < numContinentes; ++i) {
        if (continentes[i] != nullptr) {
            if (i > 0) std::cout << ", ";
            std::cout << continentes[i]->obtenerNombre();
        }
    }

    std::cout << "\nDe estos continentes, el avión pasa por los siguientes: ";
    for (int i = 0; i < numAccesiblesPorAvion; ++i) {
        if (i > 0) std::cout << ", ";
        std::cout << continentesAccesiblesPorAvion[i];
    }
    std::cout << ".\n\n";

    std::cout << "Información sobre los países:\n";
    for (int i = 0; i < numContinentes; ++i) {
        if (continentes[i] != nullptr) {
            continentes[i]->imprimirInformacion(); // Delega la impresión a cada continente.
        }
    }
    std::cout << "-----------------------------------------";
}

// Método para buscar un continente por nombre.
// Se encarga de recorrer el array de continentes y comparar el nombre con el proporcionado.
// Retorna un puntero al continente si se encuentra, nullptr de lo contrario.
Continente* Planeta::buscarContinente(const std::string& nombreContinente) {
    for (int i = 0; i < numContinentes; ++i) {
        if (continentes[i]->obtenerNombre() == nombreContinente) {
            return continentes[i];
        }
    }
    return nullptr;
}

// Método para imprimir los nombres de todos los continentes en el planeta.
// Se encarga de recorrer el array de continentes e imprimir el nombre de cada uno.
void Planeta::imprimirNombresContinentes() const {
    for (int i = 0; i < numContinentes; ++i) {
        if (continentes[i] != nullptr) {
            std::cout << "- " << continentes[i]->obtenerNombre() << std::endl;
        }
    }
}

// Método para buscar un país por nombre en todos los continentes.
// Se encarga de recorrer todos los continentes y delegar la búsqueda a cada uno.
// Retorna un puntero al país si se encuentra, nullptr de lo contrario.
Pais* Planeta::buscarPais(const std::string& nombrePais) const {
    for (int i = 0; i < numContinentes; ++i) {
        if (continentes[i] != nullptr) {
            Pais* encontrado = continentes[i]->buscarPais(nombrePais);
            if (encontrado != nullptr) {
                return encontrado;
            }
        }
    }
    return nullptr;
}

//  Método para agregar un continente a la lista de continentes accesibles por avión.
//  Se encarga de verificar si hay espacio en el array de continentes accesibles por avión.
void Planeta::agregarContinenteAccesiblePorAvion(const std::string& nombreContinente) {
    if (numAccesiblesPorAvion < MAX_ACCESIBLES_POR_AVION) {
        continentesAccesiblesPorAvion[numAccesiblesPorAvion++] = nombreContinente;
    }
}

// Método para imprimir los nombres de los continentes accesibles por avión.
// Se encarga de recorrer el array de continentes accesibles por avión e imprimir el nombre de cada uno.
void Planeta::imprimirContinentesAccesiblesPorAvion() const {
    std::cout << "Continentes accesibles por avión: ";
    for (int i = 0; i < numAccesiblesPorAvion; ++i) {
        std::cout << continentesAccesiblesPorAvion[i] << (i < numAccesiblesPorAvion - 1 ? ", " : "");
    }
    std::cout << std::endl;
}
