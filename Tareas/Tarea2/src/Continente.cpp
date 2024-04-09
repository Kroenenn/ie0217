// Continente.cpp

#include "Continente.hpp"
#include <iostream>

Continente::Continente() : numPaises(0), nombre("") {

}

Continente::Continente(const std::string& nombre) : numPaises(0), nombre(nombre) {

}

Continente::~Continente() {

}

bool Continente::agregarPais(Pais* nuevoPais) {

}

bool Continente::eliminarPais(const std::string& nombrePais) {

}

void Continente::imprimirInformacion() const {

}



Pais* Continente::buscarPais(const std::string& nombrePais) {

}

std::string Continente::obtenerNombre() const {

}

void Continente::imprimirNombresPaises() const {

}