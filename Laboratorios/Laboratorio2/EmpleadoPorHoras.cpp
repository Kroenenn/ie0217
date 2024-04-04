#include "EmpleadoPorHoras.hpp"

// Constructor de la clase EmpleadoPorHoras
// Se utiliza "_" para diferenciar los atributos de la clase de los argumentos
// Se llama al constructor de la clase Empleado con los argumentos recibidos

EmpleadoPorHoras::EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas) : 
    Empleado(_nombre, _edad, _salario), horasTrabajadas(_horasTrabajadas) {}

// Método que calcula el pago del empleado por horas
// Se utiliza "EmpleadoPorHoras::calcularPago()" para indicar que el método
// pertenece a la clase EmpleadoPorHoras

// "const" indica que el método no modifica los atributos de la clase
double EmpleadoPorHoras::calcularPago() const {
    return salario * horasTrabajadas;
}