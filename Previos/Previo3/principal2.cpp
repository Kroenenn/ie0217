#include <iostream>
using namespace std;

#define MI_PRIMER_DIFINE 925



enum seasons {
    spring = 34,
    summer = 4,
    autumn = 9,
    winter = 32
};

enum enuncito {
    carro = 40,
    casa,
    arbol,
    patio
};


int main() {

    seasons s;
    s = summer;
    //s = winter;
    cout << "Summer = " << s << endl;
    cout << "MI_PRIMER_DIFINE = " << MI_PRIMER_DIFINE << endl;

    cout << "arb = " << arbol << endl;
    return 0;
}
