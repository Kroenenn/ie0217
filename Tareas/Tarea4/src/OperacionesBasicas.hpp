/**
 * @file OperacionesBasicas.hpp
 * @brief Declaración de la clase OperacionesBasicas.
 * 
 * Esta clase contiene las operaciones básicas que se pueden realizar con matrices.
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
#ifndef OPERACIONES_BASICAS_HPP
#define OPERACIONES_BASICAS_HPP

#include "Matriz.hpp"
#include <algorithm>
#include <vector>
#include <iterator>

template<typename T>
/**
 * @brief Clase OperacionesBasicas
 * 
 * Esta clase contiene las operaciones básicas que se pueden realizar con matrices.
*/
class OperacionesBasicas {
public:
    /**
     * @brief Valida si dos matrices se pueden sumar o restar.
     * 
     * Esta función valida si dos matrices se pueden sumar o restar.
     * @param a Matriz a.
     * @param b Matriz b.
    */
    static void validarSumaResta(const Matriz<T>& a, const Matriz<T>& b);

    /**
     * @brief Valida si dos matrices se pueden multiplicar.
     * 
     * Esta función valida si dos matrices se pueden multiplicar.
     * @param a Matriz a.
     * @param b Matriz b.
    */
    static void validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b);

    /**
     * @brief Suma dos matrices.
     * 
     * Esta función suma dos matrices.
     * @param a Matriz a.
     * @param b Matriz b.
     * @return Matriz resultante de la suma.
    */
    static Matriz<T> suma(const Matriz<T>& a, const Matriz<T>& b);

    /**
     * @brief Resta dos matrices.
     * 
     * Esta función resta dos matrices.
     * @param a Matriz a.
     * @param b Matriz b.
     * @return Matriz resultante de la resta.
    */
    static Matriz<T> resta(const Matriz<T>& a, const Matriz<T>& b);

    /**
     * @brief Multiplica dos matrices.
     * 
     * Esta función multiplica dos matrices.
     * @param a Matriz a.
     * @param b Matriz b.
     * @return Matriz resultante de la multiplicación.
    */
    static Matriz<T> multiplicacion(const Matriz<T>& a, const Matriz<T>& b);
};


#endif // OPERACIONES_BASICAS_HPP
