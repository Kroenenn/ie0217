// Pais.cpp

#include "Pais.hpp"
#include <iostream>

Pais::Pais(const std::string* _nombre, bool _tieneTecnologia5G, bool _tieneAeropuerto, unsigned int id) 
: tieneTecnologia5G(_tieneTecnologia5G), tieneAeropuerto(_tieneAeropuerto), identificador(id) {
    if (_nombre != nullptr) {
        this->nombre = *_nombre;
    } else {
        this->nombre = ""; // Se asigna un nombre vacío si el puntero es nullptr
    }
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
    return tieneTecnologia5G == otro.tieneTecnologia5G &&
           tieneAeropuerto == otro.tieneAeropuerto;
}

void Pais::calcularPIB() {

    pib = static_cast<double>(std::rand() % 1000000 + 500000);
}

bool Pais::compararTecnologia5G(const Pais& otro) const {
    return this->tieneTecnologia5G == otro.tieneTecnologia5G;
}

bool Pais::compararAeropuertos(const Pais& otro) const {
    return this->tieneAeropuerto == otro.tieneAeropuerto;
}

bool Pais::esIgualEnTecnologia5G(const Pais& otro) const {
    return compararTecnologia5G(otro);
}

bool Pais::esIgualEnAeropuertos(const Pais& otro) const {
    return compararAeropuertos(otro);
}

Pais::~Pais() {
}
