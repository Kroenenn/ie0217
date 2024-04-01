#include "funciones_student.hpp"
#include <iostream>

/**
 * @file funciones_student.cpp
 * @brief Implementación de las funciones asociadas a la clase Student.
 */

/**
 * @brief Calcula y muestra el promedio de las notas de dos estudiantes.
 * @param s1 Primer estudiante.
 * @param s2 Segundo estudiante.
 */
void calculateAverage(Student s1, Student s2) {
    double average = (s1.marks + s2.marks) / 2;
    std::cout << "Average Marks = " << average << std::endl;
}
