#ifndef PERSONA_H
#define PERSONA_H

#include <string>

/**
 * @file persona.hpp
 * @brief Archivo de cabecera para la clase Persona.
 */

using namespace std;

/**
 * @class Persona
 * @brief Clase que representa a una persona con nombre y edad.
 *
 * Esta clase se utiliza para gestionar la información de una persona.
 */
class Persona {
private:
    string nombre; ///< Nombre de la persona.
    int edad;      ///< Edad de la persona.

public:
    /**
     * @brief Constructor para crear una nueva persona con nombre y edad.
     * @param nombre Nombre de la persona.
     * @param edad Edad de la persona.
     */
    Persona(string nombre, int edad);

    /**
     * @brief Obtiene el nombre de la persona.
     * @return El nombre de la persona.
     */
    string getNombre();

    /**
     * @brief Obtiene la edad de la persona.
     * @return La edad de la persona.
     */
    int getEdad();

    /**
     * @brief Establece la edad de la persona.
     * @param edad Nueva edad de la persona.
     */
    void setEdad(int edad);
};

#endif // PERSONA_H
