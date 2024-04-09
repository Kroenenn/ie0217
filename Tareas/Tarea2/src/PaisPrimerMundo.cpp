// PaisPrimerMundo.cpp

#include "PaisPrimerMundo.hpp"
#include <iostream>


PaisPrimerMundo::PaisPrimerMundo(const std::string* nombre, bool tieneTecnologia5G, bool tieneAeropuerto, 
                                 unsigned int identificador, 
                                 bool tieneCentroDeInvestigacionYDesarrollo, unsigned int poblacion)
    : Pais(nombre, tieneTecnologia5G, tieneAeropuerto, identificador),
      tieneCentroDeInvestigacionYDesarrollo(tieneCentroDeInvestigacionYDesarrollo),
      poblacionTotal(poblacion) {

}

void PaisPrimerMundo::calcularEmpleo() {

}

unsigned int PaisPrimerMundo::obtenerHabitantesConTrabajo() const {

}

unsigned int PaisPrimerMundo::obtenerHabitantesSinTrabajo() const {

}


void PaisPrimerMundo::imprimirInformacion() const {

}

unsigned int PaisPrimerMundo::obtenerIdentificador() const {

}

bool PaisPrimerMundo::tieneCentroID() const {

}


