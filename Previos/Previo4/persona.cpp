#include "persona.hpp"

/**
 * @file persona.cpp
 * @brief Implementación de la clase Persona.
 */

using namespace std;

/**
 * @brief Constructor para crear una nueva persona con nombre y edad.
 * @param nombre Nombre de la persona.
 * @param edad Edad de la persona.
 */
Persona::Persona(string nombre, int edad) {
    this->nombre = nombre; // Se usa this-> para diferenciar entre el atributo y el parámetro.
    this->edad = edad;
}

/**
 * @brief Obtiene el nombre de la persona.
 * @return El nombre de la persona.
 */
string Persona::getNombre() {
    return nombre;
}

/**
 * @brief Obtiene la edad de la persona.
 * @return La edad de la persona.
 */
int Persona::getEdad() {
    return edad;
}

/**
 * @brief Establece la edad de la persona.
 * @param edad Nueva edad de la persona.
 */
void Persona::setEdad(int edad) {
    this->edad = edad;
}
