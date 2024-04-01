/**
 * @file Ahorcado.hpp
 * @brief Archivo de cabecera que define la estructura Ahorcado para el juego del ahorcado.
 *
 * Este archivo contiene la definición de la estructura Ahorcado, que tiene
 * información sobre el estado actual del juego, incluyendo la palabra a adivinar,
 * el estado de la palabra, el número máximo de intentos y el número actual de
 * intentos realizados.
 * 
 * Además, se incluye un diccionario de palabras posibles para el juego, que se
 * puede modificar para incluir palabras adicionales.
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

#ifndef AHORCADO_HPP
#define AHORCADO_HPP
#define MAX_PALABRAS 100
#include <string>

/**
 * @struct Ahorcado
 * @brief Estructura para representar el estado del juego Ahorcado.
 *
 * Almacena la palabra que se está adivinando, el estado actual de la palabra
 * (con letras adivinadas y guiones para letras no adivinadas), el número máximo
 * de intentos permitidos y el número actual de intentos realizados. Además,
 * contiene un diccionario de palabras posibles para el juego.
 */

struct Ahorcado {
    std::string palabraAdivinar; ///< Palabra que se está intentando adivinar.
    std::string estadoActual; ///< Estado actual de la palabra adivinada.
    int maximoIntentos; ///< Número máximo de intentos permitidos.
    int intentosRealizados; ///< Número de intentos realizados.
    std::string diccionario[MAX_PALABRAS]; ///< Diccionario de palabras posibles para el juego.
    int cantidadPalabras;

    /**
     * @brief Constructor por defecto para inicializar el juego de ahorcado.
     *
     * Establece los valores iniciales para un juego nuevo, incluyendo la cantidad
     * máxima de intentos y el estado inicial de la palabra a adivinar. El diccionario
     * de palabras también se inicia con un conjunto de palabras que ya se definio.
     */

    Ahorcado();
};

#endif // AHORCADO_HPP