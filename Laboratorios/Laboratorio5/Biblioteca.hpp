// Biblioteca.hpp
#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <vector>
#include "Libro.hpp"

// Define la clase Biblioteca que administra una colección de objetos Libro.
class Biblioteca {
private:
    // Vector de objetos Libro que almacena los libros en la biblioteca.
    // 'std::vector<Libro>' es el contenedor dinámico que puede cambiar de tamaño automáticamente
    // según se añadan o eliminen elementos, haciendo el almacenamiento flexible.
    std::vector<Libro> libros;

public:
    // Declara un método para agregar un libro a la colección.
    // Se pasa 'const Libro&' para evitar la copia del libro, optimizando el rendimiento.
    // Esto garantiza que el libro original no se modifique durante la adición.
    void agregarLibro(const Libro& libro);

    // Método para imprimir en consola los detalles de todos los libros en la biblioteca.
    void mostrarLibros();

    // Método para ordenar los libros por año de publicación utilizando el algoritmo de ordenamiento estándar.
    // Este método modifica el orden de los elementos dentro del vector 'libros'.
    void ordenarLibrosPorAnio();

    // Método para buscar un libro por título.
    // Retorna un iterador a la posición del libro en el vector si se encuentra,
    // o un iterador al final del vector si el libro no está presente.
    // 'const std::string& titulo' evita la copia innecesaria de la cadena de título.
    std::vector<Libro>::iterator buscarLibroPorTitulo(const std::string& titulo);

    // Método que devuelve un iterador al final del vector 'libros'.
    // Se usa para comparar con el resultado de 'buscarLibroPorTitulo' para determinar si se encontró un libro.
    std::vector<Libro>::iterator end();
};


#endif // BIBLIOTECA_HPP
