#include <iostream>
using namespace std;

// Estructura para datos personales
struct Person {
    char name[50]; // Almacena el nombre
    int age;       // Almacena la edad
    float salary;  // Almacena el salario
};

int main() {
    Person p1; // Crea una instancia de Person

    // Solicita y guarda el nombre completo
    cout << "Enter Full name: ";
    cin.get(p1.name, 50); // Lee hasta 50 caracteres y lo guarda en p1.name
    
    // Solicita y guarda la edad
    cout << "Enter age: ";
    cin >> p1.age; // Lee un entero y lo guarda en p1.age
    
    // Solicita y guarda el salario
    cout << "Enter salary: ";
    cin >> p1.salary; // Lee un flotante y lo guarda en p1.salary

    // Muestra la información guardada
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary << endl;

    return 0;
}
