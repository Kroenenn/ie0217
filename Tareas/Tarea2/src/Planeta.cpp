// Planeta.cpp

#include "Planeta.hpp"
#include <iostream>

Planeta::Planeta(const std::string& nombre) : nombre(nombre), numContinentes(0) {
    for (int i = 0; i < MAX_CONTINENTES; ++i) {
        continentes[i] = nullptr; // SE Inicializa todos los punteros a nullptr.
    }
}

Planeta::~Planeta() {
    for (int i = 0; i < numContinentes; ++i) {
        delete continentes[i]; // Libera cada continente.
    }
}

bool Planeta::agregarContinente(Continente* nuevoContinente) {
    if (numContinentes < MAX_CONTINENTES && nuevoContinente != nullptr) {
        continentes[numContinentes++] = nuevoContinente;
        return true;
    }
    return false;
}

void Planeta::imprimirInformacion() const {
    std::cout << "-----------------------------------------";
    std::cout << "\n\nInformación General:\n";
    std::cout << "\nPlaneta posee " << numContinentes << " continentes: ";
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
                continentes[i]->imprimirInformacion(); // Se delega la impresión a cada continente.
            }
        }
    std::cout << "-----------------------------------------";
    }
    
        

Continente* Planeta::buscarContinente(const std::string& nombreContinente) {
    for (int i = 0; i < numContinentes; ++i) {
        if (continentes[i]->obtenerNombre() == nombreContinente) {
            return continentes[i];
        }
    }
    return nullptr; 
}

void Planeta::imprimirNombresContinentes() const {

    for (int i = 0; i < numContinentes; ++i) {
        if (continentes[i] != nullptr) {
            std::cout << "- " << continentes[i]->obtenerNombre() << std::endl;
        }
    }
}

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

void Planeta::agregarContinenteAccesiblePorAvion(const std::string& nombreContinente) {
    if (numAccesiblesPorAvion < MAX_ACCESIBLES_POR_AVION) {
        continentesAccesiblesPorAvion[numAccesiblesPorAvion++] = nombreContinente;
    }
}

void Planeta::imprimirContinentesAccesiblesPorAvion() const {
    std::cout << "Continentes accesibles por avión: ";
    for (int i = 0; i < numAccesiblesPorAvion; ++i) {
        std::cout << continentesAccesiblesPorAvion[i] << (i < numAccesiblesPorAvion - 1 ? ", " : "");
    }
    std::cout << std::endl;
}
