#include <iostream>
using namespace std;

// Declaración de una enumeración para las estaciones del año
enum season { spring = 0, summer = 4, autumn = 8, winter = 12 };

int main() {
    // Ejemplo de uso de la enumeración
    season current_season;
    current_season = summer;

    cout << "Value of summer in enum is: " << current_season << endl;

    return 0;
}
