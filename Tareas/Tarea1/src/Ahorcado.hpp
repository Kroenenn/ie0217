#ifndef AHORCADO_HPP
#define AHORCADO_HPP

#include <string>
#include <vector>

class Ahorcado {
public:
    int maximoIntentos;
    int intentosRealizados;
    std::string palabraAdivinar;
    std::string estadoActual;
    std::vector<std::string> diccionario;

    Ahorcado(); // Constructor
};

#endif
