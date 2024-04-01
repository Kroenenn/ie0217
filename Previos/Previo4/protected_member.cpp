#include <iostream>
#include <string>

/**
 * @file protected_members.cpp
 * @brief Demostración del uso de miembros protegidos y herencia.
 */

using namespace std;

/**
 * @class Animal
 * @brief Clase base que representa un animal genérico.
 *
 * La clase Animal define comportamientos básicos y características como color y tipo.
 */
class Animal {
private:
    string color; ///< Color del animal.

protected:
    string type; ///< Tipo de animal.

public:
    /**
     * @brief Hace que el animal corra.
     */
    void run() {
        cout << "I can run -- BASE!" << endl;
    }

    /**
     * @brief Hace que el animal coma.
     */
    void eat() {
        cout << "I can eat!" << endl;
    }

    /**
     * @brief Hace que el animal duerma.
     */
    void sleep() {
        cout << "I can sleep!" << endl;
    }

    /**
     * @brief Establece el color del animal.
     * @param clr Nuevo color del animal.
     */
    void setColor(string clr) {
        color = clr;
    }

    /**
     * @brief Obtiene el color del animal.
     * @return Color del animal.
     */
    string getColor() {
        return color;
    }
};

/**
 * @class Dog
 * @brief Clase derivada que representa un perro, heredando de Animal.
 *
 * La clase Dog extiende la clase Animal con comportamientos y características específicos de un perro.
 */
class Dog : public Animal {
public:
    /**
     * @brief Hace que el perro corra, sobreescribiendo la acción de Animal.
     */
    void run() {
        cout << "I can run -- DERIVED!" << endl;
    }

    /**
     * @brief Establece el tipo de perro.
     * @param tp Tipo de perro.
     */
    void setType(string tp) {
        type = tp;
    }

    /**
     * @brief Muestra la información del perro.
     * @param c Color del perro.
     */
    void displayInfo(string c) {
        cout << "I am a " << type << endl;
        cout << "My color is " << c << endl;
    }

    /**
     * @brief Hace que el perro ladre.
     */
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

/**
 * @brief Punto de entrada principal del programa.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 */
int main() {
    Dog dog1; // Crea una instancia de Dog.

    // Llama a métodos de la clase base.
    dog1.run();
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    // Llama a métodos de la clase derivada.
    dog1.bark();
    dog1.setType("Doberman");
    dog1.displayInfo(dog1.getColor());

    return 0;
}
