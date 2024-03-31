#include <iostream>

/**
 * @file class.cpp
 * @brief Ejemplo de clase Molde
 */

using namespace std;

/**
 * @class Molde
 * @brief Clase que representa un molde con dimensiones en un espacio tridimensional.
 *
 * La clase Molde se utiliza para calcular el área y volumen de un objeto.
 */
class Molde {
public:
    double largo;   ///< Largo del molde
    double ancho;   ///< Ancho del molde
    double altura;  ///< Altura del molde

    /**
     * @brief Constructor por defecto.
     *
     * Este constructor inicializa un objeto Molde e imprime un mensaje.
     */
    Molde() {
        cout << "Esto se ejecuta en cada instanciación" << endl;
        cout << "Iniciando un objeto de la clase Molde" << endl;
    }

    /**
     * @brief Calcula el área del molde.
     * @return Área del molde como un double.
     */
    double calcularArea() {
        return largo * ancho;
    }

    /**
     * @brief Calcula el volumen del molde.
     * @return Volumen del molde como un double.
     */
    double calcularVolumen() {
        return largo * ancho * altura;
    }
};

/**
 * @brief Función principal del programa.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 */
int main() {
    // Instancia de la clase Molde llamada 'pared'.
    Molde pared;

    // Asigna valores al objeto 'pared'.
    pared.largo = 400.5;
    pared.ancho = 20.8;
    pared.altura = 315.2;

    // Calcula y muestra el área y volumen del objeto 'pared'.
    cout << "Área = " << pared.calcularArea() << endl;
    cout << "Volumen = " << pared.calcularVolumen() << endl;

    return 0;
}
