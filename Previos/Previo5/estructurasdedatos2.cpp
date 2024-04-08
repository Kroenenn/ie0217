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
    one->value = 1; // Esto lo ue hace es asignar el valor 1 al campo value del nodo one.
    two->value = 2; // Esto lo ue hace es asignar el valor 2 al campo value del nodo two.
    three->value = 3; // Esto lo ue hace es asignar el valor 3 al campo value del nodo three.

    // Conectar nodos
    one->next = two; // Esto lo que hace es asignar el puntero two al campo next del nodo one.
    two->next = three; // Esto lo que hace es asignar el puntero three al campo next del nodo two.
    three->next = NULL; // Esto lo que hace es asignar NULL al campo next del nodo three.

    // Imprimir el valor de la lista enlazada
    head = one; // Esto lo que hace es asignar el puntero one al puntero head.
    while (head != NULL) { // Esto lo que hace es recorrer la lista enlazada e imprimir el valor de cada nodo.
        cout << head->value; // Imprimir el valor del nodo
        head = head->next; // Asignar el siguiente nodo a head
    }
}
