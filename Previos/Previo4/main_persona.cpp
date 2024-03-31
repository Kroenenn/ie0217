#include <iostream>
#include "persona.hpp"

/**
 * @file main_persona.cpp
 * @brief Demostración del uso de la clase Persona.
 */

using namespace std;

/**
 * @brief Punto de entrada principal del programa.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 */
int main() {
    // Crear una instancia de Persona.
    Persona p("Juan", 25);

    // Mostrar el nombre y la edad actuales de la persona.
    cout << "Nombre: " << p.getNombre() << endl;
    cout << "Edad: " << p.getEdad() << endl;

    // Cambiar y mostrar la nueva edad de la persona.
    p.setEdad(26);
    cout << "Nueva edad: " << p.getEdad() << endl;

    return 0;
}
