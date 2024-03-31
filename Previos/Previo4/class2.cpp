#include <iostream>

/**
 * @file class2.cpp
 * @brief Ejemplo de clase Molde parte 2.
 */

using namespace std;

/**
 * @class Molde
 * @brief Clase que representa un molde con dimensiones en un espacio de tres dimensiones.
 *
 * Esta clase puede ser utilizada para calcular el área y volumen de un objeto.
 */
class Molde {
public:
    double largo;   ///< Largo del molde
    double ancho;   ///< Ancho del molde
    double altura;  ///< Altura del molde

    /**
     * @brief Constructor de la clase Molde.
     *
     * Inicializa un objeto de la clase Molde e imprime mensajes indicativos.
     */
    Molde() {
        cout << "Esto se ejecuta en cada instanciación" << endl;
        cout << "Iniciando un objeto de la clase Molde" << endl;
    }

    /**
     * @brief Calcula el área del molde.
     * @return Área del objeto como un valor de punto flotante.
     */
    double calcularArea() {
        return largo * ancho;
    }

    /**
     * @brief Calcula el volumen del molde.
     * @return Volumen del objeto como un valor de punto flotante.
     */
    double calcularVolumen() {
        return largo * ancho * altura;
    }
};

/**
 * @brief Punto de entrada principal del programa.
 * @return Retorna 0 si el programa termina exitosamente.
 */
int main() {
    // Instancia un objeto llamado 'pared' de la clase Molde.
    Molde pared;

    // Asigna valores al objeto 'pared'.
    pared.largo = 400.5;
    pared.ancho = 20.8;
    pared.altura = 315.2;

    // Calcula y muestra el área y volumen del objeto 'pared'.
    cout << "Area = " << pared.calcularArea() << endl;
    cout << "Volumen = " << pared.calcularVolumen() << endl;

    return 0;
}
