/**
 * @file Matriz.hpp
 * @brief Archivo de cabecera de la clase Matriz
 * 
 * Este archivo define la clase Matriz, que representa una matriz de cualquier tipo de dato.
 * 
 * MIT License
 * 
 * Copyright (c) 2024 Oscar Porras Silesky
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 * 
*/


#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <vector>
#include <iostream>
#include <exception>
#include <iomanip>
#include <complex>




template<typename T>
/**
 * @brief Clase Matriz
 * 
 * Esta clase representa una matriz de cualquier tipo de dato.
 * @param data Vector de vectores que almacena los elementos de la matriz.
 * @param filas Número de filas de la matriz.
 * @param columnas Número de columnas de la matriz.
*/
class Matriz {
private:
    std::vector<std::vector<T>> data;
    int filas;
    int columnas;

public:

    /**
     * @brief Constructor de la clase Matriz
     * 
     * Este constructor inicializa una matriz con un número de filas y columnas y un valor inicial.
     * @param filas Número de filas de la matriz.
     * @param columnas Número de columnas de la matriz.
     * @param valorInicial Valor inicial de los elementos de la matriz.
    */
    Matriz(int filas, int columnas, const T& valorInicial);

    /**
     * @brief Destructor de la clase Matriz
     * 
     * Este destructor libera la memoria de la matriz.
     * 
    */
    ~Matriz();

    /**
     * @brief Obtiene el número de filas de la matriz.
     * 
     * Esta función obtiene el número de filas de la matriz.
     * @return Número de filas de la matriz.
    */
    int getFilas() const;

    /**
     * @brief Obtiene el número de columnas de la matriz.
     * 
     * Esta función obtiene el número de columnas de la matriz.
     * @return Número de columnas de la matriz.
    */
    int getColumnas() const;

    /**
     * @brief Imprime la matriz en la consola.
     * 
     * Esta función imprime la matriz en la consola.
    */
    void imprimir() const;

    /**
     * @brief Setea las dimensiones de la matriz.
     * 
     * Esta función setea las dimensiones de la matriz.
     * @param filas Número de filas de la matriz.
     * @param columnas Número de columnas de la matriz.
    */
    void setDimensiones(int filas, int columnas);

    /**
     * @brief Setea el elemento de la matriz en una posición específica.
     * 
     * Esta función Setea el elemento de la matriz en una posición específica.
     * @param fila Fila del elemento.
     * @param columna Columna del elemento.
     * @return Elemento de la matriz en la posición especificada.
    */
    void setElemento(int fila, int columna, const T& valor);

    /**
     * @brief Llena la matriz con valores proporcionados por el usuario.
     * 
     * Esta función llena la matriz con valores con valores proporcionados por el usuario.
    */
    void llenarMatriz();

    /**
     * @brief Sobrecarga del operador de suma
     * 
     * Esta función sobrecarga el operador de suma para matrices.
     * @param otra Matriz con la que se va a sumar.
     * @return Matriz resultante de la suma.
    */
    Matriz<T> operator+(const Matriz<T>& otra) const;

    /**
     * @brief Sobrecarga del operador de resta
     * 
     * Esta función sobrecarga el operador de resta para matrices.
     * @param otra Matriz con la que se va a restar.
     * @return Matriz resultante de la resta.
    */
    Matriz<T> operator-(const Matriz<T>& otra) const;

    /**
     * @brief Sobrecarga del operador de multiplicación
     * 
     * Esta función sobrecarga el operador de multiplicación para matrices.
     * @param otra Matriz con la que se va a multiplicar.
     * @return Matriz resultante de la multiplicación.
    */
    Matriz<T> operator*(const Matriz<T>& otra) const;
};



#endif // MATRIZ_HPP
