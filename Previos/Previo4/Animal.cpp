#include <iostream>
#include <string>

/**
 * @file Animal.cpp
 * @brief Ejemplo de código C++ para la clase Animal y su derivada Perro.
 */

using namespace std;

/**
 * @class Animal
 * @brief Clase base para representar animales genéricos.
 *
 * Esta clase proporciona características básicas como nombre y edad para animales.
 */
class Animal {
public:
    /**
     * @brief Establece la edad del animal.
     * @param age Edad del animal a establecer.
     */
    void setEdad(int age) {
        edad = age;
    }

    /**
     * @brief Obtiene la edad del animal.
     * @return Edad del animal.
     */
    int getEdad() {
        return edad;
    }

protected:
    string nombre; ///< Nombre del animal.

private:
    int edad; ///< Edad del animal.
};

/**
 * @class Perro
 * @brief Clase derivada de Animal específica para perros.
 *
 * Esta clase hereda de Animal y añade funcionalidad específica para perros.
 */
class Perro : public Animal {
public:
    /**
     * @brief Establece el nombre del perro.
     * @param n Nombre del perro a establecer.
     */
    void setNombre(string n) {
        nombre = n;
    }

    /**
     * @brief Obtiene el nombre del perro.
     * @return Nombre del perro.
     */
    string getNombre() {
        return nombre;
    }
};

/**
 * @brief Punto de entrada principal del programa.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 */
int main() {
    Perro miPerro;
    miPerro.setNombre("Toby");
    miPerro.setEdad(3);

    cout << "Mi perro se llama " << miPerro.getNombre() << endl; 
    cout << "y tiene " << miPerro.getEdad() << " años." << endl;

    return 0;
}
