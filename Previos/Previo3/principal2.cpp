#include <iostream>
using namespace std;

// Este define es para probar el uso de defines
#define MI_PRIMER_DIFINE 925


// Esta es una enumeracion de estaciones
enum seasons {
    spring = 34,
    summer = 4,
    autumn = 9,
    winter = 32
};

// Esta es una enumeracion de enuncitos, se usa para probar el uso de enumeraciones
enum enuncito {
    carro = 40,
    casa,
    arbol,
    patio
};

// La funcion main se encarga de imprimir el valor de la variable s
// y de probar el uso de defines 
int main() {

    seasons s;
    s = summer;
    //s = winter;
    cout << "Summer = " << s << endl;
    cout << "MI_PRIMER_DIFINE = " << MI_PRIMER_DIFINE << endl;

    cout << "arb = " << arbol << endl;
    return 0;
}
