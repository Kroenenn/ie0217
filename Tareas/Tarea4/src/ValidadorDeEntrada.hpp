// ValidadorDeEntrada.hpp
#ifndef VALIDADOR_DE_ENTRADA_HPP
#define VALIDADOR_DE_ENTRADA_HPP

#include <string>
#include <stdexcept>
#include <complex>

class ValidadorDeEntrada {
public:
    static void validarTipoDato(const std::string& input);
    static void validarDimensiones(int filas, int columnas);
};

#endif // VALIDADOR_DE_ENTRADA_HPP
