// Continente.cpp

#include "Continente.hpp"
#include <iostream>

Continente::Continente() : numPaises(0), nombre("") {
    for (int i = 0; i < MAX_PAISES; ++i) {
        paises[i] = nullptr;
    }
}

Continente::Continente(const std::string& nombre) : numPaises(0), nombre(nombre) {
    for (int i = 0; i < MAX_PAISES; ++i) {
        paises[i] = nullptr; // nullptr se utiliza para indicar que el puntero no apunta a nada.
    }
}

Continente::~Continente() {
    for (int i = 0; i < numPaises; ++i) {
        delete paises[i];
        paises[i] = nullptr;
    }
}

bool Continente::agregarPais(Pais* nuevoPais) {
    if (numPaises < MAX_PAISES && nuevoPais != nullptr) {
        paises[numPaises++] = nuevoPais;
        return true;
    }
    return false;
}

bool Continente::eliminarPais(const std::string& nombrePais) {
    for (int i = 0; i < numPaises; ++i) {
        if (paises[i] != nullptr && paises[i]->obtenerNombre() == nombrePais) {
            delete paises[i]; // Eliminar el país.
            paises[i] = nullptr;
            // Compactar el array tras la eliminación.
            for (int j = i; j < numPaises - 1; ++j) {
                paises[j] = paises[j + 1];
            }
            paises[--numPaises] = nullptr;
            return true;
        }
    }
    return false;
}

void Continente::imprimirInformacion() const {
    std::cout << "\nContinente: " << nombre << std::endl;
    for (int i = 0; i < numPaises; ++i) {
        if (paises[i] != nullptr) {
            paises[i]->imprimirInformacion(); // Se delega la impresión a cada país.
        }
    }
}



Pais* Continente::buscarPais(const std::string& nombrePais) {
    for (int i = 0; i < numPaises; ++i) {
        if (paises[i] && paises[i]->obtenerNombre() == nombrePais) {
            return paises[i];
        }
    }
    return nullptr;
}

std::string Continente::obtenerNombre() const {
    return nombre;
}

void Continente::imprimirNombresPaises() const {
    for (int i = 0; i < numPaises; ++i) {
        if (paises[i] != nullptr) {
            std::cout << "- " << paises[i]->obtenerNombre() << std::endl;
        }
    }
}