#ifndef EMPLEADOASALARIADO_HPP
#define EMPLEADOASALARIADO_HPP

#include "Empleado.hpp"

// Clase hija de Empleado
// recibe el nombre, edad y salario del empleado
// y calcula el pago del empleado

class EmpleadoAsalariado : public Empleado {
    public:
        // Constructor de la clase EmpleadoAsalariado

        // Se utiliza "_" para diferenciar los atributos de la clase de los argumentos
        EmpleadoAsalariado(std::string _nombre, int _edad, double _salario);
        double calcularPago() const override; // Se utiliza const override para indicar que el método es constante y se sobreescribe
};


#endif // EMPLEADOASALARIADO_HPP