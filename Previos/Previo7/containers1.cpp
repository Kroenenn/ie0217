#include <iostream>
#include <vector>
using namespace std;

int main() {
    // inicializa un vector de tipo int
    vector<int> numbers = {1, 100, 10, 70, 100};

    // imprime el vector
    cout << "Numbers are: ";
    for(auto &num: numbers) {
        cout << num << " ";
    }

    return 0;
}
