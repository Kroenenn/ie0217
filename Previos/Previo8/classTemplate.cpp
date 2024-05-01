#include <iostream>
using namespace std;

// Plantilla de clase con múltiples y parámetros por defecto

// template lo que hace es que se puede definir una clase con varios tipos de datos
// template <class T, class U, class V = char> es la plantilla de la clase
// donde T, U y V son los tipos de datos que se le asignan a las variables de la clase
template <class T, class U, class V = char>
class ClassTemplate {
private:
    T var1;
    U var2;
    V var3;

public:
    // Constructor de la clase plantilla
    //ClassTemplate(T var1, U var2, V var3) es el constructor de la clase
    // donde T, U y V son los tipos de datos que se le asignan a las variables de la clase
    // var1 para T es el tipo de dato que se le asigna a la variable var1
    // var2 para U es el tipo de dato que se le asigna a la variable var2
    // var3 para V es el tipo de dato que se le asigna a la variable var3

    // var1(var1), var2(var2), var3(var3) son los valores que se le asignan a las variables de la clase
    ClassTemplate(T var1, U var2, V var3 = V()) : var1(var1), var2(var2), var3(var3) {}

    // Función para imprimir las variables
    void printVar() {
        cout << "var1=" << var1 << endl;
        cout << "var2=" << var2 << endl;
        cout << "var3=" << var3 << endl;
    }
};

int main() {
    // Crear objeto con tipos int, double y char
    // El tercer parámetro se omite, por lo que se usa el valor por defecto
    // el <int, double> es el tipo de dato que se le asigna a la clase
    // el objeto obj1 es una instancia de la clase ClassTemplate
    ClassTemplate<int, double> obj1(7, 7.7, 'c');
    cout << "Valores de obj1: " << endl;
    obj1.printVar();

    // Crear objeto con tipos int, double y bool
    // Se usa <int, double, bool> para especificar el tipo de datos
    // el objeto obj2 es una instancia de la clase ClassTemplate
    ClassTemplate<int, double, bool> obj2(8, 8.8, false);
    cout << "Valores de obj2: " << endl;
    obj2.printVar();

    return 0;
}
