#include <iostream>
using namespace std;

void test() {
    // var es una variable estática
    static int var = 0;
    ++var; // Incrementa var en 1

    cout << var << endl; // Imprime el valor de var
}

int main() {
    test(); // Llama a la función test por primera vez
    test(); // Llama a la función test por segunda vez

    return 0;
}
