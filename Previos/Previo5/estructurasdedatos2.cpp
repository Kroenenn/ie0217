// Implementación de lista enlazada en C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Crear un nodo
class Node {
public:
    int value;
    Node* next; // Puntero al siguiente nodo
};

int main() {
    Node* head; // Puntero al primer nodo
    Node* one = NULL; // Puntero a un nodo
    Node* two = NULL; // Puntero a un nodo
    Node* three = NULL; // Puntero a un nodo

    // Asignar 3 nodos en el montón (heap)
    one = new Node();
    two = new Node();
    three = new Node();

    // Asignar valores de value
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Conectar nodos
    one->next = two;
    two->next = three;
    three->next = NULL;

    // Imprimir el valor de la lista enlazada
    head = one;
    while (head != NULL) {
        cout << head->value;
        head = head->next;
    }
}
