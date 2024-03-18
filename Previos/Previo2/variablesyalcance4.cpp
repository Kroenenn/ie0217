#include <iostream>

// Declaración de la variable global
int count;

// Declaración de la función write_extern
extern void write_extern();

int main() {
    count = 5; // Asignación de valor a la variable global count
    write_extern(); // Llamada a la función write_extern

    return 0;
}
