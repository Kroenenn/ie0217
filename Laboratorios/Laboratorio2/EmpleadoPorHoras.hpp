#ifndef EMPLEADOPORHORAS_HPP
#define EMPLEADOPORHORAS_HPP

#include "Empleado.hpp"

// Clase hija de Empleado

// recibe el nombre, edad, salario y horas trabajadas del empleado
// y calcula el pago del empleado
class EmpleadoPorHoras : public Empleado {
    private:
        int horasTrabajadas; // Atributo privado de la clase EmpleadoPorHoras, esto hace que solo la clase EmpleadoPorHoras pueda acceder a este atributo

    public:
        // Constructor de la clase EmpleadoPorHoras

        // Se utiliza "_" para diferenciar los atributos de la clase de los argumentos
        // Se llama al constructor de la clase Empleado con los argumentos recibidos
        EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas);
        double calcularPago() const override; // Se utiliza const override para indicar que el método es constante y se sobreescribe
};




#endif // EMPLEADOPORHORAS_HPP