#include <iostream>
using namespace std;

int main() {
    int var = 5; // Inicializa var con 5
    int* pointVar; // Declarar variable puntero

    // Almacenar dirección de var
    pointVar = &var;

    // Imprimir var
    cout << "var = " << var << endl;

    // Imprimir *pointVar
    cout << "*pointVar = " << *pointVar << endl;

    // Cambiando el valor de var a 7
    cout << "Cambiando el valor de var a 7:" << endl;
    var = 7;

    // Imprimir var después del cambio
    cout << "var = " << var << endl;

    // Imprimir *pointVar después del cambio
    cout << "*pointVar = " << *pointVar << endl;

    // Cambiando el valor de *pointVar a 16
    cout << "Cambiando el valor de *pointVar a 16:" << endl;
    *pointVar = 16;

    // Imprimir var después del segundo cambio
    cout << "var = " << var << endl;

    // Imprimir *pointVar después del segundo cambio
    cout << "*pointVar = " << *pointVar << endl;

    return 0;
}
