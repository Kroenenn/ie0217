#include <iostream>

/**
 * @file main2.cpp
 * @brief Ejemplo del video parte 3 para la clase Molde.
 */

using namespace std;

/**
 * @class Molde
 * @brief Clase que representa un molde con dimensiones en un espacio tridimensional.
 *
 * Esta clase permite definir y manipular las dimensiones de un objeto para calcular
 * su área y volumen.
 */
class Molde {
public:
    double largo;   ///< Largo del molde
    double ancho;   ///< Ancho del molde
    double alto;    ///< Altura del molde

    /**
     * @brief Constructor que inicializa las dimensiones del molde.
     * @param largo_p Largo del molde.
     * @param ancho_p Ancho del molde.
     * @param alto_p Altura del molde.
     */
    Molde(double largo_p, double ancho_p, double alto_p) 
        : largo(largo_p), ancho(ancho_p), alto(alto_p) {
            cout << "Probando si se puede imprimir" << endl;
    }

    ~Molde() {
        cout << "Saludos desde el destructor de la clase Molde" << endl;
    }


    /**
     * @brief Calcula el área del molde.
     * @return Área del objeto como un valor de tipo double.
     */
    double calcularArea() {
        return largo * ancho;
    }

    /**
     * @brief Calcula el volumen del molde.
     * @return Volumen del objeto como un valor de tipo double.
     */
    double calcularVolumen() {
        return largo * ancho * alto;
    }
};

/**
 * @brief Función principal del programa.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 */
int main(){
    int variable_entera;  ///< Variable entera sin uso específico en el programa.

    // Crea una instancia de Molde con valores iniciales para largo, ancho y alto.
    Molde pared(10.0, 20.0, 35.0);

    // Muestra el área y el volumen del objeto pared.
    cout << "El área es: " << pared.calcularArea() << endl;
    cout << "El volumen es: " << pared.calcularVolumen() << endl;

    return 0;
}
