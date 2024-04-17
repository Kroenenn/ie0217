/**
 * @file HashTable.hpp
 * @brief Archivo de cabecera de la clase HashTable.
 * 
 * Este archivo contiene la definición de la clase HashTable, que se encarga de gestionar una tabla hash de contactos.
 * 
 * 
 * MIT License
 * 
 * Copyright (c) 2024 Oscar Porras Silesky
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
*/

#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP

#include "Contacto.hpp"



const int TAMANO_TABLA = 25;

/**
 * @brief Clase HashTable.
 * 
 * Esta clase se encarga de gestionar una tabla hash de contactos.
*/
struct HashTable {
    /**
     * @brief Tabla de contactos.
     * 
     * Esta tabla de contactos es un arreglo de listas de contactos.
    */
    ListaContactos tabla[TAMANO_TABLA];

    /**
     * @brief Constructor de la clase HashTable.
     * 
     * Este constructor inicializa la tabla de contactos con listas de contactos vacías.
    */
    HashTable();

    /**
     * @brief Destructor de la clase HashTable.
     * 
     * Este destructor no realiza ninguna acción.
    */
    ~HashTable();

    /**
     * @brief Función de hash.
     * 
     * Esta función calcula el índice hash para una clave dada.
     * 
     * @param clave Clave para la que se calculará el índice hash.
     * @return Índice hash calculado.
    */
    int funcionHash(std::string clave);

    /**
     * @brief Agregar contacto.
     * 
     * Esta función agrega un contacto a la tabla hash.
     * 
     * @param nombre Nombre del contacto.
     * @param telefono Teléfono del contacto.
    */
    void agregarContacto(std::string nombre, std::string telefono);

    /**
     * @brief Eliminar contacto.
     * 
     * Esta función elimina un contacto de la tabla hash.
     * 
     * @param nombre Nombre del contacto a eliminar.
     * @param eliminarDeMemoria Indica si se debe eliminar el contacto de la memoria.
     * @return Verdadero si el contacto fue eliminado, falso en caso contrario.
    */
    bool eliminarContacto(std::string nombre, bool eliminarDeMemoria);

    /**
     * @brief Buscar contacto.
     * 
     * Esta función busca un contacto en la tabla hash.
     * 
     * @param nombre Nombre del contacto a buscar.
     * @return Puntero al contacto encontrado, o nullptr si no se encontró.
    */
    Contacto* buscarContacto(std::string nombre);

    /**
     * @brief Imprimir tabla hash.
     * 
     * Esta función imprime la tabla hash en la consola.
    */
    void imprimirHashTable();

    /**
     * @brief Mostrar todos los contactos.
     * 
     * Esta función imprime todos los contactos de la tabla hash en la consola.
    */
    void mostrarTodosLosContactos();

    /**
     * @brief Fusionar y ordenar listas.
     * 
     * Esta función fusiona y ordena todas las listas de contactos en una sola lista.
     * 
     * @param listaMaestra Lista de contactos maestra. Esta lista se encarga de ordenar los contactos.
    */
    void fusionarYOrdenarListas(ListaContactos& listaMaestra);
};

#endif // HASHTABLE_HPP