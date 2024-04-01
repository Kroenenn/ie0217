#include <iostream>

/**
 * @file friend_func.cpp
 * @brief Demostración del uso de una función friend.
 */

using namespace std;

/**
 * @class Distance
 * @brief Clase que representa una distancia.
 *
 * Esta clase utiliza una función friend para acceder a sus miembros privados.
 */
class Distance {
private:
    int meter; ///< Distancia en metros.

    // declaración de la función friend
    friend int addFive(Distance);

public:
    /**
     * @brief Constructor que inicializa la distancia a 0.
     */
    Distance() : meter(0) {}
};

/**
 * @brief Función friend que añade cinco a la distancia.
 * @param d Objeto Distance cuyo valor se va a modificar.
 * @return Nuevo valor de la distancia en metros.
 */
int addFive(Distance d) {
    // Acceso a miembro privado de Distance desde la función friend
    d.meter += 5;
    return d.meter;
}

/**
 * @brief Función principal del programa.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 */
int main() {
    Distance D; // Crea un objeto Distance.
    
    // Imprime la distancia después de añadir cinco.
    cout << "Distance: " << addFive(D) << endl;

    return 0;
}
