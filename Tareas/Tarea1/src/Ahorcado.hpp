/**
 * @file Ahorcado.hpp
 * @brief Archivo de cabecera que define la estructura Ahorcado para el juego del ahorcado.
 *
 * Este archivo contiene la definición de la estructura Ahorcado, que tiene
 * información sobre el estado actual del juego, incluyendo la palabra a adivinar,
 * el estado de la palabra, el número máximo de intentos y el número actual de
 * intentos realizados.
 */

#ifndef AHORCADO_HPP
#define AHORCADO_HPP

#include <string>
#include <vector>

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
    std::vector<std::string> diccionario; ///< Diccionario de palabras posibles para el juego.

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