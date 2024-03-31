#include <iostream>

/**
 * @file Students2.cpp
 * @brief Ejemplo de código C++ para la creación y manejo de la clase Student.
 */

using namespace std;

/**
 * @class Student
 * @brief Clase que representa a un estudiante con dos conjuntos de notas.
 *
 * Esta clase almacena dos conjuntos diferentes de notas para un estudiante.
 */
class Student {
public:
    double marks1; ///< Primer conjunto de notas del estudiante.
    double marks2; ///< Segundo conjunto de notas del estudiante.
};

/**
 * @brief Crea y devuelve un nuevo estudiante con notas predefinidas.
 * @return Un objeto Student con notas inicializadas.
 */
Student createStudent() {
    Student student; // Crea una instancia de Student.

    // Asigna valores a los miembros del objeto Student.
    student.marks1 = 96.5;
    student.marks2 = 75.0;

    // Imprime las notas del estudiante.
    cout << "Marks 1 = " << student.marks1 << endl;
    cout << "Marks 2 = " << student.marks2 << endl;

    return student; // Devuelve el objeto student.
}

/**
 * @brief Punto de entrada principal del programa.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 */
int main() {
    Student student1; // Crea una instancia de Student.

    // Asigna a student1 los valores devueltos por la función createStudent.
    student1 = createStudent();

    return 0;
}
