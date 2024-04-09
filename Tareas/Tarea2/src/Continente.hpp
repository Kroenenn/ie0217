// Continente.hpp

#ifndef CONTINENTE_HPP
#define CONTINENTE_HPP

#include "Pais.hpp"
#include <string>

const int MAX_PAISES = 100; // Asumiendo un máximo de 100 países por continente

class Continente {
private:
    Pais* paises[MAX_PAISES]; // Array de punteros a objetos de tipo Pais
    int numPaises; // Contador actual de países
    std::string nombre;

public:
    Continente(); // Constructor predeterminado
    explicit Continente(const std::string& nombre); // Constructor con nombre del continente
    ~Continente();

    bool agregarPais(Pais* nuevoPais); // Agrega un nuevo país al continente
    bool eliminarPais(const std::string& nombrePais); // Elimina un país por nombre
    void imprimirInformacion() const; // Imprime información de todos los países en el continente
    std::string obtenerNombre() const; // Devuelve el nombre del continente
    void imprimirNombresPaises() const;
    Pais* buscarPais(const std::string& nombrePais);
};

#endif // CONTINENTE_HPP
