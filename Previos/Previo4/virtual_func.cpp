#include <iostream>

/**
 * @file virtual_func.cpp
 * @brief Demostración del uso de funciones virtuales.
 */

using namespace std;

/**
 * @class Base
 * @brief Clase base con una función miembro `print` que es virtual.
 *
 * La función `print` está diseñada para ser sobrescrita por clases derivadas.
 */
class Base {
public:
    /**
     * @brief Función virtual que imprime un mensaje.
     *
     * Esta función está destinada a ser sobrescrita en una clase derivada.
     */
    virtual void print() {
        cout << "Base Function" << endl;
    }
};

/**
 * @class Derived
 * @brief Clase derivada que sobrescribe la función `print` de Base.
 */
class Derived : public Base {
public:
    /**
     * @brief Sobrescribe la función `print` de la clase Base.
     */
    void print() override {
        cout << "Derived Function" << endl;
    }
};

/**
 * @brief Punto de entrada principal del programa.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 */
int main() {
    Derived derived1; // Crea una instancia de Derived.

    // Puntero de tipo Base que apunta a derived1.
    Base* base1 = &derived1;

    // Llama a la función `print` de Derived a través del puntero base1.
    base1->print();

    return 0;
}
