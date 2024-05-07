#include <iostream>
#include "biblioteca.hpp"

void Biblioteca::agregarLibro(const std::string& titulo, const std::string& autor) {
    //El emplace_back es un método de la clase vector que permite agregar un elemento al final del vector
    //sin necesidad de crear un objeto temporal.
    catalogo.emplace_back(titulo, autor);
}

void Biblioteca::mostrarCatalogo() {
    // Este for lo que hace es recorrer el vector catalogo y para cada libro en el vector
    // llama al método mostrarInfo() de la clase Libro.
    for (const auto& libro : catalogo) {
        libro.mostrarInfo();
    }
}
