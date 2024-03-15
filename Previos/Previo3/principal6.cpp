// Programa que se encarga de imprimir el valor de una variable y su dirección
#include <iostream>
using namespace std;

int main() {

    int var = 2050; // Inicializa var con 2050
    int* ptr_var; // Declarar variable puntero

    // Almacenar dirección de var
    ptr_var = &var;

    // Imprimir var y su dirección
    cout << "var = " << var << endl;
    cout << "ptr_var = " << ptr_var << endl;

    int** ptr_ptr_var; // Declarar variable puntero a puntero
    ptr_ptr_var = &ptr_var; // Almacenar dirección de ptr_var
    
    // Imprimir ptr_var y su dirección
    cout << "ptr_var = " << ptr_var << endl;
    cout << "ptr_ptr_var = " << &ptr_var << endl;

    cout << "&ptr_ptr_var = " << &ptr_ptr_var << endl;

    return 0;
}
