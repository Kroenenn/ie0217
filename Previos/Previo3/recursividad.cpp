#include <iostream>
using namespace std;

// Prototipo de la función factorial
int factorial(int);

int main() {
    int n, result;

    // Solicita al usuario un número no negativo
    cout << "Enter a non-negative number: ";
    cin >> n;

    // Calcula el factorial del número ingresado
    result = factorial(n);

    // Muestra el resultado
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

// Definición de la función factorial
int factorial(int n) {
    // Caso base: el factorial de 0 o 1 es 1
    if (n > 1) {
        // Caso recursivo: n! = n * (n-1)!
        return n * factorial(n - 1);
    } else {
        // Retorna 1 si n es 0 o 1
        return 1;
    }
}
