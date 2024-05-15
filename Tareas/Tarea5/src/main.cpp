
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
