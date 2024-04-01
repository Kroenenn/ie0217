#ifndef AHORCADO_HPP
#define AHORCADO_HPP

#include <string>
#include <vector>

struct Ahorcado {
    std::string palabraAdivinar;
    std::string estadoActual;
    int maximoIntentos;
    int intentosRealizados;
    std::vector<std::string> diccionario; // 'vector' lo que hace es agarrar un arreglo de strings y lo convierte en un vector de strings

    Ahorcado(); // Constructor
};

#endif // AHORCADO_HPP