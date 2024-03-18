#include <iostream>
using namespace std;

// Declaración de una enumeración para los días de la semana
enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    // Ejemplo de uso de la enumeración para los días de la semana
    week today;
    today = Wednesday;

    cout << "Day = " << today + 1 << endl; // Los días están numerados desde 0 por defecto

    return 0;
}
