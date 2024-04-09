// Pais.hpp

#ifndef PAIS_HPP
#define PAIS_HPP

#include <string>

class Pais {

private:

    bool operator==(const Pais& otro) const;
    bool compararTecnologia5G(const Pais& otro) const;
    bool compararAeropuertos(const Pais& otro) const;
protected:
    std::string nombre;
    bool tieneTecnologia5G;
    bool tieneAeropuerto;
    double pib;
    unsigned int identificador;

public:
    Pais(const std::string* nombre, bool tieneTecnologia5G, bool tieneAeropuerto, unsigned int id);
    virtual ~Pais();

    void calcularPIB();
    virtual void imprimirInformacion() const = 0;

    bool tiene5G() const;
    bool tieneAeropuertoF() const;
    std::string obtenerNombre() const;
    unsigned int obtenerIdentificador() const;
    // Método público que internamente usa el privado para comparar.
    bool esIgualEnTecnologia5G(const Pais& otro) const;
    bool esIgualEnAeropuertos(const Pais& otro) const;
};

#endif // PAIS_HPP
