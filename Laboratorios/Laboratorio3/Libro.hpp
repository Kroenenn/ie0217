#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <string>
#include <iostream>
using namespace std;


struct Libro {
    string titulo; // Se usa para almacenar el título del libro
    string autor; // Se usa para almacenar el autor del libro
    string genero; // Se usa para almacenar el género del libro
    Libro* siguiente; // Se usa para apuntar al siguiente libro en la lista. Libro* es un puntero a un libro.
};

enum opciones {
    AGREGAR_LIBRO = 1,
    MOSTRAR_LIBROS,
    SALIR,
    OPCIONES_MAX
};

#endif // LIBRO_HPP