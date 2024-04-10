#include <iostream>
#include "Planeta.hpp"
#include "Continente.hpp"
#include "PaisPrimerMundo.hpp"
#include "PaisEnDesarrollo.hpp"
#include <cstdlib> // Para std::rand()
#include <ctime>   // Para std::time()

int main() {
    // Inicializar la semilla para la generación de números aleatorios
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    
    // Creación del planeta y continentes
    Planeta tierra("Tierra");
    Continente america("America");
    Continente europa("Europa");
    Continente africa("Africa");
    Continente oceania("Oceanía");
    Continente asia("Asia");
    
    // Crear nombres para los países
    std::string nombreUSA = "Estados Unidos";
    std::string nombreMexico = "Mexico";

    // Crear algunos países (ejemplo)
    
    PaisPrimerMundo usa(&nombreUSA, true, true, 3, true, 330000000);
    PaisEnDesarrollo mexico(&nombreMexico, true, false, 126000000, 11);
    
    // Agregar países a los continentes (ejemplo)
    america.agregarPais(&usa);
    america.agregarPais(&mexico);
    
    // Agregar continentes al planeta (ejemplo)
    tierra.agregarContinente(&america);
    tierra.agregarContinente(&europa);
    tierra.agregarContinente(&africa);
    tierra.agregarContinente(&oceania);
    tierra.agregarContinente(&asia);

    // Añadir los nombres de los continentes accesibles por avión
    tierra.agregarContinenteAccesiblePorAvion("America");
    tierra.agregarContinenteAccesiblePorAvion("Europa");
    tierra.agregarContinenteAccesiblePorAvion("Asia");

    bool running = true;
    int opcion;

    while (running) {
        std::cout << "\nMenú Principal:" << std::endl;
        std::cout << "1. Imprimir información de todos los países" << std::endl;
        std::cout << "2. Comparar países" << std::endl;
        std::cout << "3. Agregar un nuevo país" << std::endl;
        std::cout << "4. Eliminar un país" << std::endl;
        std::cout << "5. Salir" << std::endl;
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                tierra.imprimirInformacion();
                break;
            case 2: {
                std::string nombrePais1, nombrePais2;
                std::cout << "Ingrese el nombre del primer país a comparar: ";
                std::cin.ignore(); // Limpiar el buffer de entrada
                std::getline(std::cin, nombrePais1);
                
                std::cout << "Ingrese el nombre del segundo país a comparar: ";
                std::getline(std::cin, nombrePais2);
                

                const Pais* pais1 = tierra.buscarPais(nombrePais1);
                const Pais* pais2 = tierra.buscarPais(nombrePais2);

                if (pais1 && pais2) {
                    // Realiza las comparaciones individualmente y reporta
                    std::cout << "\nComparando países: " << pais1->obtenerNombre() << " y " << pais2->obtenerNombre() << std::endl;
                    std::cout << "Tecnología 5G: " << (pais1->esIgualEnTecnologia5G(*pais2) ? "Igual" : "Diferente") << std::endl;
                    std::cout << "Aeropuertos: " << (pais1->esIgualEnAeropuertos(*pais2) ? "Igual" : "Diferente") << std::endl;
                } else {
                    std::cout << "Uno o ambos países no se pudieron encontrar." << std::endl;
                }
                break;
            }
            case 3: {
                std::string nombrePais;
                std::string nombreContinente;
                bool tiene5G, tieneAeropuerto;
                unsigned int poblacion, id;
                char tipoPais;
                
                // Solicitar información al usuario
                // Imprimir la lista de continentes disponibles
                std::cout << "Continentes disponibles:" << std::endl;
                tierra.imprimirNombresContinentes();
                std::cout << "Ingrese el nombre del continente donde agregar el país: ";
                std::cin.ignore(); 
                std::getline(std::cin, nombreContinente);
                
                Continente* continente = tierra.buscarContinente(nombreContinente);
                if (continente == nullptr) {
                    std::cout << "Continente no encontrado." << std::endl;
                    break;
                }
                
                std::cout << "Ingrese el nombre del país a agregar: ";
                std::getline(std::cin, nombrePais);
                
                std::cout << "Es de Primer Mundo o en Desarrollo? (P/D): ";
                std::cin >> tipoPais;
                
                std::cout << "Tiene tecnología 5G? (1 para sí, 0 para no): ";
                std::cin >> tiene5G;
                
                std::cout << "Tiene aeropuerto? (1 para sí, 0 para no): ";
                std::cin >> tieneAeropuerto;
                
                std::cout << "Ingrese la población del país: ";
                std::cin >> poblacion;
                
                std::cout << "Ingrese el identificador del país: ";
                std::cin >> id;
                
                Pais* nuevoPais = nullptr;

                // Crear país basado en si es de primer mundo o en desarrollo
                if (tipoPais == 'P' || tipoPais == 'p') {
                    bool tieneCentroID;
                    std::cout << "Tiene centro de investigación y desarrollo? (1 para sí, 0 para no): ";
                    std::cin >> tieneCentroID;
                    nuevoPais = new PaisPrimerMundo(&nombrePais, tiene5G, tieneAeropuerto, id, tieneCentroID, poblacion);
                } else if (tipoPais == 'D' || tipoPais == 'd') {
                    nuevoPais = new PaisEnDesarrollo(&nombrePais, tiene5G, tieneAeropuerto, poblacion, id);
                } else {
                    std::cout << "Tipo de país no válido. Debe ser P o D." << std::endl;
                    break;
                }
                
                if (nuevoPais != nullptr && continente->agregarPais(nuevoPais)) {
                    std::cout << "País agregado con éxito." << std::endl;
                } else {
                    std::cout << "No se pudo agregar el país." << std::endl;
                    delete nuevoPais; // Evitar fugas de memoria si no se pudo agregar
                }
                break;
            }
            case 4: {
                // Imprimir la lista de continentes disponibles
                std::cout << "Continentes disponibles:" << std::endl;
                tierra.imprimirNombresContinentes();

                std::string nombreContinente;
                std::cout << "Seleccione el continente del país a eliminar: ";
                std::cin.ignore();
                std::getline(std::cin, nombreContinente);

                Continente* continente = tierra.buscarContinente(nombreContinente);
                if (continente != nullptr) {
                    // Imprimir la lista de países en el continente seleccionado
                    std::cout << "Países en " << nombreContinente << ":" << std::endl;
                    continente->imprimirNombresPaises();

                    std::string nombrePais;
                    std::cout << "Ingrese el nombre del país a eliminar: ";
                    std::getline(std::cin, nombrePais);

                    if (continente->eliminarPais(nombrePais)) {
                        std::cout << "País eliminado con éxito." << std::endl;
                    } else {
                        std::cout << "No se encontró el país." << std::endl;
                    }
                } else {
                    std::cout << "No se encontró el continente." << std::endl;
                }
                break;
            }
            case 5:
                running = false;
                std::cout << "Saliendo del programa..." << std::endl;
                break;
            default:
                std::cout << "Opción no válida, intente de nuevo." << std::endl;
                break;
        }
    }

    return 0;
}
