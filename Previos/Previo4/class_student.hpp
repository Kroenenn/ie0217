#ifndef CLASS_STUDENT_HPP
#define CLASS_STUDENT_HPP

#include <string>

/**
 * @file class_student.hpp
 * @brief Archivo de cabecera para la clase Student.
 *
 * Define una clase Student que representa a un estudiante con sus notas.
 */

/**
 * @class Student
 * @brief Representa a un estudiante y sus notas.
 */
class Student {
public:
    double marks; ///< Notas del estudiante.

    /**
     * @brief Constructor que inicializa un estudiante con sus notas.
     * @param m Notas del estudiante.
     */
    Student(double m);
};

#endif // CLASS_STUDENT_HPP
