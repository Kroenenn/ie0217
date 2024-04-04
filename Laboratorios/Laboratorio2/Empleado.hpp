#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>

class Empleado {
    protected:
        std::string nombre;
        int edad;
        double salario;

    public:
        Empleado(std::string nombre, int edad, double salario);
        virtual ~Empleado(){}
        virtual double calcularPago() const = 0; // Método virtual puro
        virtual void mostrarDetalles() const = 0;
};



#endif // EMPLEADO_HPP