#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> nums{1, 2, 3, 4, 5};

    // inicializa el iterador para apuntar al inicio de nums
    list<int>::iterator itr = nums.begin();

    cout << "Moving forward: " << endl;

    // muestra los elementos en orden directo
    while (itr != nums.end()) {
        cout << *itr << ", ";
        // mueve el iterador una posición hacia adelante
        itr++;
    }

    cout << endl << "Moving backward: " << endl;

    // muestra los elementos en orden inverso
    while (itr != nums.begin()) {
        itr--; // mueve el iterador una posición hacia atrás
        if (itr != nums.end()) {
            cout << *itr << ", ";
        }
    }

    cout << *itr << endl;

    return 0;
}
