#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include "Libro.hpp"

// Prototipos de funciones
void agregarLibro(Libro*& lista); // Se usa una referencia a un puntero de Libro para poder modificar la lista de libros
void mostrarLibros(Libro* lista); // Se usa un puntero de Libro para no modificar la lista de libros
void liberarMemoria(Libro* lista); 

#endif // FUNCIONES_HPP