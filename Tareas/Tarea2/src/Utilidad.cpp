/**
 * @file Utilidad.cpp
 * @brief Implementación de funciones auxiliares para el cálculo de números primos.
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

#include "Utilidad.hpp"

// Función para determinar si un número es primo.
// Se verifica si el número es menor o igual a 1, si es 2, si es par, y si es divisible por algún número impar.
// Si no se cumple ninguna de las condiciones anteriores, se considera primo.
bool esNumeroPrimo(unsigned int numero) {
    if (numero <= 1) return false;
    if (numero == 2) return true;
    if (numero % 2 == 0) return false;
    for (unsigned int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) return false;
    }
    return true;
}


// Función para obtener el siguiente número primo a partir de un número dado.
// Si el número es menor que 2, el siguiente primo es 2.
// Si el número es par, se busca el siguiente número impar.
// Si el número es impar, se busca el siguiente número impar.
// Se incrementa el número en 2 hasta encontrar un número primo.
unsigned int siguienteNumeroPrimo(unsigned int numero) {
    // Si el número es menor que 2, el siguiente primo es 2.
    if (numero < 2) {
        return 2;
    }

    // Comenzar con el número inmediatamente superior al número dado.
    unsigned int siguiente;
    if (numero % 2 == 0) {
        siguiente = numero + 1; // Si es par, toma el siguiente número impar.
    } else {
        siguiente = numero + 2; // Si es impar, salta al próximo número impar.
    }
    
    // Mientras que siguiente no sea primo, se busca el próximo número impar.
    while (!esNumeroPrimo(siguiente)) {
        siguiente += 2;
    }

    return siguiente;
}

