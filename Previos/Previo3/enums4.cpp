#include <iostream>
using namespace std;

// Definición de un enumerado llamado 'suit' que representa los palos de una baraja.
enum suit {
    club = 0,     // Palo de club con valor 0
    diamonds = 10, // Palo de diamonds con valor 10
    hearts = 20,  // Palo de hearts con valor 20
    spades = 3    // Palo de spades con valor 3
} card; // Variable 'card' del tipo enumerado 'suit'

// Función principal del programa
int main() {
    card = club; // Asigna a la variable 'card' el valor 'club'
    // Imprime el tamaño de la variable 'card' de tipo enumerado 'suit'
    cout << "Size of enum variable " << sizeof(card) << " bytes.";
    return 0;
}
