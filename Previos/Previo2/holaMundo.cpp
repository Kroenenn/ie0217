#include <iostream>

int main() {
    std::cout << "Hola a todos los de ie0217!\n";
    std::cout << "Archivo Previo 2\n";

    // Declaración de variables
    int var1 = 2;
    //int var2 = 2;
    //int var3 = 3;

    // Esta parte del código es un switch que evalúa la variable var1
    // y ejecuta el código correspondiente al caso que se cumpla
    switch (var1) {
        case 1:
            std::cout << "Caso 1\n";
            break;
        case 2:
        case 3:
            std::cout << "Caso Final\n";
            break;
        default:
            std::cout << "Caso default\n";
            break;
    }

    return 0;
}
