#include <iostream>
#include <regex>

int main() {
    //regex es un objeto que representa una expresión regular
    //En este caso la expresión regular es (my|your) regex
    //Esto significa que la expresión regular acepta "my regex" o "your regex"
    auto const regex = std::regex("(my|your) regex");
    
    auto const myText = std::string("A piece of text that contains my regex.");
    // regex_search es una función que busca la expresión regular en el texto
    // y devuelve true si la encuentra y false si no.
    bool const myTextContainsRegex = std::regex_search(myText, regex);
    
    auto const yourText = std::string("A piece of text that contains your regex.");
    bool const yourTextContainsRegex = std::regex_search(yourText, regex);
    
    auto const theirText = std::string("A piece of text that contains their regex.");
    bool const theirTextContainsRegex = std::regex_search(theirText, regex);

    std::cout << std::boolalpha
              << myTextContainsRegex << '\n'
              << yourTextContainsRegex << '\n'
              << theirTextContainsRegex << '\n';
}
