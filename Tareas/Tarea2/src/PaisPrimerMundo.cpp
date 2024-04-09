// PaisPrimerMundo.cpp

#include "PaisPrimerMundo.hpp"
#include "Utilidad.hpp"
#include <iostream>
#include <cstdlib> // para rand() y srand()
#include <ctime> // para time()


PaisPrimerMundo::PaisPrimerMundo(const std::string* nombre, bool tieneTecnologia5G, bool tieneAeropuerto, 
                                 unsigned int identificador, 
                                 bool tieneCentroDeInvestigacionYDesarrollo, unsigned int poblacion)
    : Pais(nombre, tieneTecnologia5G, tieneAeropuerto, identificador),
      tieneCentroDeInvestigacionYDesarrollo(tieneCentroDeInvestigacionYDesarrollo),
      poblacionTotal(poblacion) {
    if (esNumeroPrimo(identificador)) {
        this->identificador = identificador;
    } else {
        this->identificador = siguienteNumeroPrimo(identificador);
    }
    calcularPIB();
    calcularEmpleo();
}

void PaisPrimerMundo::calcularEmpleo() {
    habitantesConTrabajo = std::rand() % poblacionTotal; 
    habitantesSinTrabajo = poblacionTotal - habitantesConTrabajo; 
}

unsigned int PaisPrimerMundo::obtenerHabitantesConTrabajo() const {
    return habitantesConTrabajo;
}

unsigned int PaisPrimerMundo::obtenerHabitantesSinTrabajo() const {
    return habitantesSinTrabajo;
}


void PaisPrimerMundo::imprimirInformacion() const {
    std::cout << "\n"
              << "País del primer mundo: " << nombre << "\n"
              << "Identificador único (primo): " << identificador << "\n"
              << "PIB: " << pib << "\n"
              << "Tiene centro de investigación y desarrollo: " 
              << (tieneCentroDeInvestigacionYDesarrollo ? "Sí" : "No") << "\n"
              << "Habitantes con trabajo: " << obtenerHabitantesConTrabajo() << "\n"
              << "Habitantes sin trabajo: " << obtenerHabitantesSinTrabajo() << "\n"
              << "Tiene aeropuerto: " << (tieneAeropuerto ? "Sí" : "No") << "\n"
              << "Tiene tecnología 5G: " << (tieneTecnologia5G ? "Sí" : "No") << std::endl;
}

unsigned int PaisPrimerMundo::obtenerIdentificador() const {
    return identificador;
}

bool PaisPrimerMundo::tieneCentroID() const {
    return tieneCentroDeInvestigacionYDesarrollo;
}


