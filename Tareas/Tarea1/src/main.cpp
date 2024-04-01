
#include "Funciones.cpp"
#include <iostream>


int main() {
    Ahorcado juego;
    bool salir = false;
    
    while (!salir) {
        mostrarMenu();
        int opcion;
        std::cin >> opcion;
        switch (opcion) {
            case 1: {
                std::cout << "Elija la dificultad: 1. Fácil (7 intentos), 2. Intermedio (5 intentos), 3. Difícil (3 intentos)." << std::endl;
                int dificultad;
                std::cin >> dificultad;
                if (dificultad == 1) juego.maximoIntentos = 7;
                else if (dificultad == 2) juego.maximoIntentos = 5;
                else if (dificultad == 3) juego.maximoIntentos = 3;
                else std::cout << "Dificultad no válida, por defecto fácil." << std::endl;
                break;
            }
            case 2: {
                inicializarJuego(juego);
                char letra;
                while (!juegoTerminado(juego)) {
                    mostrarEstadoActual(juego);
                    std::cout << "Introduzca una letra: ";
                    std::cin >> letra;
                    if (!intentarLetra(juego, letra)) {
                        std::cout << "Letra incorrecta o ya utilizada." << std::endl;
                    }
                    if (juegoGanado(juego)) {
                        std::cout << "¡Felicidades! Ha adivinado la palabra: " << juego.palabraAdivinar << std::endl;
                        break;
                    }
                }
                if (!juegoGanado(juego) && juego.intentosRealizados >= juego.maximoIntentos) {
                    std::cout << "Se acabaron los intentos. Adivine toda la palabra: ";
                    std::string adivinanza;
                    std::cin >> adivinanza;
                    if (adivinanza == juego.palabraAdivinar) {
                        std::cout << "¡Felicidades! Ha adivinado la palabra: " << juego.palabraAdivinar << std::endl;
                    } else {
                        std::cout << "GAME OVER. La palabra era: " << juego.palabraAdivinar << std::endl;
                    }
                }
                break;
            }
            case 3: {
                std::string nuevaPalabra;
                std::cout << "Escriba la palabra que desea agregar al diccionario: ";
                std::cin >> nuevaPalabra;
                agregarPalabraDiccionario(juego, nuevaPalabra);
                break;
            }
            case 4: {
                std::cout << "Diccionario de palabras: " << std::endl;
                for (const auto &palabra : juego.diccionario) {
                    std::cout << palabra << std::endl;
                }
                break;
            }
            case 5: {
                std::cout << "Gracias por jugar, ¡adiós!" << std::endl;
                salir = true;
                break;
            }
            default: {
                std::cout << "Esa opción no existe. Intente de nuevo." << std::endl;
                break;
            }
        }
    }
    
    return 0;
}
