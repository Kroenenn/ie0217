// ejemplo de algoritmo de ordenamiento
#include <iostream>  // std::cout
#include <algorithm> // std::sort
#include <vector>    // std::vector

bool myfunction (int i,int j) { return (i<j); } // Esto es para usar una función como comparador

struct myclass {
  bool operator() (int i,int j) { return (i<j); }  // Esto es para usar un objeto como comparador, se utiliza una estructura con un operador sobrecargado
} myobject;

int main () {
  int myints[] = {32,71,12,45,26,80,53,33}; // 32 71 12 45 26 80 53 33
  std::vector<int> myvector (myints, myints+8); // Esto es para crear un vector con los valores de myints

  // usando comparación por defecto (operador <):
  std::sort (myvector.begin(), myvector.end()); // (12 32 45 71)26 80 53 33

  // usando función como comparador
  std::sort (myvector.begin()+4, myvector.end(), myfunction); // 12 32 45 71(26 33 53 80)

  // usando objeto como comparador
  std::sort (myvector.begin(), myvector.end(), myobject); // (12 26 32 33 45 53 71 80)

  // imprimir contenido:
  std::cout << "myvector contiene:";
  // Esto es para imprimir el contenido del vector
  // Se utiliza un iterador para recorrer el vector
  // it!=myvector.end() es para recorrer el vector hasta el final
  // ++it es para incrementar el iterador
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
