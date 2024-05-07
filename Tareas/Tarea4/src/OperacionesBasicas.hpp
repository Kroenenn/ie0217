
#ifndef OPERACIONES_BASICAS_HPP
#define OPERACIONES_BASICAS_HPP

#include "Matriz.hpp"
#include <algorithm>
#include <vector>
#include <iterator>

template<typename T>
class OperacionesBasicas {
public:
    static void validarSumaResta(const Matriz<T>& a, const Matriz<T>& b);
    static void validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b);
    static Matriz<T> suma(const Matriz<T>& a, const Matriz<T>& b);
    static Matriz<T> resta(const Matriz<T>& a, const Matriz<T>& b);
    static Matriz<T> multiplicacion(const Matriz<T>& a, const Matriz<T>& b);
};


#endif // OPERACIONES_BASICAS_HPP
