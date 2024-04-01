#include "Funciones.hpp"
#include <iostream>

Ahorcado::Ahorcado() {
    maximoIntentos = 7; 
    intentosRealizados = 0; 
    palabraAdivinar = ""; 
    estadoActual = ""; 
    diccionario = {"ejemplo", "ahorcado", "programacion"}; 
}

void mostrarMenu() {
    std::cout << "1. Elegir la dificultad del juego (número de intentos)." << std::endl;
    std::cout << "2. Iniciar el juego." << std::endl;
    std::cout << "3. Agregar palabras al arreglo de palabras que se escogen aleatoriamente." << std::endl;
    std::cout << "4. Ver diccionario de palabras." << std::endl;
    std::cout << "5. Salir del programa." << std::endl;
}

#include <random>

void inicializarJuego(Ahorcado &juego) {
    // Se genera una semilla diferente en cada ejecución
    std::random_device rd; // Se crea un objeto random_device
    std::mt19937 gen(rd()); // Se crea un objeto mt19937 con la semilla de random_device
    std::uniform_int_distribution<> distrib(0, juego.diccionario.size() - 1); // Se crea un objeto uniform_int_distribution con el rango de las palabras del diccionario

    // Se selecciona una palabra aleatoria del diccionario
    juego.palabraAdivinar = juego.diccionario[distrib(gen)];
    // Se configura estadoActual con guiones para cada letra de la palabra seleccionada
    juego.estadoActual = std::string(juego.palabraAdivinar.length(), '_');
    juego.intentosRealizados = 0;
}

// main basico para probar las funciones de mostrarMenu y inicializarJuego
int main() {
    Ahorcado juego;
    inicializarJuego(juego);
    mostrarMenu();

    return 0;
}