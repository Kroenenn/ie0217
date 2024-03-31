#include <iostream>

/**
 * @file Students.cpp
 * @brief Ejemplo de código C++ para la clase Student.
 */

using namespace std;

/**
 * @class Student
 * @brief Clase para representar un estudiante con sus notas.
 *
 * Esta clase almacena las notas de un estudiante y tiene la capacidad de inicializarse con un valor dado.
 */
class Student {
public:
    double marks; ///< Notas del estudiante.

    /**
     * @brief Constructor que inicializa un estudiante con sus notas.
     * @param m Notas del estudiante.
     */
    Student(double m) : marks(m) {}
};

/**
 * @brief Calcula y muestra el promedio de las notas de dos estudiantes.
 * @param s1 Primer estudiante.
 * @param s2 Segundo estudiante.
 */
void calculateAverage(Student s1, Student s2) {
    double average = (s1.marks + s2.marks) / 2;
    cout << "Average Marks = " << average << endl;
}

/**
 * @brief Punto de entrada principal del programa.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 */
int main() {
    Student student1(88.0), student2(56.0); // Creación de dos objetos de tipo Student.

    calculateAverage(student1, student2); // Calcula y muestra el promedio de notas de ambos estudiantes.

    return 0;
}
