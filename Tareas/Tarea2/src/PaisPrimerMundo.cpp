/**
 * @file PaisPrimerMundo.cpp
 * @brief Implementación de la clase PaisPrimerMundo.
 *
 * Este archivo contiene la definición de las funciones de la clase PaisPrimerMundo,
 * que permite la gestión de países del primer mundo con características específicas.
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

#include "PaisPrimerMundo.hpp"
#include "Utilidad.hpp"
#include <iostream>
#include <cstdlib> // para rand() y srand()
#include <ctime> // para time()

// Constructor de la clase PaisPrimerMundo
// Se encarga de inicializar los atributos de la clase.
// Se utiliza un puntero a string para el nombre para poder asignar un valor por defecto.
// Se verifica si el identificador es primo y si no lo es, se le asigna el siguiente número primo.
PaisPrimerMundo::PaisPrimerMundo(const std::string* nombre, bool tieneTecnologia5G, bool tieneAeropuerto, 
                                 unsigned int identificador, 
                                 bool tieneCentroDeInvestigacionYDesarrollo, unsigned int poblacion)
    : Pais(nombre, tieneTecnologia5G, tieneAeropuerto, identificador),
      tieneCentroDeInvestigacionYDesarrollo(tieneCentroDeInvestigacionYDesarrollo),
      poblacionTotal(poblacion) {
    if (esNumeroPrimo(identificador)) {
        this->identificador = identificador;
    } else {
        this->identificador = siguienteNumeroPrimo(identificador);
    }
    calcularPIB();
    calcularEmpleo();
}

// Método para calcular el empleo aleatorio en el país.
void PaisPrimerMundo::calcularEmpleo() {
    habitantesConTrabajo = std::rand() % poblacionTotal; // Un número aleatorio de personas con trabajo
    habitantesSinTrabajo = poblacionTotal - habitantesConTrabajo; // El resto no tiene trabajo
}

// Método para obtener la cantidad de habitantes con trabajo.
unsigned int PaisPrimerMundo::obtenerHabitantesConTrabajo() const {
    return habitantesConTrabajo;
}

// Método para obtener la cantidad de habitantes sin trabajo.
unsigned int PaisPrimerMundo::obtenerHabitantesSinTrabajo() const {
    return habitantesSinTrabajo;
}

// Método para imprimir la información del país del primer mundo.
void PaisPrimerMundo::imprimirInformacion() const {
    std::cout << "\n"
              << "País del primer mundo: " << nombre << "\n"
              << "Identificador único (primo): " << identificador << "\n"
              << "PIB: " << pib << "\n"
              << "Tiene centro de investigación y desarrollo: " 
              << (tieneCentroDeInvestigacionYDesarrollo ? "Sí" : "No") << "\n"
              << "Habitantes con trabajo: " << obtenerHabitantesConTrabajo() << "\n"
              << "Habitantes sin trabajo: " << obtenerHabitantesSinTrabajo() << "\n"
              << "Tiene aeropuerto: " << (tieneAeropuerto ? "Sí" : "No") << "\n"
              << "Tiene tecnología 5G: " << (tieneTecnologia5G ? "Sí" : "No") << std::endl;
}

// Método para obtener el identificador del país.
unsigned int PaisPrimerMundo::obtenerIdentificador() const {
    return identificador;
}

// Método para comprobar si el país tiene un centro de investigación y desarrollo.
bool PaisPrimerMundo::tieneCentroID() const {
    return tieneCentroDeInvestigacionYDesarrollo;
}
