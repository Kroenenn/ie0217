/**
 * @file ValidadorDeEntrada.cpp
 * @brief Implementación de la clase ValidadorDeEntrada.
 * 
 * Se implementan los métodos de la clase ValidadorDeEntrada.
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
#include "ValidadorDeEntrada.hpp"

//Se utiliza const ya que no se modificarán los valores de las matrices
// Se utiliza & para pasar las matrices por referencia y no por valor
void ValidadorDeEntrada::validarTipoDato(const std::string& input) {
    if (input != "int" && input != "float" && input != "complex") {
        throw std::invalid_argument("Tipo de dato no soportado. Utilice 'int', 'float' o 'complex'.");
    }
}

void ValidadorDeEntrada::validarDimensiones(int filas, int columnas) {
    if (filas <= 0 || columnas <= 0) {
        throw std::invalid_argument("Las dimensiones de la matriz deben ser positivas y mayores que cero.");
    }
}


