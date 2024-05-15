/**
 * @file ValidadorEmail.hpp
 * @brief Archivo de cabecera de la clase ValidadorEmail. Posee la clase ValidadorEmail.
 * 
 * Este archivo define la clase ValidadorEmail, que se encarga de validar correos electrónicos.
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
#ifndef VALIDADOREMAIL_HPP
#define VALIDADOREMAIL_HPP

#include <string>

/**
 * @brief Clase ValidadorEmail.
 * 
 * Esta clase se encarga de validar correos electrónicos.
 * 
*/
class ValidadorEmail {
public:
    /**
     * @brief Valida un correo electrónico.
     * 
     * Esta función valida un correo electrónico ingresado por el usuario.
     * @param inputEmail Cadena de caracteres que contiene el correo electrónico a validar.
     * @param complex Carácter que indica si la extensión del correo es compuesta.
     * @return Booleano que indica si el correo es válido.
    */
    static bool validarCorreo(const std::string& inputEmail, char complex);

private:

    static const std::string nombreFormato;
    static const std::string dominioFormato;
    static const std::string extensionFormato;
};

#endif // VALIDADOREMAIL_HPP
