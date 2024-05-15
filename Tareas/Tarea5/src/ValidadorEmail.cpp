

#include "ValidadorEmail.hpp"
#include <regex>
#include <vector>


const std::string ValidadorEmail::nombreFormato = R"(^[a-zA-Z0-9._-]*$)"; // Solo para chequeo de caracteres permitidos
const std::string ValidadorEmail::dominioFormato = R"(^[a-zA-Z]+(\.[a-zA-Z]+)*$)"; // Dominio debe tener al menos un punto
const std::string ValidadorEmail::extensionFormato = R"(^[a-zA-Z]{2,6}$)"; // Extensión debe tener entre 2 y 6 letras


bool ValidadorEmail::validarCorreo(const std::string& inputEmail, char complex) {

// regex tiene un constructor que recibe un string con la expresión regular a utilizar
    std::regex nf(nombreFormato); // nf significa nombreFormato, se usa asi para no confundir con el nombre de la variable nombreFormato
    std::regex df(dominioFormato); // df significa dominioFormato, se usa asi para no confundir con el nombre de la variable dominioFormato 
    std::regex ef(extensionFormato); // ef significa extensionFormato, se usa asi para no confundir con el nombre de la variable extensionFormato


    return true;
}