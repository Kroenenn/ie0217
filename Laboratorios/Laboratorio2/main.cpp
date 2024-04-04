#include <iostream>
#include "EmpleadoAsalariado.hpp"
#include "EmpleadoPorHoras.hpp"

int main() {

    // Creación de objetos de las clases EmpleadoAsalariado y EmpleadoPorHoras
    EmpleadoAsalariado emp1("Marito", 30, 2000);
    EmpleadoPorHoras emp2("Juana", 25, 100, 20);

    std::cout << "Detalles del empleado asalariado:" << std::endl;

    // Llamada a los métodos de las clases EmpleadoAsalariado y EmpleadoPorHoras

    // Se utiliza "emp1.mostrarDetalles()" para indicar que el método
    // pertenece al objeto emp1 de la clase EmpleadoAsalariado
    emp1.mostrarDetalles();
    std::cout << "Pago: $" << emp1.calcularPago() << std::endl;

    // Se utiliza "emp2.mostrarDetalles()" para indicar que el método
    // pertenece al objeto emp2 de la clase EmpleadoPorHoras
    std::cout << "\nDetalles del empleado por horas: " << std::endl;
    emp2.mostrarDetalles();

    return 0;
}
