#include <iostream>

/**
 * @file perro.cpp
 * @brief Ejemplo de herencia con las clases Animal y Dog.
 */

using namespace std;

/**
 * @class Animal
 * @brief Clase base que representa un animal genérico.
 *
 * La clase Animal define comportamientos como comer y dormir.
 */
class Animal {
public:
    /**
     * @brief Acción de comer.
     *
     * Imprime un mensaje indicando que el animal puede comer.
     */
    void eat() {
        cout << "I can eat!" << endl;
    }

    /**
     * @brief Acción de dormir.
     *
     * Imprime un mensaje indicando que el animal puede dormir.
     */
    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

/**
 * @class Dog
 * @brief Clase derivada que representa un perro, heredando de Animal.
 *
 * La clase Dog extiende la clase Animal con comportamientos específicos de un perro.
 */
class Dog : public Animal {
public:
    /**
     * @brief Acción de ladrar.
     *
     * Imprime un mensaje indicando que el perro puede ladrar.
     */
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

/**
 * @brief Punto de entrada principal del programa.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 */
int main() {
    Dog dog1; // Crea una instancia de Dog.

    // Llama a métodos de la clase base.
    dog1.eat();
    dog1.sleep();

    // Llama a un método de la clase derivada.
    dog1.bark();

    return 0;
}
