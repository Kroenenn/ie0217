#include <iostream>
using namespace std;

class Student {
private:
    int age;

public:
    // Constructor que inicializa la edad a 12
    Student() : age(12) {}

    // Método para obtener la edad
    void getAge() {
        cout << "Edad = " << age << endl;
    }
};

int main() {
    // Declarar dinámicamente un objeto Estudiante
    Student* ptr = new Student();

    // Llamar al método getAge()
    ptr->getAge(); // ptr->getAge() se encarga de llamar al método getAge() del objeto apuntado por ptr.

    // Liberar memoria asignada a ptr
    delete ptr;

    return 0;
}
