// Libro.hpp
#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <string>

class Libro {
public:
    // Miembros públicos de la clase que almacenan los detalles del libro.
    // Se utiliza std::string para las cadenas
    std::string titulo;          // título del libro.
    std::string autor;           // nombre del autor del libro.
    int anioPublicacion;         // año en que el libro fue publicado.

    // Constructor de la clase que inicializa los miembros de datos con valores específicos.
    // Recibe tres parámetros y los asigna a los miembros del objeto mediante una lista de inicialización.
    Libro(std::string t, std::string a, int anio);

    // Sobrecarga del operador '<' para permitir la comparación de dos libros basada en su año de publicación.
    // Esto es útil para ordenar libros por año. El operador const garantiza que el método no cambia ninguno de los objetos.
    bool operator<(const Libro& l) const;
};

#endif // LIBRO_HPP
