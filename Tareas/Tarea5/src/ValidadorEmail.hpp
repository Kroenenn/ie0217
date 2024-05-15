
#ifndef VALIDADOREMAIL_HPP
#define VALIDADOREMAIL_HPP

#include <string>

class ValidadorEmail {
public:

    static bool validarCorreo(const std::string& inputEmail, char complex);

private:

    static const std::string nombreFormato;
    static const std::string dominioFormato;
    static const std::string extensionFormato;
};

#endif // VALIDADOREMAIL_HPP
