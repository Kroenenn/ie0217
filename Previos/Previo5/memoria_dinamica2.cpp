#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingresar número total de estudiantes: ";
    cin >> num;
    float* ptr;

    // Asignación de memoria para num cantidad de flotantes
    ptr = new float[num]; // El new float[num] asigna un arreglo de flotantes de tamaño num en el heap y devuelve la dirección de memoria.

    cout << "Ingresar promedio (GPA) de los estudiantes." << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Estudiante " << i + 1 << ": ";
        cin >> *(ptr + i); // El operador *(ptr + i) se usa para acceder al i-ésimo elemento del arreglo.
    }

    cout << "\nMostrando GPA de los estudiantes." << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Estudiante " << i + 1 << ": " << *(ptr + i) << endl;
    }

    // Liberar memoria de ptr
    delete[] ptr; // Se libera la memoria asignada en el heap, esto es necesario para evitar fugas de memoria.

    return 0;
}
