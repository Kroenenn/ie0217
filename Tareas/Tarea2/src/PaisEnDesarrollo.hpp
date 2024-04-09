// PaisEnDesarrollo.hpp
#ifndef PAISENDESARROLLO_HPP
#define PAISENDESARROLLO_HPP

#include "Pais.hpp"
#include <string>

class PaisEnDesarrollo : public Pais {
private:
    unsigned int cantidadHabitantes; // Cantidad total de habitantes en el país

public:
    PaisEnDesarrollo(const std::string* nombre, bool tieneTecnologia5G, 
                     bool tieneAeropuerto, unsigned int cantidadHabitantes,
                     unsigned int identificador);


    void imprimirInformacion() const override;

    unsigned int obtenerCantidadHabitantes() const ;
};

#endif // PAISENDESARROLLO_HPP