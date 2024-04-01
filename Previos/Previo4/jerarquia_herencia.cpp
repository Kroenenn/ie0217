#include <iostream>

/**
 * @file jerarquia_herencia.cpp
 * @brief Demostración de herencia (y polimorfismo).
 */

using namespace std;

/**
 * @class Animal
 * @brief Clase base que representa un animal genérico.
 */
class Animal {
public:
    /**
     * @brief Muestra información del animal.
     */
    void info() {
        cout << "I am an animal." << endl;
    }
};

/**
 * @class Dog
 * @brief Clase derivada que representa un perro.
 *
 * Deriva de la clase Animal.
 */
class Dog : public Animal {
public:
    /**
     * @brief Hace que el perro ladre.
     */
    void bark() {
        cout << "I am a Dog - Woof woof." << endl;
    }
};

/**
 * @class Cat
 * @brief Clase derivada que representa un gato.
 *
 * Deriva de la clase Animal.
 */
class Cat : public Animal {
public:
    /**
     * @brief Hace que el gato maúlle.
     */
    void meow() {
        cout << "I am a Cat - Meow." << endl;
    }
};

/**
 * @brief Función principal del programa.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 */
int main() {
    // Crea un objeto de la clase Dog y llama a sus funciones.
    Dog dog1;
    cout << "Dog Class:" << endl;
    dog1.info(); // Función de la clase base
    dog1.bark();

    // Crea un objeto de la clase Cat y llama a sus funciones.
    Cat cat1;
    cout << "Cat Class:" << endl;
    cat1.info(); // Función de la clase base
    cat1.meow();

    return 0;
}
