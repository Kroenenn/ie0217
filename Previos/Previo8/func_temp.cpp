#include <iostream>
using namespace std;

// Plantilla de función
// Función para sumar dos números

// el <typename T> se usa para definir el tipo de dato que se le asigna a la función
// T add(T num1, T num2) es la función que recibe dos parámetros de tipo T
template <typename T>
T add(T num1, T num2) {
    return (num1 + num2);
}

int main() {
    int result1;
    double result2;
    // llamando con parámetros de tipo int
    result1 = add<int>(2, 3);
    cout << "2 + 3 = " << result1 << endl;

    // llamando con parámetros de tipo double
    result2 = add<double>(2.2, 3.3);
    cout << "2.2 + 3.3 = " << result2 << endl;

    return 0;
}
