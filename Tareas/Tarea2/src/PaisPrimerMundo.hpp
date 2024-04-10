/**
 * @file PaisPrimerMundo.hpp
 * @brief Definición de la clase PaisPrimerMundo, que hereda de Pais.
 *
 * Esta clase representa a un país del primer mundo, incluyendo características específicas como
 * la presencia de un centro de investigación y desarrollo, así como el conteo de habitantes con y sin trabajo.
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

#ifndef PAISPRIMERMUNDO_HPP
#define PAISPRIMERMUNDO_HPP

#include "Pais.hpp"
#include <string>

/**
 * @class PaisPrimerMundo
 * @brief Representa un país del primer mundo.
 *
 * Esta clase extiende la funcionalidad de la clase Pais para agregar características específicas
 * de los países del primer mundo, como centros de investigación y desarrollo, y estadísticas de empleo.
 */
class PaisPrimerMundo : public Pais {
private:
    bool tieneCentroDeInvestigacionYDesarrollo; ///< Indica si el país tiene un centro de investigación y desarrollo.
    unsigned int habitantesConTrabajo; ///< Número de habitantes con trabajo.
    unsigned int habitantesSinTrabajo; ///< Número de habitantes sin trabajo.
    unsigned int poblacionTotal; ///< Población total del país.

    /**
     * @brief Calcula el empleo en el país.
     *
     * Este método privado se utiliza para calcular de forma aleatoria la cantidad de habitantes
     * con trabajo y sin trabajo, basado en la población total.
     */
    void calcularEmpleo();

public:
    /**
     * @brief Constructor de la clase PaisPrimerMundo.
     *
     * @param nombre Nombre del país.
     * @param tieneTecnologia5G Indica si el país tiene tecnología 5G.
     * @param tieneAeropuerto Indica si el país tiene aeropuerto.
     * @param identificador Identificador único del país.
     * @param tieneCentroDeInvestigacionYDesarrollo Indica si el país tiene un centro de investigación y desarrollo.
     * @param poblacionTotal Población total del país.
     */
    PaisPrimerMundo(const std::string* nombre, bool tieneTecnologia5G, 
                    bool tieneAeropuerto, unsigned int identificador, 
                    bool tieneCentroDeInvestigacionYDesarrollo, unsigned int poblacionTotal);

    /**
     * @brief Imprime la información del país del primer mundo.
     *
     * Este método sobrescribe el método virtual puro `imprimirInformacion` de la clase base `Pais`.
     */
    void imprimirInformacion() const override;

    /**
     * @brief Obtiene el identificador del país.
     *
     * @return Identificador del país.
     */
    unsigned int obtenerIdentificador() const;

    /**
     * @brief Indica si el país tiene un centro de investigación y desarrollo.
     *
     * @return true si el país tiene un centro de investigación y desarrollo, false de lo contrario.
     */
    bool tieneCentroID() const;

    /**
     * @brief Obtiene el número de habitantes con trabajo.
     *
     * @return Número de habitantes con trabajo.
     */
    unsigned int obtenerHabitantesConTrabajo() const;

    /**
     * @brief Obtiene el número de habitantes sin trabajo.
     *
     * @return Número de habitantes sin trabajo.
     */
    unsigned int obtenerHabitantesSinTrabajo() const;
};

#endif // PAISPRIMERMUNDO_HPP
