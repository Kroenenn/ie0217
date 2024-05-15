/**
 * @file main.cpp
 * @brief Archivo principal del programa Validador de correos electrónicos
 *
 * Este archivo contiene la función main que permite al usuario ingresar un correo electrónico y determinar si es válido o no.
 * El usuario puede ingresar un correo electrónico y especificar si el correo tiene una extensión compuesta.
 * El programa utiliza la clase ValidadorEmail para validar el correo electrónico ingresado.
 *
 * @see ValidadorEmail.hpp
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


#include "ValidadorEmail.hpp"
#include <iostream>
#include <exception>
#include <limits>  // Para std::numeric_limits


int main() {
    ValidadorEmail validador; // Instancia de la clase ValidadorEmail
    std::string email; // Correo electrónico ingresado por el usuario
    char complex; // Carácter que indica si la extensión del correo es compuesta
    int option = 0; // Opción seleccionada por el usuario

    do {
        std::cout << "\n______________________________________________________\n";
        std::cout << "Validador de correos electrónicos\n";
        std::cout << "______________________________________________________\n";
        std::cout << "\n1. Ingresar email para validar\n2. Salir\nSeleccione una opción: ";
        if (!(std::cin >> option)) {
            // Si falla la lectura de la opción (entrada no numérica u otro error)
            std::cout << "Error: Opción inválida. Intente de nuevo.\n";
            std::cin.clear(); // Limpia el estado de error de std::cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora lo que queda en el buffer
            continue; // Salta a la próxima iteración del ciclo
        }

        // Limpiar el buffer de entrada después de leer la opción para evitar problemas en la próxima lectura
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (option == 1) {

            std::cout << "\nIngrese el correo electrónico: ";
            std::getline(std::cin, email);
            std::cout << "¿El correo tiene una extensión compuesta? (Y/N): ";
            while (true) {
                if (std::cin >> complex && (complex == 'Y' || complex == 'N' || complex == 'y' || complex == 'n')) {
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpiar buffer después de leer 'complex'
                    break; // Salir del bucle si la entrada es válida
                } else {
                    std::cout << "\nError: Opción inválida. Intente de nuevo.\n";
                    std::cout << "¿El correo tiene una extensión compuesta? (Y/N): ";
                    std::cin.clear(); // Limpia el estado de error de std::cin
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora lo que queda en el buffer
                }
            }
            try {
                if (validador.validarCorreo(email, complex)) {
                    std::cout << "\nEl correo es válido.\n";
                }
            } catch (const std::exception& e) {
                std::cout << "\n" << e.what() << std::endl;
            }
        }
    } while (option != 2);

    return 0;
}
