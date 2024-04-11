#include "Funciones.hpp"
#include <iostream>

void agregarLibro(Libro*& lista){ // Se usa una referencia a un puntero de Libro para poder modificar la lista de libros
    Libro* nuevoLibro = new Libro; // Se asigna memoria dinámicamente para un nuevo libro, el new Libro asigna un libro en el heap y devuelve la dirección de memoria.

    cout << "Ingrese el título del libro: " << endl;
    cin.ignore(); // Se usa para limpiar el buffer de entrada
    getline(cin, nuevoLibro->titulo); // Se usa para leer una línea de texto, nuevoLibro->titulo lo que hace es acceder al campo titulo del libro apuntado por nuevoLibro

    cout << "Ingrese el autor del libro: " << endl;

    getline(cin, nuevoLibro->autor); // Se usa para leer una línea de texto, nuevoLibro->autor lo que hace es acceder al campo autor del libro apuntado por nuevoLibro

    cout << "Ingrese el género del libro: " << endl;

    getline(cin, nuevoLibro->genero); // Se usa para leer una línea de texto, nuevoLibro->genero lo que hace es acceder al campo genero del libro apuntado por nuevoLibro

    nuevoLibro->siguiente = lista; // Se asigna el siguiente libro en la lista al nuevo libro, esto es para que el nuevo libro sea el primero en la lista

    lista = nuevoLibro; // Se asigna el nuevo libro a la lista de libros para que sea el primero en la lista

    cout << "Libro agregado correctamente." << endl;

}

void mostrarLibros(Libro* lista){
    if (lista == nullptr){ // Si la lista de libros está vacía, se imprime un mensaje y se retorna
        cout << "La libreria no tiene libros." << endl;
        return;
    } 
    
    cout << "Lista de libros:" << endl; 
    while (lista != nullptr){ // Mientras la lista de libros no sea nula, se imprimen los libros
            cout << "Título: " << lista->titulo << endl; // Se accede al campo titulo del libro apuntado por lista
            cout << "Autor: " << lista->autor << endl; // Se accede al campo autor del libro apuntado por lista
            cout << "Género: " << lista->genero << endl << endl; // Se accede al campo genero del libro apuntado por lista
            lista = lista->siguiente; // Se asigna el siguiente libro en la lista a lista
        
    }
}

void liberarMemoria(Libro* lista){ // Se libera la memoria asignada dinámicamente para los libros, se utiliza Libro* para poder modificar la lista de libros
    while (lista != nullptr){ // Mientras la lista de libros no sea nula, se eliminan los libros
        Libro* temp = lista; // Se asigna el libro apuntado por lista a temp
        lista = lista->siguiente; // Se asigna el siguiente libro en la lista a lista
        delete temp; // Se libera la memoria asignada para el libro apuntado por temp
    }
}