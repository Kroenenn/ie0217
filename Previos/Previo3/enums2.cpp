#include <iostream>
using namespace std;

// Declaración de una enumeración para las estaciones con valores específicos
enum seasons { spring = 34, summer = 4, autumn = 9, winter = 32 };

int main() {
    // Ejemplo de uso de la enumeración con diferentes valores asignados
    seasons s;
    s = summer;

    cout << "Summer = " << s << endl;

    return 0;
}
