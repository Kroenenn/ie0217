#include "Funciones.hpp"
#include <iostream>

// Implementación del constructor de Ahorcado
Ahorcado::Ahorcado() {
    maximoIntentos = 7; // Valor predeterminado para dificultad fácil
    intentosRealizados = 0;
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

bool intentarLetra(Ahorcado &juego, char letra) {
    bool acierto = false;
    // Verificar si la letra ya fue descubierta
    if(juego.estadoActual.find(letra) != std::string::npos) {
        std::cout << "Ya ha descubierto esa letra." << std::endl;
        return false;
    }
    // Buscar la letra en la palabra a adivinar
    for(size_t i = 0; i < juego.palabraAdivinar.length(); ++i) {
        if(juego.palabraAdivinar[i] == letra) {
            juego.estadoActual[i] = letra;
            acierto = true;
        }
    }
    if(!acierto) {
        juego.intentosRealizados++;
    }
    return acierto;
}

bool juegoGanado(const Ahorcado &juego) {
    std::cout << "juegoGanado " << std::endl;
}

bool juegoTerminado(const Ahorcado &juego) {
    std::cout << "juegoTerminado " << std::endl;
}

void mostrarEstadoActual(const Ahorcado &juego) {
    std::cout << "mostrarEstadoActual " << std::endl;
}

// main basico para probar las funciones de mostrarMenu y inicializarJuego
int main() {
    Ahorcado juego;
    inicializarJuego(juego);
    mostrarMenu();
    
    char letra;
    std::cout << "Introduzca una letra para adivinar: ";
    std::cin >> letra;
    if (intentarLetra(juego, letra)) {
        std::cout << "Letra correcta!" << std::endl;
    } else {
        std::cout << "Letra incorrecta." << std::endl;
    }

    mostrarEstadoActual(juego);

    return 0;
}