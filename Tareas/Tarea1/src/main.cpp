/**
 * @file main.cpp
 * @brief Punto de entrada para el juego Ahorcado.
 *
 * Este archivo contiene la función main, que es el punto de entrada del juego Ahorcado.
 * Aquí se maneja la interacción con el usuario, el bucle del juego y las decisiones 
 * del menú principal.
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

#include "Funciones.cpp"
#include <iostream>

/**
 * @brief Función principal que ejecuta el juego Ahorcado.
 *
 * En el bucle del juego, se muestra el menú, se procesan las entradas del usuario y 
 * se actualiza el estado del juego según la elección del usuario.
 *
 * @return Estado de salida del programa.
 */

int main() {
    Ahorcado juego; 
    bool salir = false; 
    
    while (!salir) {
        mostrarMenu();
        int opcion; ///< `opcion` es la variable que almacena la opción seleccionada por el usuario.
        std::cin >> opcion;
        switch (opcion) {
            case 1: {
                std::cout << "Elija la dificultad: 1. Fácil (7 intentos), 2. Intermedio (5 intentos), 3. Difícil (3 intentos)." << std::endl;
                int dificultad; ///< `dificultad` es la variable que almacena la dificultad seleccionada por el usuario.
                std::cin >> dificultad;
                if (dificultad == 1) juego.maximoIntentos = 7;
                else if (dificultad == 2) juego.maximoIntentos = 5;
                else if (dificultad == 3) juego.maximoIntentos = 3;
                else std::cout << "Dificultad no válida, por defecto fácil." << std::endl;
                break;
            }
            case 2: {
                inicializarJuego(juego);
                char letra; ///< `letra` es la variable que almacena la letra introducida por el usuario.
                while (!juegoTerminado(juego)) {
                    mostrarEstadoActual(juego);
                    std::cout << "Introduzca una letra: ";
                    std::cin >> letra;
                    if (!intentarLetra(juego, letra)) {
                        std::cout << "Letra incorrecta o ya utilizada." << std::endl;
                    }
                    if (juegoGanado(juego)) {
                        std::cout << "¡Felicidades! Ha adivinado la palabra: " << juego.palabraAdivinar << std::endl;
                        break;
                    }
                }
                if (!juegoGanado(juego) && juego.intentosRealizados >= juego.maximoIntentos) {
                    std::cout << "Se acabaron los intentos. Adivine toda la palabra: ";
                    std::string adivinanza; ///< `adivinanza` es la variable que almacena la palabra introducida por el usuario.
                    std::cin >> adivinanza;
                    if (adivinanza == juego.palabraAdivinar) {
                        std::cout << "¡Felicidades! Ha adivinado la palabra: " << juego.palabraAdivinar << std::endl;
                    } else {
                        std::cout << "GAME OVER. La palabra era: " << juego.palabraAdivinar << std::endl;
                    }
                }
                break;
            }
            case 3: {
                std::string nuevaPalabra; ///< `nuevaPalabra` es la variable que almacena la palabra introducida por el usuario.
                std::cout << "Escriba la palabra que desea agregar al diccionario: ";
                std::cin >> nuevaPalabra;
                agregarPalabraDiccionario(juego, nuevaPalabra);
                break;
            }
            case 4: {
                std::cout << "Diccionario de palabras: " << std::endl;
                for (const auto &palabra : juego.diccionario) { // Se recorre el diccionario de palabras y se imprime cada palabra.
                    std::cout << palabra << std::endl;
                }
                break;
            }
            case 5: {
                std::cout << "Gracias por jugar, ¡adiós!" << std::endl;
                salir = true;
                break;
            }
            default: {
                std::cout << "Esa opción no existe. Intente de nuevo." << std::endl;
                break;
            }
        }
    }
    
    return 0;
}
