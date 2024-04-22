#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> languages = {"Python", "C++", "Java"};

    // crea un iterador para un vector de strings
    vector<string>::iterator itr;

    // itera sobre todos los elementos
    for (itr = languages.begin(); itr != languages.end(); itr++) {
        cout << *itr << ", ";
    }

    return 0;
}
