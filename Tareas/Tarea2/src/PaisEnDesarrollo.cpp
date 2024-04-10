/**
 * @file PaisEnDesarrollo.cpp
 * @brief Implementación de la clase PaisEnDesarrollo.
 *
 * Este archivo contiene la implementación de las funciones miembro de la clase PaisEnDesarrollo,
 * que extiende la clase base Pais para representar países en desarrollo con características específicas.
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

#include "PaisEnDesarrollo.hpp"
#include "Utilidad.hpp"
#include <iostream>
#include <cstdlib> // Para std::rand()

// Constructor de la clase PaisEnDesarrollo
// Inicializa un objeto de PaisEnDesarrollo asignando los valores iniciales a los atributos.
// Se utiliza un puntero a string para el nombre para poder asignar un valor por defecto.
// Se verifica si el identificador es primo y si no lo es, se le asigna el siguiente número primo.
PaisEnDesarrollo::PaisEnDesarrollo(const std::string* nombre, bool tieneTecnologia5G, 
                                   bool tieneAeropuerto, unsigned int cantidadHabitantes,
                                   unsigned int identificador)
    : Pais(nombre, tieneTecnologia5G, tieneAeropuerto, identificador), 
      cantidadHabitantes(cantidadHabitantes) {

    if (esNumeroPrimo(this->obtenerIdentificador())) { //esNumeroPrimo tiene dentro a this->obtenerIdentificador(), que lo que hace es obtener el identificador del objeto
        this->identificador += 1; // Se incrementa el identificador si no es primo
    }
    calcularPIB();
}

// Método para imprimir la información del país en desarrollo.
void PaisEnDesarrollo::imprimirInformacion() const {
    std::cout << "\n"
              << "País en desarrollo: " << obtenerNombre() << "\n"
              << "Identificador único (no primo): " << obtenerIdentificador() << "\n"
              << "Cantidad total de habitantes: " << obtenerCantidadHabitantes() << "\n"
              << "PIB: " << pib << "\n"
              << "Tiene aeropuerto: " << (tieneAeropuerto ? "Sí" : "No") << "\n"
              << "Tiene tecnología 5G: " << (tieneTecnologia5G ? "Sí" : "No") << std::endl;
}

// Método para obtener la cantidad de habitantes en el país.
unsigned int PaisEnDesarrollo::obtenerCantidadHabitantes() const {
    return cantidadHabitantes;
}
