#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>

// Se utiliza typename en lugar de class para indicar que T es un tipo de dato

template <typename T>
class Statistics {
public:
    // Se utiliza const std::vector<T>& data para indicar que data es una referencia constante a un vector de tipo T
    // Se utiliza const para indicar que data no se puede modificar
    // Se utiliza & para indicar que data es una referencia
    // data(data) es un inicializador de miembro que inicializa el atributo data con el valor de data
    Statistics(const std::vector<T>& data) : data(data) {
        if (data.empty()) {
            throw std::invalid_argument("La lista de datos debe contener elementos.");
        }
    }

    double mean() const {
        T sum = 0;
        for (const T& value : data) {
            sum += value;
        }
        // static_cast<double> convierte el resultado a double
        // static_cast lo que hace es convertir el tipo de dato de una variable a otro tipo de dato
        return static_cast<double>(sum) / data.size();
    }

    double standardDeviation() const {
        double meanValue = mean();
        double sumSquares = 0;

        // const T& value : data es un bucle for que recorre todos los elementos de data
        // y los almacena en value
        // Se usa const T& para que no se modifiquen los valores de data
        // T es el tipo de dato que se almacena en data
        // T& es una referencia a un objeto de tipo T
        for (const T& value : data) {
            sumSquares += (value - meanValue) * (value - meanValue);
        }
        return std::sqrt(sumSquares / data.size());
    }

private:
    // std::vector<T> data; es un vector que almacena elementos de tipo T
    // SE hace en privado para que no se pueda acceder a data desde fuera de la clase
    std::vector<T> data;
};

int main() {
    try {
        std::vector<int> intData = {1, 2, 3, 4, 5};
        Statistics<int> statsInt(intData);

        // Se utiliza el formato statsInt.mean() para acceder a la función mean de la clase Statistics
        // Si se utiliza statsInt.mean se accede a la direccion de un miembro variable mean de la clase Statistics
        // lo cual es incorrecto ya que se debe acceder a la función mean 
        std::cout << "Media de intData: " << statsInt.mean() << std::endl;
        std::cout << "Desviación estándar de intData: " << statsInt.standardDeviation() << std::endl;


        std::vector<double> doubleData = {1.5, 2.5, 3.5, 4.5, 5.5};
        Statistics<double> statsDouble(doubleData);

        std::cout << "Media de doubleData: " << statsDouble.mean() << std::endl;
        std::cout << "Desviación estándar de doubleData: " << statsDouble.standardDeviation() << std::endl;

        // Se espera que se lance una excepción, la que se define en el constructor de Statistics
        std::vector<int> emptyData;
        Statistics<int> statsEmpty(emptyData);

    // Se debe utilizar const std::invalid_argument& e para capturar la excepción
    //
    } catch (const std::invalid_argument& e) {
        std::cerr << "Excepcion encontrada: " << e.what() << std::endl;
    }

    return 0;
}