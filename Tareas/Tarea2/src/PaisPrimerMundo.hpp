#ifndef PAISPRIMERMUNDO_HPP
#define PAISPRIMERMUNDO_HPP

#include "Pais.hpp"
#include <string>

class PaisPrimerMundo : public Pais {
private:
    unsigned int identificador; // Debe ser un número primo
    bool tieneCentroDeInvestigacionYDesarrollo;
    unsigned int habitantesConTrabajo; 
    unsigned int habitantesSinTrabajo;
    unsigned int poblacionTotal; 

    void calcularEmpleo(); // Método privado para calcular empleo

public:
    PaisPrimerMundo(const std::string* nombre, bool tieneTecnologia5G , 
                    bool tieneAeropuerto, unsigned int identificador, 
                    bool tieneCentroDeInvestigacionYDesarrollo, unsigned int poblacionTotal);

    void imprimirInformacion() const override;
    
    unsigned int obtenerIdentificador() const;
    bool tieneCentroID() const;
    unsigned int obtenerHabitantesConTrabajo() const;
    unsigned int obtenerHabitantesSinTrabajo() const;
};

#endif // PAISPRIMERMUNDO_HPP
