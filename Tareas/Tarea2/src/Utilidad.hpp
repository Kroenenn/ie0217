/**
 * @file Utilidad.hpp
 * @brief Define funciones útiles para trabajar con números primos.
 *
 * Este archivo contiene la declaración de funciones que ayudan a determinar
 * si un número es primo y a encontrar el siguiente número primo.
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

#ifndef UTILIDAD_HPP
#define UTILIDAD_HPP


/**
 * @brief Determina si un número es primo.
 *
 * Esta función comprueba si un número dado es primo, es decir,
 * solo divisible por 1 y por sí mismo.
 *
 * @param numero El número que se quiere verificar si es primo.
 * @return true si el número es primo, false en caso contrario.
 */
bool esNumeroPrimo(unsigned int numero);

/**
 * @brief Encuentra el siguiente número primo después de un número dado.
 *
 * Esta función busca el menor primo que es mayor al número proporcionado.
 * Utiliza una iteración simple para encontrar el siguiente primo.
 *
 * @param numero El número base para buscar el siguiente primo.
 * @return El siguiente número primo mayor que el número dado.
 */
unsigned int siguienteNumeroPrimo(unsigned int numero);

#endif // UTILIDAD_HPP
