#include <iostream>

/**
 * @file friend_class.cpp
 * @brief Demostración del uso de una clase amiga.
 */

using namespace std;

// Declaración anticipada de ClassB para que pueda ser declarada como friend en ClassA.
class ClassB;

/**
 * @class ClassA
 * @brief Clase que tiene un entero privado y declara ClassB como clase amiga.
 */
class ClassA {
private:
    int numA; ///< Entero privado de ClassA.

    // Declaración de la clase amiga.
    friend class ClassB;

public:
    /**
     * @brief Constructor que inicializa numA a 12.
     */
    ClassA() : numA(12) {}
};

/**
 * @class ClassB
 * @brief Clase que contiene un método para sumar su entero privado y el de una instancia de ClassA.
 */
class ClassB {
private:
    int numB; ///< Entero privado de ClassB.

public:
    /**
     * @brief Constructor que inicializa numB a 1.
     */
    ClassB() : numB(1) {}

    /**
     * @brief Suma numA de un objeto de ClassA y numB de esta instancia.
     * @return La suma de numA y numB.
     */
    int add() {
        ClassA objectA;
        return objectA.numA + numB;
    }
};

/**
 * @brief Función principal del programa.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 */
int main() {
    ClassB objectB;
    
    // Imprime la suma de los enteros de un objeto de ClassA y objectB.
    cout << "Sum: " << objectB.add() << endl;

    return 0;
}
