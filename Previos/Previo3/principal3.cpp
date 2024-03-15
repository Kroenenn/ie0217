#include <iostream>
using namespace std;

int main() {
    int var = 5;
    // declarar variable puntero
    int* pointVar;
    // almacenar dirección de var
    pointVar = &var;
    // imprimir valor de var
    cout << "var = " << var << endl;
    // imprimir dirección de var
    cout << "Dirección de var (&var) = " << &var << endl;

    // imprimir puntero pointVar
    cout << "pointVar = " << pointVar << endl;
    // imprimir el contenido de la dirección a la que pointVar apunta
    cout << "Contenido de la dirección apuntada por pointVar (*pointVar) = " << *pointVar << endl;

    return 0;
}
