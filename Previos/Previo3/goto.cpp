#include <iostream>
using namespace std;

int main() {
    float num, average, sum = 0.0; // Inicializa las variables
    int i, n; // Variables de control

    cout << "Maximum number of inputs: "; // Pide al usuario el número máximo de entradas
    cin >> n;

    for(i = 1; i <= n; ++i) { // Bucle que se ejecuta n veces
        cout << "Enter n" << i << ": "; // Pide al usuario que introduzca el i-ésimo número
        cin >> num; // Guarda el número introducido

        if(num < 0.0) { // Si el número es negativo, se salta al etiquetado 'jump'
            goto jump; // Uso de goto para saltar al cálculo del promedio
        }
        sum += num; // Suma el número introducido al acumulador 'sum'
    }

jump: // Etiqueta para saltar al cálculo del promedio
    average = sum / (i - 1); // Calcula el promedio de los números introducidos
    cout << "\nAverage = " << average; // Muestra el promedio

    return 0;
}
