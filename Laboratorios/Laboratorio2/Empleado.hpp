#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>

class Empleado { // Clase abstracta
    protected:
        std::string nombre; // Atributos protegidos para que las clases hijas puedan acceder a ellos directamente.
        int edad;
        double salario;

    public:
        // Constructor, destructor y métodos virtuales
        Empleado(std::string nombre, int edad, double salario); 
        virtual ~Empleado(){} // Destructor virtual, lo que hace es liberar la memoria de los objetos de las clases hijas.
        virtual double calcularPago() const = 0; // Método virtual puro ya que tiene const = 0. Si o si en las clases hijas se debe implementar.
        virtual void mostrarDetalles() const; // Método virtual, tiene "const" para indicar que no modifica los atributos de la clase.
};



#endif // EMPLEADO_HPP