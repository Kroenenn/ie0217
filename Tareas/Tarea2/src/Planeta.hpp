/**
 * @file Planeta.hpp
 * @brief Definición de la clase Planeta que representa un planeta con continentes.
 * 
 * Este archivo contiene la definición de la clase Planeta, que incluye métodos para manejar continentes,
 * buscar países y gestionar continentes accesibles por avión.
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

#ifndef PLANETA_HPP
#define PLANETA_HPP

#include "Continente.hpp"
#include <string>

const int MAX_CONTINENTES = 5; ///< Número máximo de continentes en el planeta.
const int MAX_ACCESIBLES_POR_AVION = 3; ///< Número máximo de continentes accesibles por avión.

/**
 * @class Planeta
 * @brief Clase que representa un planeta con continentes.
 * 
 * Planeta es una clase que permite agregar y gestionar continentes,
 * buscar países específicos y manejar rutas de avión entre continentes.
 */
class Planeta {
private:

    int numContinentes; ///< Contador actual de continentes en el planeta.
    int numAccesiblesPorAvion; ///< Contador de continentes accesibles por avión.
    std::string nombre; ///< Nombre del planeta.

public:
    /**
     * @brief Constructor de la clase Planeta.
     * @param nombre Nombre del planeta.
     */
    Planeta(const std::string& nombre);

    Continente* continentes[MAX_CONTINENTES]; ///< Array de punteros a objetos Continente.
    std::string continentesAccesiblesPorAvion[MAX_ACCESIBLES_POR_AVION]; ///< Nombres de continentes accesibles por avión.

    /**
     * @brief Destructor de la clase Planeta.
     */
    ~Planeta();

    /**
     * @brief Agrega un nuevo continente al planeta.
     * @param nuevoContinente Puntero al continente que se desea agregar.
     * @return true si el continente fue agregado correctamente, false de lo contrario.
     */
    bool agregarContinente(Continente* nuevoContinente);

    /**
     * @brief Imprime información detallada del planeta y sus continentes.
     */
    void imprimirInformacion() const;

    /**
     * @brief Busca un continente por nombre.
     * @param nombreContinente Nombre del continente a buscar.
     * @return Puntero al continente si se encuentra, nullptr de lo contrario.
     */
    Continente* buscarContinente(const std::string& nombreContinente);

    /**
     * @brief Imprime los nombres de todos los continentes en el planeta.
     */
    void imprimirNombresContinentes() const;

    /**
     * @brief Busca un país por nombre en todos los continentes.
     * @param nombrePais Nombre del país a buscar.
     * @return Puntero al país si se encuentra, nullptr de lo contrario.
     */
    Pais* buscarPais(const std::string& nombrePais) const;

    /**
     * @brief Agrega un continente a la lista de continentes accesibles por avión.
     * @param nombreContinente Nombre del continente a agregar a la lista.
     */
    void agregarContinenteAccesiblePorAvion(const std::string& nombreContinente);

    /**
     * @brief Imprime los nombres de los continentes que son accesibles por avión.
     */
    void imprimirContinentesAccesiblesPorAvion() const;
};

#endif // PLANETA_HPP
