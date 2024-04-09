// Continente.cpp

#include "Continente.hpp"
#include <iostream>

Continente::Continente() : numPaises(0), nombre("") {

}

Continente::Continente(const std::string& nombre) : numPaises(0), nombre(nombre) {

}

Continente::~Continente() {

}


bool Continente::eliminarPais(const std::string& nombrePais) {

}

void Continente::imprimirInformacion() const {

}




std::string Continente::obtenerNombre() const {
    return nombre;
}

void Continente::imprimirNombresPaises() const {

}