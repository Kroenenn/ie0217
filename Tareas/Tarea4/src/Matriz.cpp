
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
        for (const auto& fila : data) {
            for (const auto& elem : fila) {
                int width;
                if constexpr (std::is_same<T, std::complex<double>>::value) {
                    width = std::max(std::to_string(elem.real()).length(), std::to_string(elem.imag()).length()) + 1;
                } else {
                    width = std::to_string(elem).length() + 1;
                }
                if (width > max_width) {
                    max_width = width;
                }
            }
        }

        // Imprimir la matriz con el formato adecuado
        for (const auto& fila : data) {
            for (const auto& elem : fila) {
                if constexpr (std::is_same<T, std::complex<double>>::value) {
                    std::cout << "[" << std::setw(max_width) << elem.real() << " + " << std::setw(max_width) << elem.imag() << "i] ";
                } else {
                    std::cout << "[" << std::setw(max_width) << elem << "] ";
                }
            }
            std::cout << std::endl;
        }
    }

template<typename T>
void Matriz<T>::setDimensiones(int filas, int columnas) {
    if (filas <= 0 || columnas <= 0)
        throw std::invalid_argument("Las dimensiones no pueden ser cero o negativas.");
    this->filas = filas;
    this->columnas = columnas;
    data.resize(filas);
    for (auto& fila : data) {
        fila.resize(columnas);
    }
}

template<typename T>
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
            if constexpr (std::is_same<T, std::complex<double>>::value) {
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
        if (this->filas != otra.filas || this->columnas != otra.columnas) {
            throw std::invalid_argument("Las dimensiones de las matrices no son compatibles para la suma.");
        }
        Matriz<T> resultado(this->filas, this->columnas, 0);
        for (int i = 0; i < this->filas; ++i) {
            for (int j = 0; j < this->columnas; ++j) {
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
        if (this->columnas != otra.filas) {
            throw std::invalid_argument("El número de columnas de la primera matriz debe ser igual al número de filas de la segunda matriz para multiplicar.");
        }
        Matriz<T> resultado(this->filas, otra.columnas, 0);
        for (int i = 0; i < this->filas; ++i) {
            for (int j = 0; j < otra.columnas; ++j) {
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