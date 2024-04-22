#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // inicializa un unordered_set de tipo int
    // unordered_set es un conjunto que no tiene orden
    unordered_set<int> numbers = {1, 100, 10, 70, 100};

    // imprime el conjunto
    cout << "Numbers are: ";
    for(auto &num: numbers) { // auto es para que el compilador infiera el tipo de dato, el & es para que sea por referencia
        cout << num << " ";
    }

    return 0;
}
