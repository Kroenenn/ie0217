#include <iostream>
using namespace std;


// Esta es una enumeracion de estaciones
enum seasons {
    spring = 34,
    summer = 4,
    autumn = 9,
    winter = 32
};

// Esta es la función principal del programa
// Se encarga de imprimir el valor de la variable s
int main() {

    seasons s;
    s = summer;
    //s = winter;
    cout << "Summer = " << s << endl;
    return 0;
}
