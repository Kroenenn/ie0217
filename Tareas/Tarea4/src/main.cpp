#include <iostream>
#include <string>
#include <complex>
#include <random>
#include <chrono>
#include "OperacionesBasicas.hpp"
#include "ValidadorDeEntrada.hpp"

template<typename T>
void llenarMatrizAleatoria(Matriz<T>& matriz) {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);
    std::uniform_real_distribution<double> distribution(-100.0, 100.00);
    for (int i = 0; i < matriz.getFilas(); ++i) {
        for (int j = 0; j < matriz.getColumnas(); ++j) {
            if constexpr (std::is_integral<T>::value) {
                // static_cast<T> convierte el resultado de distribution(generator) a T
                matriz.setElemento(i, j, static_cast<T>(distribution(generator)));
            } else if constexpr (std::is_floating_point<T>::value) {
                matriz.setElemento(i, j, static_cast<T>(distribution(generator)));
            } else if constexpr (std::is_same<T, std::complex<double>>::value) {
                double real = distribution(generator);
                double imag = distribution(generator);
                matriz.setElemento(i, j, std::complex<double>(real, imag));
            }
        }
    }
}

template<typename T>
void realizarOperacion(Matriz<T>& matriz1, Matriz<T>& matriz2, char operacion) {
    try {
        switch (operacion) {
            case '+':
                OperacionesBasicas<T>::validarSumaResta(matriz1, matriz2);
                std::cout << "\nMatriz 1:\n\n";
                matriz1.imprimir();
                std::cout << "\nMatriz 2:\n\n";
                matriz2.imprimir();
                std::cout << "\nResultado de la suma:\n\n";
                OperacionesBasicas<T>::suma(matriz1, matriz2).imprimir();
                break;
            case '-':
                OperacionesBasicas<T>::validarSumaResta(matriz1, matriz2);
                std::cout << "\nMatriz 1:\n\n";
                matriz1.imprimir();
                std::cout << "\nMatriz 2:\n\n";
                matriz2.imprimir();
                std::cout << "\nResultado de la resta:\n\n";
                OperacionesBasicas<T>::resta(matriz1, matriz2).imprimir();
                break;
            case '*':
                OperacionesBasicas<T>::validarMultiplicacion(matriz1, matriz2);
                std::cout << "\nMatriz 1:\n\n";
                matriz1.imprimir();
                std::cout << "\nMatriz 2:\n\n";
                matriz2.imprimir();
                std::cout << "\nResultado de la multiplicación:\n\n";
                OperacionesBasicas<T>::multiplicacion(matriz1, matriz2).imprimir();
                break;
            default:
                std::cout << "Operación no soportada.\n\n";
                break;
        }
    } catch (const std::exception& e) {
        std::cout << "Error al realizar operación: " << e.what() << '\n';
    }
}

template<typename T>
void menuOperaciones(Matriz<T>& matriz1, Matriz<T>& matriz2) {
    bool continuar = true;
    while (continuar) {
        std::cout << "______________________\n";
        std::cout << "Menú de operaciones\n";
        std::cout << "1. Sumar matrices\n";
        std::cout << "2. Restar matrices\n";
        std::cout << "3. Multiplicar matrices\n";
        std::cout << "4. Ver matrices\n";
        std::cout << "5. Salir (se pierden los datos de las matrices)\n";

        int opcion;
        std::cout << "Seleccione una opción: ";
        while (!(std::cin >> opcion)) { // Protección contra entradas inválidas
            std::cin.clear(); // Limpia el estado de error de cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descarta la entrada hasta el próximo salto de línea
            std::cout << "Entrada inválida. Por favor, seleccione un número entre 1 y 5: ";
        }

                    switch (opcion) {
                        case 1:
                            std::cout << "___________________________________________\n";
                            std::cout << "Suma de matrices:\n\n";
                            realizarOperacion(matriz1, matriz2, '+');
                            break;
                        case 2:
                            std::cout << "___________________________________________\n";
                            std::cout << "Resta de matrices:\n\n";
                            realizarOperacion(matriz1, matriz2, '-');
                            break;
                        case 3:
                            std::cout << "___________________________________________\n";
                            std::cout << "Multiplicación de matrices:\n\n";
                            realizarOperacion(matriz1, matriz2, '*');
                            break;
                        case 4:
                            std::cout << "___________________________________________\n";
                            std::cout << "Matriz 1:\n\n";
                            matriz1.imprimir();
                            std::cout << "\nMatriz 2:\n\n";
                            matriz2.imprimir();
                            break;
                        case 5:
                            continuar = false;
                            break;
                        default:
                            std::cout << "___________________________________________\n";
                            std::cout << "Opción no válida.\n";
                            break;
        }
    }
}

int main() {
    int filas1, columnas1, filas2, columnas2;
    std::string tipoDato;
    char operacion, decision, decisionnuevo, decisioncontinuar;
    bool continuar = true;

    while (continuar) {
    
        try {  
            std::cout << "___________________________________________\n";
            std::cout << "\nBienvenido al gestor de matrices\n";
            std::cout << "___________________________________________\n\n";
            std::cout << "-----> Ingrese el tipo de datos de la matriz (int, float, complex): ";
            std::cin >> tipoDato;
            ValidadorDeEntrada::validarTipoDato(tipoDato);

            // Solicitar dimensiones para la primera matriz
            std::cout << "\n-----> Ingrese el número de filas de la primera matriz: ";
            if (!(std::cin >> filas1)) {
                throw std::invalid_argument("Entrada inválida para filas.");
            }
            std::cout << "-----> Ingrese el número de columnas de la primera matriz: ";
            if (!(std::cin >> columnas1)) {
                throw std::invalid_argument("Entrada inválida para columnas.");
            }
            ValidadorDeEntrada::validarDimensiones(filas1, columnas1);

            // Solicitar dimensiones para la segunda matriz
            std::cout << "-----> Ingrese el número de filas de la segunda matriz: ";
            if (!(std::cin >> filas2)) {
                throw std::invalid_argument("Entrada inválida para filas.");
            }
            std::cout << "-----> Ingrese el número de columnas de la segunda matriz: ";
            if (!(std::cin >> columnas2)) {
                throw std::invalid_argument("Entrada inválida para columnas.");
            }
            ValidadorDeEntrada::validarDimensiones(filas2, columnas2);


        
            if (tipoDato == "int") {
                Matriz<int> matriz1(filas1, columnas1, 0);
                Matriz<int> matriz2(filas2, columnas2, 0);
                std::cout << "___________________________________________\n\n";
                std::cout << "Si desea puede llenar las matrices manualmente o generar datos aleatorios.\n";
                std::cout << "Si no ingresa 's' se llenarán manualmente.\n";
                std::cout << "\nGenerar datos aleatorios? (s/n): ";
                std::cin >> decision;
                if (decision == 's' || decision == 'S') {
                    llenarMatrizAleatoria(matriz1);
                    llenarMatrizAleatoria(matriz2);
                } else {
                    std::cout << "________________________________________________________________________________\n";
                    std::cout << "Llenando la primera matriz:\n\n\n";
                    matriz1.llenarMatriz();
                    std::cout << "________________________________________________________________________________\n";
                    std::cout << "Llenando la segunda matriz:\n\n\n";
                    matriz2.llenarMatriz();
                }

                menuOperaciones(matriz1, matriz2);
                std::cout << "\nDatos de las matrices borrados. Si no contesta 'n', continuará el programa.\n";
                std::cout << "\n¿Desea realizar otra operación? (s/n): ";
                std::cin >> decisioncontinuar;
            if (decisioncontinuar == 'n' || decisioncontinuar == 'N') continuar = false;
            } else if (tipoDato == "float") {
                Matriz<float> matriz1(filas1, columnas1, 0.0f);
                Matriz<float> matriz2(filas2, columnas2, 0.0f);
                std::cout << "\nGenerar datos aleatorios? (s/n): ";
                std::cin >> decision;
                if (decision == 's' || decision == 'S') {
                    llenarMatrizAleatoria(matriz1);
                    llenarMatrizAleatoria(matriz2);
                } else {
                    std::cout << "________________________________________________________________________________\n";
                    std::cout << "Llenando la primera matriz:\n\n\n";
                    matriz1.llenarMatriz();
                    std::cout << "________________________________________________________________________________\n";
                    std::cout << "Llenando la segunda matriz:\n\n\n";
                    matriz2.llenarMatriz();
                }
                menuOperaciones(matriz1, matriz2);
                std::cout << "\nDatos de las matrices borrados. Si no contesta 'n', continuará el programa.\n";
                std::cout << "\n¿Desea realizar otra operación? (s/n): ";
                std::cin >> decisioncontinuar;
            if (decisioncontinuar == 'n' || decisioncontinuar == 'N') continuar = false;
            } else if (tipoDato == "complex") {
                Matriz<std::complex<double>> matriz1(filas1, columnas1, std::complex<double>(0.0, 0.0));
                Matriz<std::complex<double>> matriz2(filas2, columnas2, std::complex<double>(0.0, 0.0));
                std::cout << "Generar datos aleatorios? (s/n): ";
                std::cin >> decision;
                if (decision == 's' || decision == 'S') {
                    llenarMatrizAleatoria(matriz1);
                    llenarMatrizAleatoria(matriz2);
                } else {
                    std::cout << "________________________________________________________________________________\n";
                    std::cout << "Llenando la primera matriz:\n\n\n";
                    matriz1.llenarMatriz();
                    std::cout << "________________________________________________________________________________\n";
                    std::cout << "Llenando la segunda matriz:\n\n\n";
                    matriz2.llenarMatriz();
                }
                menuOperaciones(matriz1, matriz2);
                std::cout << "\nDatos de las matrices borrados. Si no contesta 'n', continuará el programa.\n";
                std::cout << "\n¿Desea realizar otra operación? (s/n): ";
                std::cin >> decisioncontinuar;
            if (decisioncontinuar == 'n' || decisioncontinuar == 'N') continuar = false;
            }



        } catch (const std::exception& e) {
            std::cout << "\nError: " << e.what() << "\n";
            std::cin.clear(); // Limpia el estado de cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora el resto de la línea

            std::cout << "\n¿Desea intentar de nuevo? (s/n): ";
            std::cin >> decisionnuevo;
            if (decisionnuevo == 'n' || decisionnuevo == 'N') continuar = false;
        }
    }
    std::cout << "___________________________________________\n\n";
    std::cout << "Programa finalizado.\n";
    std::cout << "___________________________________________\n";
    return 0;
}