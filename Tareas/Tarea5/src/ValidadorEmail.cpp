/**
 * @file ValidadorEmail.cpp
 * @brief Implementación de la clase ValidadorEmail
 * 
 * Este archivo contiene la implementación de la clase ValidadorEmail, que se encarga de validar correos electrónicos.
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
 * 
 * @see ValidadorEmail.hpp
 */

#include "ValidadorEmail.hpp"
#include <regex>
#include <vector>
#include <stdexcept>
#include <iostream>
#include <sstream>


// Definición de las expresiones regulares para validar el correo
// El nombre del correo puede contener letras, números, puntos, guiones bajos y guiones medios.
// El dominio del correo debe contener al menos una letra y puede contener puntos.
// La extensión del correo debe contener entre 2 y 6 letras.
const std::string ValidadorEmail::nombreFormato = R"(^[a-zA-Z0-9._-]*$)"; // Solo para chequeo de caracteres permitidos
const std::string ValidadorEmail::dominioFormato = R"(^[a-zA-Z]+(\.[a-zA-Z]+)*$)"; // Dominio debe tener al menos un punto
const std::string ValidadorEmail::extensionFormato = R"(^[a-zA-Z]{2,6}$)"; // Extensión debe tener entre 2 y 6 letras


bool ValidadorEmail::validarCorreo(const std::string& inputEmail, char complex) {

// regex tiene un constructor que recibe un string con la expresión regular a utilizar
    std::regex nf(nombreFormato); // nf significa nombreFormato, se usa asi para no confundir con el nombre de la variable nombreFormato
    std::regex df(dominioFormato); // df significa dominioFormato, se usa asi para no confundir con el nombre de la variable dominioFormato 
    std::regex ef(extensionFormato); // ef significa extensionFormato, se usa asi para no confundir con el nombre de la variable extensionFormato

    size_t atPos = inputEmail.find('@'); // Encuentra la posición de la arroba en el correo
    if (atPos == std::string::npos)  // Si no encuentra la arroba, lanza una excepción
        throw std::invalid_argument("ERROR: La dirección de correo debe incluir '@'.");

    std::string localPart = inputEmail.substr(0, atPos); // Obtiene la parte local del correo, substring desde el inicio hasta la arroba
    std::string domainAndExtension = inputEmail.substr(atPos + 1); // Obtiene la parte del dominio y extensión, substring desde la arroba hasta el final
    std::vector<std::string> parts; // Vector para almacenar las partes del dominio y extensión
    std::istringstream splitStream(domainAndExtension); // Stream para dividir el dominio y la extensión por puntos
    std::string item; // Variable para almacenar cada parte del dominio y extensión

    while (getline(splitStream, item, '.')) { // Dividir el dominio y la extensión por puntos
        parts.push_back(item); // Agregar cada parte al vector
    }

    if (parts.size() < 2)  // Si no hay al menos un punto en el dominio y la extensión, lanza una excepción
        throw std::invalid_argument("ERROR: Falta un punto en el dominio y/o extensión.");

    // Determinar la separación entre el dominio y la extensión
    std::string domainPart = parts[0]; // El primer elemento del vector es el dominio
    for (size_t i = 1; i < parts.size() - (complex == 'Y' || complex == 'y' ? 2 : 1); ++i) { // Si la extensión es compuesta, se resta 2
        domainPart += "." + parts[i]; // Concatenar los elementos restantes con un punto
    }

    std::string extensionPart = parts[parts.size() - (complex == 'Y' || complex == 'y' ? 2 : 1)]; // El último elemento del vector es la extensión
    if (complex == 'Y' || complex == 'y') { // Si la extensión es compuesta, se concatena el penúltimo elemento
        extensionPart += "." + parts.back(); // Concatenar el penúltimo elemento con un punto
    }

    // Validaciones del nombre
    // Validación del inicio del nombre

    // Si el nombre está vacío o comienza con un punto, guion bajo o guion medio, lanza una excepción
    if (localPart.empty() || localPart.front() == '.' || localPart.front() == '-' || localPart.front() == '_') 
        throw std::invalid_argument("ERROR: El nombre no debe comenzar con '.', '-', o '_'.");

    // Validación del final del nombre

    // Si el nombre termina con un punto, guion bajo o guion medio, lanza una excepción
    if (localPart.back() == '.' || localPart.back() == '-' || localPart.back() == '_') 
        throw std::invalid_argument("ERROR: El nombre no debe terminar con '.', '-', o '_'.");

    // Validación de caracteres especiales consecutivos
    if (std::regex_search(localPart, std::regex(R"(\.\.|--|__)")))
        throw std::invalid_argument("ERROR: El nombre no puede contener caracteres especiales consecutivos.");

    // Validación de la longitud del nombre
    if (localPart.size() > 15)
        throw std::invalid_argument("ERROR: El nombre no debe tener más de 15 caracteres.");

    // Contar caracteres alfanuméricos y guiones bajos en el nombre
    int count = 0;
    for (char c : localPart) {
        if (isalnum(c) || c == '_') {
            count++;
        }
    }
    // Si el nombre contiene más de 15 caracteres alfanuméricos o guiones bajos, lanza una excepción
    if (count > 15) {
        throw std::invalid_argument("ERROR: El nombre no debe tener más de 15 caracteres alfanuméricos o guiones bajos.");
    }

    // Validación de caracteres permitidos en el nombre
    if (!std::regex_match(localPart, nf)) // Si el nombre contiene caracteres no permitidos, lanza una excepción
        throw std::invalid_argument("ERROR: El nombre contiene caracteres no permitidos.");

    // Validación del dominio
    // Asegurar que el dominio no comience ni termine con un punto.
    if (domainPart.front() == '.' || domainPart.back() == '.') {
        throw std::invalid_argument("ERROR: El dominio no debe comenzar ni terminar con un punto.");
    }

    // Validaciones adicionales del dominio
    if (domainPart.empty() || !std::regex_match(domainPart, std::regex(R"(^[a-zA-Z]+(\.[a-zA-Z]+)*$)")))
        throw std::invalid_argument("ERROR: El dominio debe contener únicamente letras y puntos, y no puede estar vacío.");
    if (domainPart.size() < 3 || domainPart.size() > 30)
        throw std::invalid_argument("ERROR: El dominio debe tener entre 3 y 30 caracteres sin contar los puntos.");

    // Contar caracteres que no son puntos para asegurar que el dominio tiene entre 3 y 30 caracteres válidos
    int domainCharCount = 0; // Contador de caracteres válidos en el dominio
    for (char c : domainPart) { // Iterar sobre los caracteres del dominio
        if (c != '.') { // Si el caracter no es un punto, incrementar el contador
            domainCharCount++; // Incrementar el contador de caracteres válidos
        }
    }

    // Validar la cantidad de caracteres válidos en el dominio
    if (domainCharCount < 3 || domainCharCount > 30) {
        throw std::invalid_argument("ERROR: El dominio debe tener entre 3 y 30 caracteres, excluyendo los puntos.");
    }

    // Validar que el dominio no contenga segmentos consecutivos separados por un único punto
    if (std::regex_search(domainPart, std::regex(R"(\.\.)")))
        throw std::invalid_argument("ERROR: El dominio no debe contener segmentos consecutivos separados por un único punto.");

    // Si es extensión compuesta, dividir correctamente por puntos
    if (complex == 'Y' || complex == 'y') {
        std::cout << "\nLa extensión es compuesta. Se dividirá en segmentos de 2 a 4 caracteres.\n";
        std::vector<std::string> segments; // Vector para almacenar los segmentos de la extensión
        size_t pos = 0; // Posición para dividir la extensión por puntos
        while ((pos = extensionPart.find('.', pos)) != std::string::npos) { // Buscar puntos en la extensión
            std::string segment = extensionPart.substr(0, pos); // Obtener el segmento antes del punto
            if (!segment.empty() && segment.length() >= 2 && segment.length() <= 4) { // Validar la longitud del segmento
                segments.push_back(segment); // Agregar el segmento al vector
            }
            extensionPart.erase(0, pos + 1); // Eliminar el segmento y el punto de la extensión
        }
        // Añadir el último segmento si cumple con los requisitos
        if (!extensionPart.empty() && extensionPart.length() >= 2 && extensionPart.length() <= 4) { // Validar la longitud del último segmento
            segments.push_back(extensionPart); // Agregar el último segmento al vector
        }

        // Mostrar los segmentos detectados
        for (const auto& seg : segments) { // Iterar sobre los segmentos
            std::cout << "Segmento detectado: '" << seg << "' de longitud " << seg.length() << std::endl; // Mostrar cada segmento
        }

        // Verificar la cantidad de segmentos y su longitud total
        int totalLength = 0; // Longitud total de los segmentos
        for (const auto& seg : segments) { // Iterar sobre los segmentos
            totalLength += seg.length(); // Sumar la longitud de cada segmento
        }
        std::cout << "Longitud total de los segmentos: " << totalLength << std::endl;
        if (segments.size() < 2)
            throw std::invalid_argument("ERROR: Los segmentos de la extension compuesta no pueden ser menor a dos caracteres.");
        if (totalLength < 4 || totalLength > 6) {
            throw std::invalid_argument("ERROR: La suma de los caracteres de la extensión compuesta debe ser entre 4 y 6.");
        }

        std::cout << "________________________________________________________" << std::endl;
        std::cout << "RESULTADO DE LA VALIDACIÓN:" << std::endl;
        std::cout << "________________________________________________________" << std::endl;
        std::cout << "Datos de la dirección de correo electrónico:" << std::endl;
        std::cout << "Nombre: " << localPart << std::endl;
        std::cout << "Dominio: " << domainPart << std::endl;
        std::cout << "Extensión:" << segments[0] << "." << segments[1] << std::endl;
        std::cout << "________________________________________________________" << std::endl;
        std::cout << "\nSu correo es: " << localPart << "@" << domainPart << "." << segments[0] << "." << segments[1] << std::endl;

    } else {
        if (extensionPart.length() < 2)
            throw std::invalid_argument("ERROR: La extensión debe tener al menos 2 caracteres.");
        if (extensionPart.length() > 6)
            throw std::invalid_argument("ERROR: La extensión no puede tener más de 6 caracteres.");
        if (!std::regex_match(extensionPart, ef))
            throw std::invalid_argument("ERROR: La extensión contiene caracteres no permitidos o es numérica.");
        }
        // Si no es compuesta, mostrar los datos de la dirección de correo electrónico 
        // con el nombre, dominio y extensión normal
        if (complex == 'N' || complex == 'n') {
            std::cout << "________________________________________________________" << std::endl;
            std::cout << "RESULTADO DE LA VALIDACIÓN:" << std::endl;
            std::cout << "________________________________________________________" << std::endl;
            std::cout << "Datos de la dirección de correo electrónico:" << std::endl;
            std::cout << "Nombre: " << localPart << std::endl;
            std::cout << "Dominio: " << domainPart << std::endl;
            std::cout << "Extensión: " << extensionPart << std::endl;
            std::cout << "________________________________________________________" << std::endl;
            std::cout << "\nSu correo es: " << localPart << "@" << domainPart << "." << extensionPart << std::endl;
        }

    return true;
}