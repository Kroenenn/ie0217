// main.cpp
#include "Biblioteca.hpp"  
#include <iostream>        
int main() {
    Biblioteca miBiblioteca;  // Crea una instancia de la clase Biblioteca

    // Agrega libros a la biblioteca.
    miBiblioteca.agregarLibro({"Cien años de soledad", "Gabriel García Márquez", 1967});
    miBiblioteca.agregarLibro({"1984", "George Orwell", 1949}); // Destacar que el libro se llama 1984, pero el anno de publicacion es 1949. debe salir primero.
    miBiblioteca.agregarLibro({"El señor de los anillos", "J.R.R. Tolkien", 1954});
    miBiblioteca.agregarLibro({"Concherias", "Aquileo Echeverria", 2014});
    miBiblioteca.agregarLibro({"Unica mirando al mar", "Fernando Contreras Castro", 2017});
    miBiblioteca.agregarLibro({"La tortuga que huia del jaguar", "Marta Quintin", 2019});
    miBiblioteca.agregarLibro({"Tu hoy no te casas", "Maria Jose Vela", 2017});

    // Ordena los libros de la biblioteca por año de publicación
    miBiblioteca.ordenarLibrosPorAnio();

    // Muestra los libros ordenados en la consola
    miBiblioteca.mostrarLibros();

    // Busca un libro por título y almacena el resultado en 'libro'
    auto libro = miBiblioteca.buscarLibroPorTitulo("1984");
    // Comprueba si el libro fue encontrado
    if (libro != miBiblioteca.end()) {
        // Si el libro se encuentra, imprime el título del libro encontrado
        std::cout << "Libro encontrado: " << libro->titulo << std::endl;
    } else {
        // Si el libro no se encuentra, imprime un mensaje indicando que no fue encontrado
        std::cout << "Libro no encontrado." << std::endl;
    }

    return 0;
}
