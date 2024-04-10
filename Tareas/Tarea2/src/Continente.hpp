/**
 * @file Continente.hpp
 * @brief Define la clase Continente.
 *
 * Este archivo contiene la definición de la clase Continente, que gestiona los países
 * dentro de un modelo de simulación geográfica.
 */

#ifndef CONTINENTE_HPP
#define CONTINENTE_HPP

#include "Pais.hpp"
#include <string>

const int MAX_PAISES = 100; ///< Asumiendo un máximo de 100 países por continente.

/**
 * @class Continente
 * @brief Clase para gestionar los países dentro de un continente.
 * 
 * Esta clase administra una colección de países, permitiendo agregar y eliminar países,
 * así como proporcionar información sobre ellos.
 */
class Continente {


public:
    Pais* paises[MAX_PAISES]; ///< Array de punteros a objetos de tipo Pais.
    int numPaises; ///< Contador actual de países dentro del continente.
    std::string nombre; ///< Nombre del continente.
    /**
     * @brief Constructor predeterminado de la clase Continente.
     * 
     * Inicializa un continente sin países.
     */
    Continente();

    /**
     * @brief Constructor de la clase Continente que especifica el nombre.
     * 
     * @param nombre Nombre del continente.
     */
    Continente(const std::string& nombre);

        /**
     * @brief Destructor de la clase Continente.
     * 
     * Limpia todos los recursos asociados con los países del continente.
     */
    ~Continente();

    /**
     * @brief Agrega un nuevo país al continente.
     * 
     * @param nuevoPais Puntero al país que se desea agregar.
     * @return true si el país fue agregado exitosamente, false de lo contrario.
     */
    bool agregarPais(Pais* nuevoPais);

    /**
     * @brief Limpia todos los países del continente.
     */
    void limpiarPaises();

    /**
     * @brief Elimina un país del continente por nombre.
     * 
     * @param nombrePais Nombre del país que se desea eliminar.
     * @return true si el país fue eliminado exitosamente, false de lo contrario.
     */
    bool eliminarPais(const std::string& nombrePais); 

    /**
     * @brief Imprime la información de todos los países en el continente.
     */
    void imprimirInformacion() const; 

    /**
     * @brief Obtiene el nombre del continente.
     * 
     * @return Nombre del continente.
     */
    std::string obtenerNombre() const; 

    /**
     * @brief Imprime los nombres de todos los países en el continente.
     */
    void imprimirNombresPaises() const;

    /**
     * @brief Busca un país por nombre en el continente.
     * 
     * @param nombrePais Nombre del país a buscar.
     * @return Puntero al país si se encuentra, nullptr de lo contrario.
     */
    Pais* buscarPais(const std::string& nombrePais);
};

#endif // CONTINENTE_HPP
