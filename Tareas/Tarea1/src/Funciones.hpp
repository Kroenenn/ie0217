#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include "Ahorcado.hpp"

void mostrarMenu(); // Declaración de funcion base para mostrar el menu
void inicializarJuego(Ahorcado &juego); // Declaración de funcion base para inicializar el juego
bool intentarLetra(Ahorcado &juego, char letra);
bool juegoGanado(const Ahorcado &juego);
bool juegoTerminado(const Ahorcado &juego);
void mostrarEstadoActual(const Ahorcado &juego);


#endif // FUNCIONES_HPP
