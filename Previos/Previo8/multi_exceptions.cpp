#include <iostream>
using namespace std;

int main() {
    double numerador, denominador, arr[4] = {0.0, 0.0, 0.0, 0.0};
    int index;

    cout << "Ingrese el índice del arreglo: ";
    cin >> index;

    try {
        // Lanza una excepción si el índice del arreglo está fuera de límites
        if (index >= 4) {
            throw "Error: Índice del arreglo fuera de límites!";
        }

        cout << "Ingrese el numerador: ";
        cin >> numerador;

        cout << "Ingrese el denominador: ";
        cin >> denominador;

        // Lanza una excepción si el denominador es 0
        if (denominador == 0) {
            throw 0;
        }

        arr[index] = numerador / denominador;
        cout << arr[index] << endl;

    
    } 
    
    // Captura la excepción de índice del arreglo fuera de límites
    catch (const char* msg) {
        cout << msg << endl;
    } 
    
    // Captura la excepción de división por 0
    catch (int num) {
        cout << "Error: No se puede dividir por " << num << endl;
    } 
    
    // Captura cualquier otra excepción
    catch (...) {
        cout << "Excepción inesperada!" << endl;
    }

    return 0;
}
