#include <iostream>

/**
 * @file herencia1.cpp
 * @brief Implementación de clases para demostrar los conceptos de herencia.
 */

using namespace std;

/**
 * @class Base
 * @brief Clase base con una función de impresión.
 */
class Base {
public:
    /**
     * @brief Imprime que es una función de la clase base.
     */
    void print() {
        cout << "Base Function" << endl;
    }
};

/**
 * @class Derived
 * @brief Clase derivada que hereda de Base y sobreescribe la función de impresión.
 */
class Derived : public Base {
public:
    /**
     * @brief Imprime que es una función de la clase derivada.
     */
    void print() {
        cout << "Derived Function" << endl;
    }
};

/**
 * @brief Punto de entrada principal del programa herencia1.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 */
int main() {
    Derived derived1;
    derived1.print(); // Imprime "Derived Function".
    return 0;
}
