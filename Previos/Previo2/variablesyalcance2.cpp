#include <iostream>
using namespace std;

// Variable global:
int g;

int main() {
  // Variables locales:
  int a, b;

  // Inicialización de variables
  a = 10;
  b = 20;
  // Se suman a y b y se almacena el resultado en la variable global g
  g = a + b;

  // Se muestra el valor de g
  cout << g;

  return 0;
}
