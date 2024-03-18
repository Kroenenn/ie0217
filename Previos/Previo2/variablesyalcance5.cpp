#include <iostream>

// Declaración externa de la variable global definida en otro archivo
extern int count;

// Definición de la función write_extern
void write_extern(void) {
    std::cout << "Count is " << count << std::endl; // Imprime el valor de count
}
