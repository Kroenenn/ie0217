// ValidadorDeEntrada.cpp
#include "ValidadorDeEntrada.hpp"

void ValidadorDeEntrada::validarTipoDato(const std::string& input) {
    if (input != "int" && input != "float" && input != "complex") {
        throw std::invalid_argument("Tipo de dato no soportado. Utilice 'int', 'float' o 'complex'.");
    }
}

void ValidadorDeEntrada::validarDimensiones(int filas, int columnas) {
    if (filas <= 0 || columnas <= 0) {
        throw std::invalid_argument("Las dimensiones de la matriz deben ser positivas y mayores que cero.");
    }
}


