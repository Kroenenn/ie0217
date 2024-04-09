// Pais.cpp

#include "Pais.hpp"
#include <iostream>

Pais::Pais(const std::string* _nombre, bool _tieneTecnologia5G, bool _tieneAeropuerto, unsigned int id) 
: tieneTecnologia5G(_tieneTecnologia5G), tieneAeropuerto(_tieneAeropuerto), identificador(id) {

}

bool Pais::tiene5G() const {
    return tieneTecnologia5G;
}

bool Pais::tieneAeropuertoF() const {
    return tieneAeropuerto;
}

std::string Pais::obtenerNombre() const {
    return nombre;
}

unsigned int Pais::obtenerIdentificador() const {
    return identificador;
}

bool Pais::operator==(const Pais& otro) const {

}


bool Pais::compararTecnologia5G(const Pais& otro) const {

}

bool Pais::compararAeropuertos(const Pais& otro) const {

}

bool Pais::esIgualEnTecnologia5G(const Pais& otro) const {
 
}

bool Pais::esIgualEnAeropuertos(const Pais& otro) const {

}

Pais::~Pais() {

}
