#include <iostream>

int main(int argc, char* argv[]) {
    // Se imprime el número de argumentos pasados al programa
    std::cout << "Número de argumentos: " << argc << std::endl;
    // Se imprime el nombre del programa
    std::cout << "Nombre del programa: " << argv[0] << std::endl;

    // Si hay más de un argumento, se imprimen los argumentos adicionales
    if (argc > 1) {
        std::cout << "Argumentos adicionales:" << std::endl;
        // Bucle que recorre los argumentos adicionales
        for (int i = 1; i < argc; ++i) {
            std::cout << "argv[" << i << "]: " << argv[i] << std::endl;
        }
    }

    return 0;
}
