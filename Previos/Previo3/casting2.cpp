#include <iostream>
using namespace std;

int main() {
    // Inicializando una variable tipo double
    double num_double = 3.56;
    cout << "num_double = " << num_double << endl; // Muestra el valor de num_double

    // Conversión de estilo C de double a int
    int num_int1 = (int)num_double; // Conversión explícita de num_double a int
    cout << "num_int1 = " << num_int1 << endl; // Muestra el valor de num_int1 después de la conversión

    // Conversión de estilo función de double a int
    int num_int2 = int(num_double); // Otra forma de conversión explícita
    cout << "num_int2 = " << num_int2 << endl; // Muestra el valor de num_int2 después de la conversión

    return 0;
}
