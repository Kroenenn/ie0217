#include <iostream>
#include <vector>
using namespace std;

int main() {
    // crea un vector
    vector<int> vec{1, 2, 3, 4};

    // crea iteradores para apuntar al primer y al último elemento
    vector<int>::iterator itr_first = vec.begin();
    vector<int>::iterator itr_last = vec.end() - 1; // se usa - 1 para apuntar al último elemento, ya que si no se usa - 1, se apuntaría a una posición después del último elemento

    // muestra los elementos del vector
    cout << "First Element: " << *itr_first << endl;
    cout << "Second Element: " << itr_first[1] << endl;

    cout << "Second Last Element: " << *(itr_last - 1) << endl;
    cout << "Last Element: " << *itr_last << endl;

    return 0;
}
