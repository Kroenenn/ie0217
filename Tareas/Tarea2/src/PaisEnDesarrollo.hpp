/**
 * @file PaisEnDesarrollo.hpp
 * @brief Declaración de la clase PaisEnDesarrollo.
 *
 * Este archivo contiene la declaración de la clase PaisEnDesarrollo, que extiende
 * la clase Pais para representar países en desarrollo con características específicas.
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

#ifndef PAISENDESARROLLO_HPP
#define PAISENDESARROLLO_HPP

#include "Pais.hpp"
#include <string>

/**
 * @class PaisEnDesarrollo
 * @brief Representa un país en desarrollo.
 *
 * Esta clase hereda de Pais y añade características específicas como la cantidad de habitantes.
 * Permite la gestión de países en desarrollo con atributos y comportamientos especializados.
 */
class PaisEnDesarrollo : public Pais {
private:
    unsigned int cantidadHabitantes; ///< Cantidad total de habitantes en el país.

public:
    /**
     * @brief Constructor de PaisEnDesarrollo.
     * 
     * Inicializa un objeto de PaisEnDesarrollo asignando los valores iniciales a los atributos.
     *
     * @param nombre Puntero al nombre del país.
     * @param tieneTecnologia5G Indica si el país posee tecnología 5G.
     * @param tieneAeropuerto Indica si el país tiene aeropuertos.
     * @param cantidadHabitantes Número total de habitantes en el país.
     * @param identificador Identificador único del país.
     */
    PaisEnDesarrollo(const std::string* nombre, bool tieneTecnologia5G, 
                     bool tieneAeropuerto, unsigned int cantidadHabitantes,
                     unsigned int identificador);

    
    /**
     * @brief Imprime la información del país en desarrollo.
     *
     * Muestra todos los atributos relevantes del país.
     */
    void imprimirInformacion() const override;
    /**
     * @brief Obtiene la cantidad de habitantes del país.
     *
     * @return Cantidad total de habitantes.
     */
    unsigned int obtenerCantidadHabitantes() const ;
};

#endif // PAISENDESARROLLO_HPP