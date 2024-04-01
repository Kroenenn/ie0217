#include "Funciones.hpp"
#include <iostream>

void mostrarMenu() {
    std::cout << "1. Elegir la dificultad del juego (número de intentos)." << std::endl;
    std::cout << "2. Iniciar el juego." << std::endl;
    std::cout << "3. Agregar palabras al arreglo de palabras que se escogen aleatoriamente." << std::endl;
    std::cout << "4. Ver diccionario de palabras." << std::endl;
    std::cout << "5. Salir del programa." << std::endl;
}


// main basico para probar las funciones de mostrarMenu
int main() {
    mostrarMenu();

    return 0;
}