#include <iostream>

using namespace std;

// Declarando una función que suma dos enteros
int add(int a, int b) {
    return (a + b); // Devuelve la suma de a y b
}

int main() {
    int sum; // Variable para almacenar la suma

    // Llamando a la función y guardando el valor retornado en sum
    sum = add(100, 78);

    // Mostrando el resultado de la suma
    cout << "100 + 78 = " << sum << endl;

    return 0;
}
