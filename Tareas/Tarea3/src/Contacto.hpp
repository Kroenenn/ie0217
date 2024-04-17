/**
 * @file Contacto.hpp
 * @brief Archivo de cabecera de la clase Contacto. Posee las estructuras Contacto, ListaContactos y ListaLocal.
 * 
 * Este archivo contiene la definición de la estructura Contacto y la estructura ListaContactos.
 * Tambien contiene la definición de las funciones miembro de la estructura Contacto y ListaContactos.
 * La estructura listaLocal es una lista de contactos que se utiliza para almacenar los contactos en el celular.
 * La estructura ListaContactos es una lista de contactos que se utiliza para almacenar los contactos en la nube.
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

#ifndef CONTACTO_HPP
#define CONTACTO_HPP

#include <string>

/**
 * @brief Estructura Contacto.
 * 
 * Esta estructura se encarga de almacenar la información de un contacto.
 * @param nombre Puntero a un arreglo de caracteres que almacena el nombre del contacto.
 * @param telefono Puntero a un arreglo de caracteres que almacena el teléfono del contacto.
 * @param siguiente Puntero al siguiente contacto en la lista de contactos.
 * @param eliminadoDeMemoria Booleano que indica si el contacto fue eliminado de la memoria.
 * 
*/
struct Contacto {
    char* nombre;
    char* telefono;
    Contacto* siguiente;
    bool eliminadoDeMemoria;

    /**
     * @brief Inicializa un contacto.
     * 
     * Esta función inicializa un contacto con un nombre y un teléfono.
     * @param nombre Puntero a un arreglo de caracteres que almacena el nombre del contacto.
     * @param telefono Puntero a un arreglo de caracteres que almacena el teléfono del contacto.
    */
    void init(const char* nombre, const char* telefono);

    /**
     * @brief Elimina un contacto.
     * 
     * Esta función elimina un contacto de la memoria.
    */
    void cleanup();
};


/**
 * @brief Estructura ListaContactos.
 * 
 * Esta estructura se encarga de almacenar una lista de contactos.
 * @param cabeza Puntero al primer contacto en la lista de contactos.
*/
struct ListaContactos {

    Contacto* cabeza;

    /**
     * @brief Constructor de la estructura ListaContactos.
     * 
     * Este constructor inicializa la lista de contactos con un puntero nulo.
    */
    ListaContactos();

    /**
     * @brief Destructor de la estructura ListaContactos.
     * 
     * Este destructor elimina todos los contactos de la lista de contactos.
    */
    ~ListaContactos();

    /**
     * @brief Agregar contacto.
     * 
     * Esta función agrega un contacto a la lista de contactos.
     * @param nombre Puntero a un arreglo de caracteres que almacena el nombre del contacto.
     * @param telefono Puntero a un arreglo de caracteres que almacena el teléfono del contacto.
    */
    void agregarContacto(const char* nombre, const char* telefono);

    /**
     * @brief Eliminar contacto.
     * 
     * Esta función elimina un contacto de la lista de contactos.
     * @param nombre Nombre del contacto a eliminar.
     * @return Verdadero si el contacto fue eliminado, falso en caso contrario.
    */
    bool eliminarContacto(std::string nombre);

    /**
     * @brief Imprimir lista.
     * 
     * Esta función imprime la lista de contactos.
    */
    void imprimirLista();

    /**
     * @brief Verificar si la lista está vacía.
     * 
     * Esta función verifica si la lista de contactos está vacía.
     * @return Verdadero si la lista está vacía, falso en caso contrario.
    */
    bool estaVacia();

    /**
     * @brief Imprimir solo los nombres de los contactos.
     * 
     * Esta función imprime solo los nombres de los contactos.
    */
    void imprimirSoloNombres();
    
    /**
     * @brief Agregar contacto ordenado.
     * 
     * Esta función agrega un contacto a la lista de contactos de forma ordenada.
     * @param nombre Nombre del contacto a agregar.
     * @param telefono Teléfono del contacto a agregar.
    */
    void agregarContactoOrdenado(std::string nombre, std::string telefono);

    /**
     * @brief Buscar contacto.
     * 
     * Esta función busca un contacto en la lista de contactos.
     * 
     * @param nombre Nombre del contacto a buscar.
    */
    Contacto* buscarContacto(const char* nombre);
};


/**
 * @brief Estructura ListaLocal.
 * 
 * Esta estructura se encarga de almacenar una lista de contactos en el celular.
 * @param cabeza Puntero al primer contacto en la lista de contactos.
*/
struct ListaLocal {
    Contacto* cabeza;

    /**
     * @brief Constructor de la estructura ListaLocal.
     * 
     * Este constructor inicializa la lista de contactos con un puntero nulo.
    */
    ListaLocal();

    /**
     * @brief Destructor de la estructura ListaLocal.
     * 
     * Este destructor elimina todos los contactos de la lista de contactos.
    */
    ~ListaLocal();

    /**
     * @brief Agregar contacto.
     * 
     * Esta función agrega un contacto a la lista de contactos.
     * @param nombre Puntero a un arreglo de caracteres que almacena el nombre del contacto.
     * @param telefono Puntero a un arreglo de caracteres que almacena el teléfono del contacto.
    */
    void agregarContacto(const char* nombre, const char* telefono);

    /**
     * @brief Eliminar contacto.
     * 
     * Esta función elimina un contacto de la lista de contactos.
     * @param nombre Nombre del contacto a eliminar.
     * @return Verdadero si el contacto fue eliminado, falso en caso contrario.
    */
    bool eliminarContactoLocal(const std::string& nombre);

    /**
     * @brief Imprimir lista.
     * 
     * Esta función imprime la lista de contactos.
    */
    void imprimirLista();

    /**
     * @brief Verificar si la lista está vacía.
     * 
     * Esta función verifica si la lista de contactos está vacía.
     * @return Verdadero si la lista está vacía, falso en caso contrario.
    */
    bool estaVacia();

    /**
     * @brief Imprimir solo los nombres de los contactos.
     * 
     * Esta función imprime solo los nombres de los contactos.
    */
    void imprimirSoloNombres();

    /**
     * @brief Agregar contacto ordenado.
     * 
     * Esta función agrega un contacto a la lista de contactos de forma ordenada.
     * @param nombre Nombre del contacto a agregar.
     * @param telefono Teléfono del contacto a agregar.
    */
    void agregarContactoOrdenado(std::string nombre, std::string telefono);

    /**
     * @brief Fusionar y ordenar listas.
     * 
     * Esta función fusiona y ordena las listas de contactos en la lista maestra.
     * @param listaMaestra Lista de contactos maestra. Sirve para ordenar los contactos.
    */
    void ordenarLista();

    /**
     * @brief Imprimir lista ordenada.
     * 
     * Esta función imprime la lista de contactos ordenada.
    */
    void imprimirListaOrdenada();

    /**
     * @brief Buscar contacto.
     * 
     * Esta función busca un contacto en la lista de contactos locales.
     * 
     * @param nombre Nombre del contacto a buscar.
    */
    Contacto* buscarContacto(const char* nombre);
};

#endif // CONTACTO_HPP