/**
 * @file Matriz.cpp
 * @brief Implementación de la clase Matriz.
 * 
 * Se implementan los métodos de la clase Matriz.
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
 * 
 */
#include <stdexcept>
#include "Matriz.hpp"

template<typename T>
Matriz<T>::Matriz(int filas, int columnas, const T& valorInicial) : filas(filas), columnas(columnas) {
    if (filas <= 0 || columnas <= 0)
        throw std::invalid_argument("Las dimensiones de la matriz deben ser mayores a cero.");
    data = std::vector<std::vector<T>>(filas, std::vector<T>(columnas, valorInicial));
}

template<typename T>
Matriz<T>::~Matriz() {
    
}

template<typename T>
int Matriz<T>::getFilas() const {
    return filas;
}

template<typename T>
int Matriz<T>::getColumnas() const {
    return columnas;
}

template<typename T>
void Matriz<T>::imprimir() const {
        // Encontrar el ancho máximo de un elemento en la matriz
        int max_width = 0;
        for (const auto& fila : data) { // Se utiliza auto para no tener que escribir el tipo de dato de fila
            for (const auto& elem : fila) { // Se utiliza auto para no tener que escribir el tipo de dato de elem
                int width;
                if constexpr (std::is_same<T, std::complex<double>>::value) { // Se utiliza constexpr para determinar el tipo de dato de la matriz en tiempo de compilación
                    width = std::max(std::to_string(elem.real()).length(), std::to_string(elem.imag()).length()) + 1; // Se utiliza std::max para obtener el máximo entre la longitud de la parte real e imaginaria
                } else {
                    width = std::to_string(elem).length() + 1; // Se utiliza std::to_string para convertir el elemento a string y obtener su longitud
                }
                if (width > max_width) { // Se actualiza el ancho máximo si se encuentra un elemento más grande
                    max_width = width; 
                }
            }
        }

        // Imprimir la matriz con el formato adecuado
        for (const auto& fila : data) { // Se utiliza auto para no tener que escribir el tipo de dato de fila
            for (const auto& elem : fila) { // Se utiliza auto para no tener que escribir el tipo de dato de elem
                if constexpr (std::is_same<T, std::complex<double>>::value) { // Se utiliza constexpr para determinar el tipo de dato de la matriz en tiempo de compilación
                    std::cout << "[" << std::setw(max_width) << elem.real() << " + " << std::setw(max_width) << elem.imag() << "i] "; // Se utiliza std::setw para establecer el ancho del elemento
                } else {
                    std::cout << "[" << std::setw(max_width) << elem << "] "; // Se utiliza std::setw para establecer el ancho del elemento
                }
            }
            std::cout << std::endl;
        }
    }

template<typename T>
void Matriz<T>::setDimensiones(int filas, int columnas) {
    if (filas <= 0 || columnas <= 0)
        throw std::invalid_argument("Las dimensiones no pueden ser cero o negativas.");
    this->filas = filas; // Se utiliza this para referirse a las variables de la clase
    this->columnas = columnas;
    data.resize(filas); // Se utiliza resize para cambiar el tamaño del vector, ya que no se puede cambiar el tamaño de un vector después de haber sido creado
    for (auto& fila : data) { // Se utiliza auto para no tener que escribir el tipo de dato de fila
        fila.resize(columnas); // Se utiliza resize para cambiar el tamaño del vector, ya que no se puede cambiar el tamaño de un vector después de haber sido creado
    }
}

template<typename T>
// Se utiliza const para indicar que el método no modificará los valores de la matriz
// Se utiliza & para pasar la matriz por referencia y no por valor
void Matriz<T>::setElemento(int fila, int columna, const T& valor) {
    if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas)
        throw std::out_of_range("Índices fuera de rango al intentar establecer un elemento en la matriz.");
    data[fila][columna] = valor;
}

template<typename T>
void Matriz<T>::llenarMatriz() {
    
    std::cout << "Ingrese los valores para la matriz de " << filas << "x" << columnas << ":\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "-----------------\n";
            std::cout << "Elemento [" << i << "][" << j << "]: ";
            if constexpr (std::is_same<T, std::complex<double>>::value) { // Se utiliza constexpr para determinar el tipo de dato de la matriz en tiempo de compilación
                double real, imag;
                while (true) {
                    std::cout << "\nParte real: ";
                    if (!(std::cin >> real)) {
                        std::cin.clear(); // Limpia el estado de error de cin
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descarta la entrada incorrecta
                        std::cout << "Entrada inválida. Ingrese un número real válido.\n";
                        continue;
                    }
                    break;
                }
                while (true) {
                    std::cout << "Parte imaginaria: ";
                    if (!(std::cin >> imag)) {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cout << "\nEntrada inválida. Ingrese un número real válido para la parte imaginaria.\n";
                        continue;
                    }
                    break;
                }
                data[i][j] = std::complex<double>(real, imag);
            } else {
                T valor;
                while (true) {
                    if (!(std::cin >> valor)) {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        // Se usa constexpr para determinar el tipo de dato de la matriz
                        // y mostrar un mensaje adecuado al usuario, si no se usa constexpr
                        // se genera un error ya que el compilador no puede determinar
                        // el tipo de dato de la matriz en tiempo de compilación.
                        if constexpr (std::is_same<T, int>::value) {
                            std::cout << "Entrada inválida. Por favor ingrese un valor entero: ";
                        } else if constexpr (std::is_same<T, float>::value) {
                            std::cout << "Entrada inválida. Por favor ingrese un valor flotante: ";
                        } else {
                            std::cout << "Entrada inválida. Por favor ingrese un valor adecuado para el tipo de datos de la matriz: ";
                        }
                        continue;
                    }
                    break;
                }
                data[i][j] = valor;
            }
        }
    }
}

template<typename T>
Matriz<T> Matriz<T>::operator+(const Matriz<T>& otra) const {
        // Se valida que las matrices tengan las mismas dimensiones
        // this se refiere a la matriz actual y otra a la matriz que se recibe como parámetro

        // Por ejemplo, si this es una matriz de 2x2 y otra es una matriz de 3x3
        // se lanzará una excepción ya que no se pueden sumar matrices de diferentes dimensiones
        if (this->filas != otra.filas || this->columnas != otra.columnas) {
            throw std::invalid_argument("Las dimensiones de las matrices no son compatibles para la suma.");
        }
        Matriz<T> resultado(this->filas, this->columnas, 0);
        for (int i = 0; i < this->filas; ++i) {
            for (int j = 0; j < this->columnas; ++j) {
                // resultado es la matriz que se va a devolver
                // this es la matriz actual
                // otra es la matriz que se recibe como parámetro
                resultado.data[i][j] = this->data[i][j] + otra.data[i][j];
            }
        }
        return resultado;
    }

template<typename T>
Matriz<T> Matriz<T>::operator-(const Matriz<T>& otra) const {
        if (this->filas != otra.filas || this->columnas != otra.columnas) {
            throw std::invalid_argument("Las dimensiones de las matrices no son compatibles para la resta.");
        }
        Matriz<T> resultado(this->filas, this->columnas, 0);
        for (int i = 0; i < this->filas; ++i) {
            for (int j = 0; j < this->columnas; ++j) {
                resultado.data[i][j] = this->data[i][j] - otra.data[i][j];
            }
        }
        return resultado;
    }
template<typename T>
Matriz<T> Matriz<T>::operator*(const Matriz<T>& otra) const {
    // Este caso es diferente, ya que para multiplicar dos matrices
    // se debe cumplir que el número de columnas de la primera matriz
    // sea igual al número de filas de la segunda matriz

    // Por ejemplo, si this es una matriz de 2x2 y otra es una matriz de 3x3
    // se lanzará una excepción ya que no se pueden multiplicar matrices de diferentes dimensiones
        if (this->columnas != otra.filas) {
            throw std::invalid_argument("El número de columnas de la primera matriz debe ser igual al número de filas de la segunda matriz para multiplicar.");
        }
        Matriz<T> resultado(this->filas, otra.columnas, 0);
        for (int i = 0; i < this->filas; ++i) {
            for (int j = 0; j < otra.columnas; ++j) {
                // Se u
                T sum = T();
                for (int k = 0; k < this->columnas; ++k) {
                    sum += this->data[i][k] * otra.data[k][j];
                }
                resultado.data[i][j] = sum;
            }
        }
        return resultado;
    }

// Estuve leyendo en internet que se debe hacer la instanciacion explicita de las clases que se van a utilizar
// ya que si no se hace esto, el compilador no podra generar el codigo
// necesario para las clases que se van a utilizar en el main
// y se generara un error de enlazado.
template class Matriz<int>;
template class Matriz<float>;
template class Matriz<std::complex<double>>;