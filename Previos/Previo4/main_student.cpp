#include <iostream>
#include "funciones_student.hpp"

/**
 * @file main_student.cpp
 * @brief Demostración del uso de la clase Student y la función calculateAverage.
 */

using namespace std;

/**
 * @brief Punto de entrada principal del programa.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 */
int main() {
    Student student1(88.0), student2(56.0);

    calculateAverage(student1, student2);

    return 0;
}
