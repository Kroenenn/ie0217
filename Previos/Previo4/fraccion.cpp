#include <iostream>

/**
 * @file fraccion.cpp
 * @brief Programa para manejar fracciones matemáticas.
 *
 * Contiene la definición de la clase Fraccion y su uso para sumar dos fracciones y mostrar el resultado.
 */

using namespace std;

/**
 * @class Fraccion
 * @brief Clase que representa una fracción matemática.
 *
 * Esta clase maneja fracciones matemáticas y sobrecarga el operador '+' para sumar fracciones.
 */
class Fraccion {
private:
    int numerador;   ///< Numerador de la fracción.
    int denominador; ///< Denominador de la fracción.

public:
    /**
     * @brief Constructor de la clase Fraccion.
     * @param n Numerador de la fracción.
     * @param d Denominador de la fracción. Por defecto es 1 para evitar división por cero.
     */
    Fraccion(int n, int d = 1) : numerador(n), denominador(d) {}

    /**
     * @brief Sobrecarga del operador '+' para sumar fracciones.
     * @param f Referencia constante a la fracción a sumar.
     * @return Fraccion que representa la suma de la fracción actual y la fracción dada.
     */
    Fraccion operator+(const Fraccion &f) {
        Fraccion resultado(
            numerador * f.denominador + f.numerador * denominador,
            denominador * f.denominador
        );
        return resultado;
    }

    /**
     * @brief Imprime la fracción en formato 'numerador/denominador'.
     */
    void imprimir() {
        cout << numerador << "/" << denominador << endl;
    }
};

/**
 * @brief Función principal del programa.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 */
int main() {
    Fraccion f1(1, 2); // Crea la fracción 1/2.
    Fraccion f2(3, 4); // Crea la fracción 3/4.

    // Suma f1 y f2 y guarda el resultado en f3.
    Fraccion f3 = f1 + f2;

    // Imprime el resultado de la suma de f1 y f2.
    f3.imprimir();

    return 0;
}
