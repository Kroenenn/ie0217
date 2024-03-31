#include <iostream>
#include <fstream>

/**
 * @file destructor.cpp
 * @brief Ejemplo de clase Archivo con destructor.
 */

/**
 * @class Archivo
 * @brief Clase para manejar la apertura y cierre de archivos.
 *
 * Esta clase demuestra la funcionalidad de fstream para abrir y cerrar archivos,
 * asegurándose de que se cierren correctamente al destruir el objeto.
 */
class Archivo {
private:
    std::fstream archivo; ///< Objeto fstream para el manejo del archivo.

public:
    /**
     * @brief Constructor de Archivo que abre un archivo para entrada y salida.
     * @param nombre_archivo Nombre o ruta del archivo a abrir.
     */
    Archivo(std::string nombre_archivo) {
        archivo.open(nombre_archivo, std::ios::in | std::ios::out | std::ios::app);
        if (!archivo.is_open()) {
            std::cout << "No se pudo abrir el archivo " << nombre_archivo << std::endl;
        }
    }

    /**
     * @brief Destructor de Archivo que cierra el archivo si está abierto.
     */
    ~Archivo() {
        if (archivo.is_open()) {
            archivo.close();
        }
    }
};

/**
 * @brief Punto de entrada principal del programa.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 */
int main() {
    // Crea una instancia de Archivo, intentando abrir 'datos.txt'.
    Archivo mi_archivo("datos.txt");


    return 0;
}
