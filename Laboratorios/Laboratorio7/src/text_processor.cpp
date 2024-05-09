#include "text_processor.hpp"
#include <fstream>
#include <regex>

//este es el constructor de la clase TextProcessor
TextProcessor::TextProcessor(const std::string& input_filename, const std::string& output_filename)
    : input_filename(input_filename), output_filename(output_filename){}


// este metodo reemplaza el patron de busqueda por el string de reemplazo
// se utiliza const para que no se modifiquen los valores de search_pattern y replace_string
// se utiliza & para pasar los valores por referencia
void TextProcessor::replace(const std::string& search_pattern, const std::string& replace_string){

    std::ifstream input_file(input_filename);
    std::ofstream output_file(output_filename);
    std::string line;

// regex es para buscar el patron de busqueda en el archivo
    std::regex pattern(search_pattern);

    if(input_file && output_file){ // esto es para verificar que los archivos se abrieron correctamente
        while(getline(input_file,line)){ // esto es para leer el archivo linea por linea
            std::string replaced = std::regex_replace(line, pattern, replace_string); // esto es para reemplazar el patron de busqueda por el string de reemplazo
            output_file << replaced << "\n"; // esto es para escribir la linea reemplazada en el archivo de salida
        }
    }
}