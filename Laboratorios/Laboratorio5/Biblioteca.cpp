// Biblioteca.cpp
#include "Biblioteca.hpp"
#include <algorithm>  // Para acceder a std::sort y std::find_if
#include <iostream>   

// Agrega un libro al vector de libros de la biblioteca
// 'const Libro& libro' evita la copia del objeto Libro
void Biblioteca::agregarLibro(const Libro& libro) {
    libros.push_back(libro); // Inserta el libro al final del vector 'libros'
}

// Muestra la información de cada libro almacenado en la biblioteca
// Utiliza un bucle for basado en rango para iterar sobre cada elemento del vector 'libros'
void Biblioteca::mostrarLibros() {
    // **Preguntar al profesor el rendimiento de auto
    for (const auto& libro : libros) { // 'auto&' deduce el tipo automáticamente y usa referencia para evitar copias
        std::cout << libro.titulo << ", " << libro.autor << ", " << libro.anioPublicacion << std::endl; // Imprime los detalles del libro
    }
}

// Ordena los libros en el vector 'libros' por su año de publicación
// Utiliza std::sort, que requiere el inicio y el fin del rango a ordenar, y utiliza el operador '<' sobrecargado en Libro
void Biblioteca::ordenarLibrosPorAnio() {
    std::sort(libros.begin(), libros.end()); // Ordena el vector desde el principio hasta el final
}

// Busca un libro por su título utilizando el algoritmo std::find_if
// 'const std::string& titulo' encuentra el título a buscar evitando copias
// La función l compara el título de cada libro con el título buscado
std::vector<Libro>::iterator Biblioteca::buscarLibroPorTitulo(const std::string& titulo) {
    return std::find_if(libros.begin(), libros.end(), [&titulo](const Libro& l) { // Agarra 'titulo' por referencia
        return l.titulo == titulo; // Devuelve true si los títulos son iguales
    });
}

// Retorna un iterador al final del vector 'libros'
// Este iterador se utiliza para comprobar si 'buscarLibroPorTitulo' encontró el libro o no
std::vector<Libro>::iterator Biblioteca::end() {
    return libros.end(); // Devuelve el iterador al final
}
