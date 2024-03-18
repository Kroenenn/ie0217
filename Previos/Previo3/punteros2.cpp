#include <iostream>
using namespace std;

// Estructura para almacenar distancias en pies y pulgadas
struct Distance {
    int feet;   // Pies
    float inch; // Pulgadas
};

int main() {
    Distance *ptr, d; // Puntero y variable de tipo 'Distance'

    ptr = &d; // El puntero 'ptr' apunta a la dirección de 'd'

    // Pedir al usuario que ingrese los pies y pulgadas
    cout << "Enter feet: ";
    cin >> (*ptr).feet; // Acceso a 'feet' a través de puntero
    cout << "Enter inch: ";
    cin >> (*ptr).inch; // Acceso a 'inch' a través de puntero

    // Mostrar la distancia ingresada
    cout << "Displaying information." << endl;
    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches";

    return 0;
}
