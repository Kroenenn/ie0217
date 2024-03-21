#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include "Contacto.hpp"

void agregarContacto(Contacto listaContactos[], int &numContactos); // Esto lo que hace es declarar la función agregarContacto, que recibe un arreglo de Contacto y un entero por referencia
void mostrarContactos(const Contacto listaContactos[], int numContactos); // Esto lo que hace es declarar la función mostrarContactos, que recibe un arreglo de Contacto y un entero
void buscarContacto(const Contacto listaContactos[], int numContactos); // Esto lo que hace es declarar la función buscarContacto, que recibe un arreglo de Contacto y un entero

#endif // FUNCIONES_HPP
