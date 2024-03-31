#include <iostream>

/**
 * @file main.cpp
 * @brief Ejemplo de clase Molde.
 */

using namespace std;

/**
 * @class Molde
 * @brief Clase que representa un molde con dimensiones en un espacio tridimensional.
 *
 * La clase Molde permite definir y manipular las dimensiones de un objeto.
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
    }
};

/**
 * @brief Función principal que demuestra el uso de la clase Molde.
 * @return Retorna 0 si el programa finaliza correctamente.
 */
int main(){
    int variable_entera;  ///< Variable entera sin uso.

    // Crea una instancia de Molde con valores iniciales para largo, ancho y alto.
    Molde pared(10.0, 20.0, 35.0);

    // Accede y modifica las propiedades del objeto pared.
    cout << pared.largo << endl;   // Imprime el largo inicial del objeto pared.
    pared.largo = 20.0;            // Modifica el largo del objeto pared.
    cout << pared.largo << endl;   // Imprime el nuevo largo del objeto pared.
    
    pared.ancho = 13.2;            // Modifica el ancho del objeto pared.
    pared.alto = 23.4;             // Modifica la altura del objeto pared.

    return 0;
}