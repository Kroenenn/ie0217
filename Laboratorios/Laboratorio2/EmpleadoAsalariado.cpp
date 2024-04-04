#include "EmpleadoAsalariado.hpp"

// Constructor de la clase EmpleadoAsalariado
// Se utiliza "_" para diferenciar los atributos de la clase de los argumentos
// Se llama al constructor de la clase Empleado con los argumentos recibidos
EmpleadoAsalariado::EmpleadoAsalariado(std::string _nombre, int _edad, double _salario) : 
    Empleado(_nombre, _edad, _salario) {}

// Método que calcula el pago del empleado asalariado
// Se utiliza "EmpleadoAsalariado::calcularPago()" para indicar que el método
// pertenece a la clase EmpleadoAsalariado

// "const" indica que el método no modifica los atributos de la clase
double EmpleadoAsalariado::calcularPago() const { 
    return salario;
}