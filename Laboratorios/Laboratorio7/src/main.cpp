#include <iostream>
#include "text_processor.hpp"


// Se usa la clase TextProcessor para reemplazar el patron de busqueda por el string de reemplazo
// argc es la cantidad de argumentos que se pasan al programa
// argv es un arreglo de strings que contiene los argumentos que se pasan al programa
int main(int argc, char* argv[]){
    if(argc < 5){
        std::cerr << "Usage: " << argv[0] << "-f <filename> -o <outputfile> -search <search_pattern> -replace <replace_string>\n";
    }

    std::string filename = argv[2]; // esto es para obtener el nombre del archivo de entrada
    std::string outputfile = argv[4]; // esto es para obtener el nombre del archivo de salida
    std::string search_pattern = argv[6]; // esto es para obtener el patron de busqueda
    std::string replace_string = argv[8]; // esto es para obtener el string de reemplazo

    TextProcessor processor(filename, outputfile); // se crea un objeto de la clase TextProcessor

    processor.replace(search_pattern, replace_string); // se llama al metodo replace de la clase TextProcessor

    return 0;

}