#include "Empleado.hpp"
#include <iostream>

// Constructor de la clase Empleado que inicializa los atributos de la clase
// con los valores recibidos como argumentos
// Se utiliza _ para diferenciar los atributos de la clase de los argumentos
Empleado::Empleado(std::string _nombre, int _edad, double _salario) : 
    nombre(_nombre), edad(_edad), salario(_salario) {}


// Método que imprime los detalles del empleado
// Se utiliza "Empleado::mostrarDetalles()" para indicar que el método
// pertenece a la clase Empleado
void Empleado::mostrarDetalles() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Salario: " << salario << std::endl;
}
