// Libro.cpp
#include "Libro.hpp" // Incluye la declaración de la clase Libro

// Constructor de la clase Libro que inicializa los miembros utilizando una lista de inicialización.
// Este método se usa sobre la asignación dentro del cuerpo del constructor porque
// ofrece una inicialización más eficiente y directa de los miembros de datos.
// 'std::string t' recibe el título del libro, 'std::string a' el nombre del autor, y 'int anio' el año de publicación.
// Cada parámetro se utiliza para inicializar directamente los miembros correspondientes 'titulo', 'autor', y 'anioPublicacion'.
Libro::Libro(std::string t, std::string a, int anio) : titulo(t), autor(a), anioPublicacion(anio) {}


// Operador de comparación menor que (<)
// Determina el orden de los libros basándose en el año de publicación
bool Libro::operator<(const Libro& l) const {
    return anioPublicacion < l.anioPublicacion; // Devuelve true si el libro fue publicado antes que 'l'
}
