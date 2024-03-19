#include <iostream>
using namespace std;

int main() {
    // Asigna un valor entero a num_int
    int num_int = 9;

    // Declara una variable de tipo double
    double num_double;

    // Conversión implícita de int a double
    num_double = num_int;

    // Muestra los valores de num_int y num_double
    cout << "num_int = " << num_int << endl;
    cout << "num_double = " << num_double << endl;

    return 0;
}