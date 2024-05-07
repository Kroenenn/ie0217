#include "OperacionesBasicas.hpp"
#include <complex>
#include <stdexcept>

template<typename T>
void OperacionesBasicas<T>::validarSumaResta(const Matriz<T>& a, const Matriz<T>& b) {
    if (a.getFilas() != b.getFilas() || a.getColumnas() != b.getColumnas()) {
        throw std::invalid_argument("Las matrices deben tener las mismas dimensiones para suma o resta.");
    }
}

template<typename T>
void OperacionesBasicas<T>::validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
    if (a.getColumnas() != b.getFilas()) {
        throw std::invalid_argument("El número de columnas de la primera matriz debe ser igual al número de filas de la segunda matriz para multiplicar.");
    }
}

template<typename T>
Matriz<T> OperacionesBasicas<T>::suma(const Matriz<T>& a, const Matriz<T>& b) {
    validarSumaResta(a, b);
    return a + b;
}

template<typename T>
Matriz<T> OperacionesBasicas<T>::resta(const Matriz<T>& a, const Matriz<T>& b) {
    validarSumaResta(a, b);
    return a - b;
}

template<typename T>
Matriz<T> OperacionesBasicas<T>::multiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
    validarMultiplicacion(a, b);
    return a * b;
}

// Instanciaciones de la clase OperacionesBasicas para los tipos de datos int, float y std::complex<double>
template class OperacionesBasicas<int>;
template class OperacionesBasicas<float>;
template class OperacionesBasicas<std::complex<double>>;
