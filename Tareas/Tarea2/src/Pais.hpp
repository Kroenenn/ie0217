/**
 * @file Pais.hpp
 * @brief Definición de la clase base Pais.
 *
 * Este archivo contiene la definición de la clase Pais, que es la clase base para representar 
 * diferentes tipos de países en un modelo de simulación geográfica. Proporciona la estructura
 * básica y las funcionalidades comunes a todos los tipos de países.
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

#ifndef PAIS_HPP
#define PAIS_HPP

#include <string>

/**
 * @class Pais
 * @brief Clase base abstracta para representar un país.
 * 
 * Esta clase proporciona atributos comunes y funciones para gestionar las características básicas
 * de un país, incluyendo tecnología 5G, aeropuertos y PIB.
 */
class Pais {

private:

    bool operator==(const Pais& otro) const;
    bool compararTecnologia5G(const Pais& otro) const;
    bool compararAeropuertos(const Pais& otro) const;
protected:
    std::string nombre; ///< Nombre del país.
    bool tieneTecnologia5G; ///< Indicador de si el país tiene tecnología 5G.
    bool tieneAeropuerto; ///< Indicador de si el país tiene aeropuertos.
    double pib; ///< Producto Interno Bruto del país.
    unsigned int identificador; ///< Identificador único del país.

public:
    /**
     * @brief Constructor de la clase Pais.
     * 
     * Inicializa un nuevo país con los detalles proporcionados.
     * 
     * @param nombre Nombre del país.
     * @param tieneTecnologia5G Indica si el país tiene tecnología 5G.
     * @param tieneAeropuerto Indica si el país tiene aeropuertos.
     * @param id Identificador único para el país.
     */
    Pais(const std::string* nombre, bool tieneTecnologia5G, bool tieneAeropuerto, unsigned int id);
    /**
     * @brief Destructor virtual de Pais.
     */
    ~Pais();

    /**
     * @brief Calcula el PIB del país.
     * 
     * Esta función define cómo se calcula el PIB para todos los países, siendo una operación común que
     * puede ser sobrescrita por clases derivadas si es necesario.
     */
    void calcularPIB();

    /**
     * @brief Imprime la información del país.
     * 
     * Este método es virtual puro y debe ser implementado por las clases derivadas para imprimir
     * la información específica de cada tipo de país.
     */
    virtual void imprimirInformacion() const = 0;

    /**
     * @brief Comprueba si el país tiene tecnología 5G.
     * 
     * @return true si el país tiene tecnología 5G, false en caso contrario.
     */
    bool tiene5G() const;

    /**
     * @brief Comprueba si el país tiene aeropuertos.
     * 
     * @return true si el país tiene aeropuertos, false en caso contrario.
     */
    bool tieneAeropuertoF() const;

    /**
     * @brief Devuelve el nombre del país.
     * 
     * @return Nombre del país.
     */
    std::string obtenerNombre() const;

    /**
     * @brief Devuelve el identificador del país.
     * 
     * @return Identificador único del país.
     */
    unsigned int obtenerIdentificador() const;

    /**
     * @brief Compara si dos países tienen la misma tecnología 5G.
     * 
     * @param otro Referencia al otro país con el que se compara.
     * @return true si ambos países tienen la misma tecnología 5G, false en caso contrario.
     */
    bool esIgualEnTecnologia5G(const Pais& otro) const;

    /**
     * @brief Compara si dos países tienen aeropuertos.
     * 
     * @param otro Referencia al otro país con el que se compara.
     * @return true si ambos países tienen aeropuertos, false en caso contrario.
     */
    bool esIgualEnAeropuertos(const Pais& otro) const;
};

#endif // PAIS_HPP
