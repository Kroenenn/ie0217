#include "Ahorcado.hpp"
#include <vector>

Ahorcado::Ahorcado() : maximoIntentos(7), intentosRealizados(0), palabraAdivinar(""), estadoActual("") {
    // Inicializar diccionario con las palabras predeterminadas
    diccionario = {"ejemplo", "ahorcado", "programacion"};
}
