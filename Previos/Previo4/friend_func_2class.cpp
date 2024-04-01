#include <iostream>

/**
 * @file friend_func_2class.cpp
 * @brief Demostración del uso de una función friend con dos clases.
 */

using namespace std;

// Predeclaración de ClassB para que ClassA la pueda utilizar en la declaración friend.
class ClassB;

/**
 * @class ClassA
 * @brief Clase que contiene un entero y una función amiga.
 */
class ClassA {
public:
    /**
     * @brief Constructor que inicializa numA a 12.
     */
    ClassA() : numA(12) {}

private:
    int numA; ///< Entero privado de ClassA.

    /**
     * @brief Declaración de una función friend que puede acceder a los miembros privados.
     * @param objectA Instancia de ClassA.
     * @param objectB Instancia de ClassB.
     * @return Suma de los enteros de ClassA y ClassB.
     */
    friend int add(ClassA, ClassB);
};

/**
 * @class ClassB
 * @brief Clase que contiene un entero y una función amiga.
 */
class ClassB {
public:
    /**
     * @brief Constructor que inicializa numB a 1.
     */
    ClassB() : numB(1) {}

private:
    int numB; ///< Entero privado de ClassB.

    // Declaración de la función friend que puede acceder a los miembros privados.
    friend int add(ClassA, ClassB);
};

/**
 * @brief Función amiga de las clases ClassA y ClassB que puede acceder a sus miembros privados.
 * @param objectA Instancia de ClassA.
 * @param objectB Instancia de ClassB.
 * @return Suma de los enteros de ClassA y ClassB.
 */
int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

/**
 * @brief Función principal del programa.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 */
int main() {
    ClassA objectA;
    ClassB objectB;
    
    // Imprime la suma de los enteros privados de objectA y objectB.
    cout << "Sum: " << add(objectA, objectB) << endl;

    return 0;
}
