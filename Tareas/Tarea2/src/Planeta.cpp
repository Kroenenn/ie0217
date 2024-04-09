// Planeta.cpp

#include "Planeta.hpp"
#include <iostream>

Planeta::Planeta(const std::string& nombre) : nombre(nombre), numContinentes(0) {

}

Planeta::~Planeta() {

}

bool Planeta::agregarContinente(Continente* nuevoContinente) {

}

void Planeta::imprimirInformacion() const {

}

void Planeta::imprimirNombresContinentes() const {

}

Pais* Planeta::buscarPais(const std::string& nombrePais) const {

}

Continente* Planeta::buscarContinente(const std::string& nombreContinente) {
    
    }

void Planeta::agregarContinenteAccesiblePorAvion(const std::string& nombreContinente) {

}

void Planeta::imprimirContinentesAccesiblesPorAvion() const {

}
