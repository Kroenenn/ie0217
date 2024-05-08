/**
 * @file ValidadorDeEntrada.hpp
 * @brief Declaración de la clase ValidadorDeEntrada.
 * 
 * Esta clase contiene las funciones necesarias para validar la entrada de datos.
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
 * 
 */
#ifndef VALIDADOR_DE_ENTRADA_HPP
#define VALIDADOR_DE_ENTRADA_HPP

#include <string>
#include <stdexcept>
#include <complex>

/**
 * @brief Clase ValidadorDeEntrada
 * 
 * Esta clase contiene las funciones necesarias para validar la entrada de datos.
 * 
*/
class ValidadorDeEntrada {
public:

    /**
     * @brief Valida si el tipo de dato es válido, ya sea int, float o complex.
     * 
     * Esta función valida si el tipo de dato es válido, ya sea int, float o complex.
     * @param input Cadena de caracteres que representa el tipo de dato.
    */
    static void validarTipoDato(const std::string& input);
    static void validarDimensiones(int filas, int columnas);
};

#endif // VALIDADOR_DE_ENTRADA_HPP
