// Implementación de Cola en C++

#include <iostream>
#define SIZE 5
using namespace std;

class Queue {
private:
    int items[SIZE], front, rear; // front y rear son índices para el frente y la parte trasera de la cola
                                  // items[] almacena los elementos en la cola

public:
    Queue() { // Constructor
        front = -1; // Inicializar frente
        rear = -1; // Inicializar trasero
    }

    bool isFull() { // Comprueba si la cola está llena
        if (front == 0 && rear == SIZE - 1) { // Si el frente es 0 y la parte trasera es SIZE-1, la cola está llena
            return true;
        }
        return false;
    }

    bool isEmpty() { // Comprueba si la cola está vacía
        if (front == -1) // Si el frente es -1, la cola está vacía
            return true;
        else
            return false;
    }

    void enQueue(int element) { // Añadir elementos a la cola
        if (isFull()) {
            cout << "Cola llena";
        } else {
            if (front == -1) front = 0; // Si la cola está vacía, el frente se establece en 0
            rear++; // Incrementar el índice trasero
            items[rear] = element; // Añadir el elemento dado al índice trasero
            cout << endl << "Insertado " << element << endl;
        }
    }

    int deQueue() {
        int element; // element es el elemento que se eliminará de la cola
        if (isEmpty()) { // Si la cola está vacía, devolver -1
            cout << "Cola vacía" << endl;
            return -1;
        } else {
            element = items[front]; // El elemento en el frente de la cola se asigna a element
            if (front >= rear) { // Si el frente >= trasero, la cola tiene solo un elemento, por lo que reseteamos la cola después de eliminarlo
                // Q solo tiene un elemento, entonces reseteamos la cola después de eliminarlo.
                front = -1; // Se utiliza -1 para indicar que la cola está vacía
                rear = -1; // Se utiliza -1 para indicar que la cola está vacía
            } else {
                front++; // Incrementar el índice del frente para eliminar el primer elemento
            }
            cout << endl << "Eliminado -> " << element << endl;
            return element;
        }
    }

    // Función para mostrar elementos de la Cola
    void display() {
        int i;
        if (isEmpty()) {
            cout << "Cola vacía" << endl;
        } else {
            cout << endl << "Índice del frente -> " << front << endl
                 << "Items -> ";
            for (i = front; i <= rear; i++) // Imprimir todos los elementos de la cola
                cout << items[i] << " ";
            cout << endl << "Índice trasero -> " << rear << endl;
        }
    }
};

int main() {
    Queue q;

    // deQueue no es posible en cola vacía
    q.deQueue();

    // enQueue 5 elementos
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    // 6to elemento no se puede añadir porque la cola está llena
    q.enQueue(6);

    q.display();

    // deQueue elimina el elemento ingresado primero i.e. 1
    q.deQueue();

    // Ahora tenemos solo 4 elementos
    q.display();

    return 0;
}
