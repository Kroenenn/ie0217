/**
 * @file Pais.cpp
 * @brief Implementación de la clase Pais.
 *
 * Este archivo contiene la implementación de los métodos de la clase Pais, que es la clase base para
 * representar diferentes tipos de países en un modelo de simulación geográfica.
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

#include "Pais.hpp"
#include <iostream>

// Constructor de la clase Pais
// Se encarga de inicializar los atributos de la clase.
// Se utiliza un puntero a string para el nombre para poder asignar un valor por defecto.
Pais::Pais(const std::string* _nombre, bool _tieneTecnologia5G, bool _tieneAeropuerto, unsigned int id) 
: tieneTecnologia5G(_tieneTecnologia5G), tieneAeropuerto(_tieneAeropuerto), identificador(id) {
    if (_nombre != nullptr) { // Se verifica si el puntero no es nullptr
        this->nombre = *_nombre; // Se asigna el valor del puntero al atributo nombre
    } else {
        this->nombre = ""; // Se asigna un nombre vacío si el puntero es nullptr
    }
}

// Método para determinar si un país tiene tecnología 5G
bool Pais::tiene5G() const {
    return tieneTecnologia5G;
}

// Método para determinar si un país tiene aeropuerto
bool Pais::tieneAeropuertoF() const {
    return tieneAeropuerto;
}

// Método para obtener el nombre de un país
std::string Pais::obtenerNombre() const {
    return nombre;
}

// Método para obtener el identificador de un país
unsigned int Pais::obtenerIdentificador() const {
    return identificador;
}

// Método para comparar dos países
// Se comparan los atributos de tecnología 5G y aeropuertos de dos países.
// operator== posee la sobreescritura de la función de comparación de igualdad.
bool Pais::operator==(const Pais& otro) const {
    return tieneTecnologia5G == otro.tieneTecnologia5G &&
           tieneAeropuerto == otro.tieneAeropuerto;
}

// Método para calcular el PIB de un país
void Pais::calcularPIB() {
    pib = static_cast<double>(std::rand() % 1000000 + 500000);
}

// Método para comparar la tecnología 5G de dos países
// el this-> es para indicar que se está comparando con el país actual.
// el == es para comparar si los valores son iguales.
// el otro.tieneTecnologia5G es para obtener el valor del país que se está comparando.
bool Pais::compararTecnologia5G(const Pais& otro) const {
    return this->tieneTecnologia5G == otro.tieneTecnologia5G;
}

// Método para comparar los aeropuertos de dos países
// el this-> es para indicar que se está comparando con el país actual.
// el == es para comparar si los valores son iguales.
// el otro.tieneAeropuerto es para obtener el valor del país que se está comparando.
bool Pais::compararAeropuertos(const Pais& otro) const {
    return this->tieneAeropuerto == otro.tieneAeropuerto;
}


// Método para comparar si dos países son iguales en tecnología 5G
// Se utiliza el método compararTecnologia5G para comparar la tecnología 5G de dos países.
bool Pais::esIgualEnTecnologia5G(const Pais& otro) const {
    return compararTecnologia5G(otro);
}

// Método para comparar si dos países son iguales en aeropuertos
// Se utiliza el método compararAeropuertos para comparar los aeropuertos de dos países.
bool Pais::esIgualEnAeropuertos(const Pais& otro) const {
    return compararAeropuertos(otro);
}

// Destructor de la clase Pais
Pais::~Pais() {
}
