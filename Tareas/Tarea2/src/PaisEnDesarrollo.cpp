#include "PaisEnDesarrollo.hpp"

#include <iostream>


PaisEnDesarrollo::PaisEnDesarrollo(const std::string* nombre, bool tieneTecnologia5G, 
                                   bool tieneAeropuerto, unsigned int cantidadHabitantes,
                                   unsigned int identificador)
    : Pais(nombre, tieneTecnologia5G, tieneAeropuerto, identificador), 
      cantidadHabitantes(cantidadHabitantes) {

}



void PaisEnDesarrollo::imprimirInformacion() const {

}

unsigned int PaisEnDesarrollo::obtenerCantidadHabitantes() const {

}
