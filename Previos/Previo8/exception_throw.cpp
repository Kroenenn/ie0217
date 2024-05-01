#include <iostream>
using namespace std;

// Programa para dividir dos números
// Lanza una excepción cuando el divisor es 0

int main() {
    double numerador, denominador, division;

    cout << "Ingrese el numerador: ";
    cin >> numerador;

    cout << "Ingrese el denominador: ";
    cin >> denominador;

    try {
        // Lanza una excepción si el denominador es 0
        if (denominador == 0) {
            throw 0;
        }
        division = numerador / denominador;
        cout << numerador << " / " << denominador << " = " << division << endl;
    } catch (int excepcion_num) {
        cout << "Error: No se puede dividir entre " << excepcion_num << endl;
    }

    return 0;
}
