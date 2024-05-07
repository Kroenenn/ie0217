#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <vector>
#include <iostream>
#include <exception>
#include <iomanip>
#include <complex>

template<typename T>
class Matriz {
private:
    std::vector<std::vector<T>> data;
    int filas;
    int columnas;

public:
    Matriz(int filas, int columnas, const T& valorInicial);
    ~Matriz();
    int getFilas() const;
    int getColumnas() const;
    void imprimir() const;
    void setDimensiones(int filas, int columnas);
    void setElemento(int fila, int columna, const T& valor);
    void llenarMatriz();
    Matriz<T> operator+(const Matriz<T>& otra) const;
    Matriz<T> operator-(const Matriz<T>& otra) const;
    Matriz<T> operator*(const Matriz<T>& otra) const;
};



#endif // MATRIZ_HPP
