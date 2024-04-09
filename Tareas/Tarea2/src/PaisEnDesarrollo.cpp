#include "PaisEnDesarrollo.hpp"
#include "Utilidad.hpp"
#include <iostream>
#include <cstdlib> // Para std::rand()

PaisEnDesarrollo::PaisEnDesarrollo(const std::string* nombre, bool tieneTecnologia5G, 
                                   bool tieneAeropuerto, unsigned int cantidadHabitantes,
                                   unsigned int identificador)
    : Pais(nombre, tieneTecnologia5G, tieneAeropuerto, identificador), 
      cantidadHabitantes(cantidadHabitantes) {

    if (esNumeroPrimo(this->obtenerIdentificador())) {
        this->identificador += 1; 
    }
    calcularPIB();
}



void PaisEnDesarrollo::imprimirInformacion() const {
    std::cout << "\n"
              << "País en desarrollo: " << obtenerNombre() << "\n"
              << "Identificador único (no primo): " << obtenerIdentificador() << "\n"
              << "Cantidad total de habitantes: " << obtenerCantidadHabitantes() << "\n"
              << "PIB: " << pib << "\n"
              << "Tiene aeropuerto: " << (tieneAeropuerto ? "Sí" : "No") << "\n"
              << "Tiene tecnología 5G: " << (tieneTecnologia5G ? "Sí" : "No") << std::endl;
}

unsigned int PaisEnDesarrollo::obtenerCantidadHabitantes() const {
    return cantidadHabitantes;
}
