// Planeta.hpp

#ifndef PLANETA_HPP
#define PLANETA_HPP

#include <string>

const int MAX_CONTINENTES = 5; // Número máximo de continentes en el planeta
const int MAX_ACCESIBLES_POR_AVION = 3; // Número máximo de continentes accesibles por avión

class Planeta {
private:

    std::string continentesAccesiblesPorAvion[MAX_ACCESIBLES_POR_AVION];
    int numContinentes;
    int numAccesiblesPorAvion;
    std::string nombre;

public:
    Planeta(const std::string& nombre);
    ~Planeta();


    void imprimirInformacion() const;

    void imprimirNombresContinentes() const;


    // Métodos relacionados con los viajes en avión
    void agregarContinenteAccesiblePorAvion(const std::string& nombreContinente);
    void imprimirContinentesAccesiblesPorAvion() const;
};

#endif // PLANETA_HPP
