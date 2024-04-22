#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> nums{1, 2, 3, 4};

    // inicializa un iterador para apuntar
    // al inicio de una lista enlazada simple
    forward_list<int>::iterator itr = nums.begin();

    while (itr != nums.end()) {
        // accede al valor del iterador usando el operador de indirección
        int original_value = *itr;

        // asigna un nuevo valor usando el operador de indirección
        *itr = original_value * 2;

        // avanza el iterador a la siguiente posición
        itr++;
    }

    // muestra el contenido de nums
    for (int num: nums) {
        cout << num << ", ";
    }

    return 0;
}
