#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Introduce un entero: "; // Pide al usuario que ingrese un número entero
    cin >> num; // Lee el número entero

    // Condición externa
    if (num != 0) {
        // Condición interna si el número no es cero
        if (num > 0) {
            // Si el número es mayor que cero, es positivo
            cout << "El número es positivo." << endl;
        } else {
            // Si el número no es mayor que cero, es negativo
            cout << "El número es negativo." << endl;
        }
    } else {
        // Condición externa si el número es cero
        cout << "El número es 0 y no es ni positivo ni negativo." << endl;
    }

    // Esta línea se imprime siempre, independientemente de las condiciones anteriores
    cout << "Esta línea siempre se imprime." << endl;

    return 0;
}
