#include <iostream>

using namespace std;

// Plantilla de clase

// el <class T> se usa para definir el tipo de dato que se le asigna a la clase
// T es el tipo de dato que se le asigna a la variable de la clase
template <class T>
class Number {
private:
    // Variable de tipo T
    T num;

public:
    // Constructor
    Number(T n) : num(n) {}

    // Función para obtener el valor numérico
    T getNum() {
        return num;
    }
};

int main() {
    // Crear objeto con tipo int
    // el <int> es el tipo de dato que se le asigna a la clase
    // el objeto numberInt es una instancia de la clase Number
    // el 7 es el valor que se le asigna a la variable num
    Number<int> numberInt(7);

    // Crear objeto con tipo double
    Number<double> numberDouble(7.7);

    // Mostrar los valores
    cout << "Numero int = " << numberInt.getNum() << endl;
    cout << "Numero double = " << numberDouble.getNum() << endl;

    return 0;
}
