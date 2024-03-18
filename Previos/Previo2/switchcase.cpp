#include <iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;
    cout << "Introduzca un operador (+, -, *, /): ";
    cin >> oper;
    cout << "Introduzca dos números: ";
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // Si el operador no es ninguno de los esperados, muestra un error.
            cout << "Error, El operador no es correcto";
            break;
    }

    return 0;
}
