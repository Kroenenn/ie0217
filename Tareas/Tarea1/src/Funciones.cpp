/**
 * @file Funciones.cpp
 * @brief Implementación de las funciones para la lógica del juego Ahorcado.
 *
 * Este archivo contiene la implementación de las funciones declaradas en Funciones.hpp y 
 * son utilizadas para el manejo del juego Ahorcado, incluyendo la interacción con el 
 * usuario y la actualización del estado del juego.
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

#include "Funciones.hpp"
#include <iostream>
#include <random>

/**
 * @brief Constructor por defecto para la estructura Ahorcado.
 * Inicializa un juego nuevo con valores predeterminados.
 */
Ahorcado::Ahorcado() {
    maximoIntentos = 7; // Valor predeterminado para dificultad fácil
    intentosRealizados = 0;
    cantidadPalabras = 3;
    diccionario[0] = "ejemplo";
    diccionario[1] = "ahorcado";
    diccionario[2] = "programacion";
}

/**
 * @brief Muestra el menú principal del juego con las opciones disponibles.
 */
void mostrarMenu() {
    std::cout << "1. Elegir la dificultad del juego (número de intentos)." << std::endl;
    std::cout << "2. Iniciar el juego." << std::endl;
    std::cout << "3. Agregar palabras al arreglo de palabras que se escogen aleatoriamente." << std::endl;
    std::cout << "4. Ver diccionario de palabras." << std::endl;
    std::cout << "5. Salir del programa." << std::endl;
}

/**
 * @brief Inicializa el juego seleccionando una palabra aleatoria del diccionario y preparando el estado inicial.
 * @param juego Referencia a la estructura de Ahorcado para inicializar.
 */
void inicializarJuego(Ahorcado &juego) {
    // Se genera una semilla diferente en cada ejecución
    std::random_device rd; // Se crea un objeto random_device
    std::mt19937 gen(rd()); // Se crea un objeto mt19937 con la semilla de random_device
    std::uniform_int_distribution<> distrib(0, juego.cantidadPalabras - 1); // Se crea un objeto uniform_int_distribution con el rango de las palabras del diccionario

    // Se selecciona una palabra aleatoria del diccionario
    juego.palabraAdivinar = juego.diccionario[distrib(gen)];
    // Se configura estadoActual con guiones para cada letra de la palabra seleccionada
    juego.estadoActual = std::string(juego.palabraAdivinar.length(), '_');
    juego.intentosRealizados = 0;
}

/**
 * @brief Intenta una letra y actualiza el estado del juego.
 * @param juego Referencia a la estructura de Ahorcado.
 * @param letra La letra que se intenta adivinar.
 * @return Verdadero si la letra es parte de la palabra, falso de lo contrario.
 */
bool intentarLetra(Ahorcado &juego, char letra) {
    bool acierto = false;
    // Verificar si la letra ya fue descubierta
    if(juego.estadoActual.find(letra) != std::string::npos) {
        std::cout << "Ya ha descubierto esa letra." << std::endl;
        return false;
    }
    // Buscar la letra en la palabra a adivinar
    for(size_t i = 0; i < juego.palabraAdivinar.length(); ++i) {
        if(juego.palabraAdivinar[i] == letra) {
            juego.estadoActual[i] = letra;
            acierto = true;
        }
    }
    if(!acierto) {
        juego.intentosRealizados++;
    }
    return acierto;
}

/**
 * @brief Verifica si la palabra ha sido completamente adivinada.
 * @param juego Referencia a la estructura de Ahorcado.
 * @return Verdadero si el juego ha sido ganado, falso de lo contrario.
 */
bool juegoGanado(const Ahorcado &juego) {
    return juego.estadoActual == juego.palabraAdivinar;
}

/**
 * @brief Determina si el juego ha terminado, ya sea por haber ganado o por haberse quedado sin intentos.
 * @param juego Referencia a la estructura de Ahorcado.
 * @return Verdadero si el juego ha terminado, falso de lo contrario.
 */
bool juegoTerminado(const Ahorcado &juego) {
    return juegoGanado(juego) || (juego.intentosRealizados >= juego.maximoIntentos);
}

/**
 * @brief Muestra el estado actual del juego, incluyendo la palabra parcialmente adivinada y los intentos restantes.
 * @param juego Referencia a la estructura de Ahorcado.
 */
void mostrarEstadoActual(const Ahorcado &juego) {
    std::cout << "Palabra: " << juego.estadoActual << "\nIntentos Restantes: "
              << (juego.maximoIntentos - juego.intentosRealizados) << std::endl;
    
}

/**
 * @brief Agrega una nueva palabra al diccionario de palabras del juego.
 * @param juego Referencia a la estructura de Ahorcado.
 * @param palabra La palabra a agregar al diccionario.
 * @pre La cantidad de palabras en el diccionario es menor a MAX_PALABRAS.
 * @post La palabra es agregada al diccionario si hay espacio disponible.
 * @post La cantidad de palabras en el diccionario se incrementa en 1.
 */
void agregarPalabraDiccionario(Ahorcado &juego, const std::string &palabra) { 
    if (juego.cantidadPalabras < MAX_PALABRAS) {
        juego.diccionario[juego.cantidadPalabras] = palabra;
        juego.cantidadPalabras++;
    } else {
        std::cout << "El diccionario ya está lleno. No se puede agregar más palabras." << std::endl;
    }
}
