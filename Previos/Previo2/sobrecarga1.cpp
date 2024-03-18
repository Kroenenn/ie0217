#include <iostream>
using namespace std;

// Función para calcular el valor absoluto de un número flotante
float absolute(float var) {
    if (var < 0.0) {
        var = -var; // Si var es negativo, lo convierte en positivo
    }
    return var; // Devuelve el valor absoluto de var
}

// Función para calcular el valor absoluto de un número entero
int absolute(int var) {
    if (var < 0) {
        var = -var; // Si var es negativo, lo convierte en positivo
    }
    return var; // Devuelve el valor absoluto de var
}

int main() {
    // Llamada a la función con un parámetro de tipo entero
    cout << "Valor absoluto de -5 = " << absolute(-5) << endl;

    // Llamada a la función con un parámetro de tipo flotante
    cout << "Valor absoluto de 5.5 = " << absolute(5.5f) << endl;

    return 0;
}
