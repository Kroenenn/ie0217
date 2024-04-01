/**
 * @file Funciones.hpp
 * @brief Declaraciones de funciones para la lógica del juego Ahorcado.
 *
 * Este archivo contiene las declaraciones de las funciones utilizadas para el
 * manejo del juego Ahorcado, incluyendo la interacción con el usuario y la
 * actualización del estado del juego.
 */

#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP
#include "Ahorcado.hpp"


/**
 * @brief Muestra el menú principal del juego.
 */

void mostrarMenu();

/**
 * @brief Inicializa un nuevo juego.
 * @param juego Referencia a la estructura del juego a ser inicializada.
 */
void inicializarJuego(Ahorcado &juego);

/**
 * @brief Intenta una letra en el juego actual.
 * @param juego Referencia a la estructura del juego actual.
 * @param letra La letra que se intenta.
 * @return Verdadero si la letra es correcta, falso en caso contrario.
 */
bool intentarLetra(Ahorcado &juego, char letra);

/**
 * @brief Verifica si el juego ha sido ganado.
 * @param juego Referencia a la estructura del juego actual.
 * @return Verdadero si el juego ha sido ganado, falso en caso contrario.
 */
bool juegoGanado(const Ahorcado &juego);

/**
 * @brief Verifica si el juego ha terminado.
 * @param juego Referencia a la estructura del juego actual.
 * @return Verdadero si el juego ha terminado, falso en caso contrario.
 */
bool juegoTerminado(const Ahorcado &juego);

/**
 * @brief Muestra el estado actual del juego.
 * @param juego Referencia a la estructura del juego actual.
 */
void mostrarEstadoActual(const Ahorcado &juego);

/**
 * @brief Agrega una palabra al diccionario de palabras posibles.
 * @param juego Referencia a la estructura del juego actual.
 * @param palabra La palabra a ser agregada al diccionario.
 */
void agregarPalabraDiccionario(Ahorcado &juego, const std::string &palabra);

#endif // FUNCIONES_HPP
