#include <iostream>
#include <set>
using namespace std;

int main() {
    // inicializa un conjunto de tipo int
    set<int> numbers = {1, 100, 10, 70, 100};

    // imprime el conjunto
    cout << "Numbers are: ";
    for(auto &num: numbers) { // auto es para que el compilador infiera el tipo de dato, el & es para que sea por referencia
        cout << num << " ";
    }

    return 0;
}
