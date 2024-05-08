/**
 * @file OperacionesBasicas.cpp
 * @brief Implementación de la clase OperacionesBasicas.
 * 
 * Se implementan los métodos de la clase OperacionesBasicas.
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
 * 
 */


#include "OperacionesBasicas.hpp"
#include <complex>
#include <stdexcept>

template<typename T>
// Se utiliza const ya que no se modificarán los valores de las matrices
// Se utiliza & para pasar las matrices por referencia y no por valor
void OperacionesBasicas<T>::validarSumaResta(const Matriz<T>& a, const Matriz<T>& b) {
    // Se valida que las matrices tengan las mismas dimensiones
    if (a.getFilas() != b.getFilas() || a.getColumnas() != b.getColumnas()) {
        throw std::invalid_argument("Las matrices deben tener las mismas dimensiones para suma o resta.");
    }
}

template<typename T>
// Se utiliza const ya que no se modificarán los valores de las matrices
// Se utiliza & para pasar las matrices por referencia y no por valor
void OperacionesBasicas<T>::validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
    if (a.getColumnas() != b.getFilas()) {
        throw std::invalid_argument("El número de columnas de la primera matriz debe ser igual al número de filas de la segunda matriz para multiplicar.");
    }
}

// Se utiliza typename para indicar que se trata de un tipo de dato genérico
// Se utiliza T para indicar que se trata de un tipo de dato genérico
template<typename T>
Matriz<T> OperacionesBasicas<T>::suma(const Matriz<T>& a, const Matriz<T>& b) {
    validarSumaResta(a, b);
    return a + b;
}

template<typename T>
Matriz<T> OperacionesBasicas<T>::resta(const Matriz<T>& a, const Matriz<T>& b) {
    validarSumaResta(a, b);
    return a - b;
}

template<typename T>
Matriz<T> OperacionesBasicas<T>::multiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
    validarMultiplicacion(a, b);
    return a * b;
}

// Instanciaciones de la clase OperacionesBasicas para los tipos de datos int, float y std::complex<double>

//Si no se realizan estas instanciaciones, se obtendrá un error de "undefined reference to OperacionesBasicas<int>::suma(Matriz<int> const&, Matriz<int> const&)"
//Esto se debe a que el compilador no puede generar el código de la clase OperacionesBasicas para los tipos de datos int, float y std::complex<double> si no se le indica explícitamente

// Se usa template class para indicar que se realizará una instanciación explícita de la clase OperacionesBasicas
template class OperacionesBasicas<int>;
template class OperacionesBasicas<float>;
template class OperacionesBasicas<std::complex<double>>;
