// Utilidad.cpp

#include "Utilidad.hpp"

bool esNumeroPrimo(unsigned int numero) {
    if (numero <= 1) return false;
    if (numero == 2) return true;
    if (numero % 2 == 0) return false;
    for (unsigned int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) return false;
    }
    return true;
}

unsigned int siguienteNumeroPrimo(unsigned int numero) {
    // Si el número es menor que 2, el siguiente primo es 2.
    if (numero < 2) {
        return 2;
    }

    // Comenzar con el número inmediatamente superior al número dado.
    unsigned int siguiente;
    if (numero % 2 == 0) {
        siguiente = numero + 1; // Si es par, toma el siguiente número impar.
    } else {
        siguiente = numero + 2; // Si es impar, salta al próximo número impar.
    }
    
    // Mientras que siguiente no sea primo, se busca el próximo número impar.
    while (!esNumeroPrimo(siguiente)) {
        siguiente += 2;
    }

    return siguiente;
}

