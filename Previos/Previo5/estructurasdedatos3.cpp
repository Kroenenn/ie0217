// Recorrido de árbol en C++

#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left, *right; // Punteros a los nodos izquierdo y derecho
    Node(int data) { // Constructor
        this->data = data; // Inicializar el nodo con el valor pasado
        left = right = NULL; // Inicializar los punteros a NULL
    }
};

// Recorrido en preorden
void preorderTraversal(struct Node* node) { // Recibe un puntero a un nodo
    if (node == NULL) 
        return;
    cout << node->data << " -> "; // Imprimir el valor del nodo
    preorderTraversal(node->left); // Llamada recursiva al nodo izquierdo
    preorderTraversal(node->right); // Llamada recursiva al nodo derecho
}

// Recorrido en postorden
void postorderTraversal(struct Node* node) { // Recibe un puntero a un nodo
    if (node == NULL)
        return;
    postorderTraversal(node->left); // Llamada recursiva al nodo izquierdo
    postorderTraversal(node->right); // Llamada recursiva al nodo derecho
    cout << node->data << " -> ";
}

// Recorrido en inorden
void inorderTraversal(struct Node* node) { 
    if (node == NULL)
        return;
    inorderTraversal(node->left); // Llamada recursiva al nodo izquierdo
    cout << node->data << " -> ";
    inorderTraversal(node->right); // Llamada recursiva al nodo derecho
}

int main() {
    struct Node* root = new Node(1); // Crear un nodo con valor 1, el new asigna memoria en el heap
    root->left = new Node(12); // Crear un nodo con valor 12 y asignarlo al nodo izquierdo de root
    root->right = new Node(9); // Crear un nodo con valor 9 y asignarlo al nodo derecho de root
    root->left->left = new Node(5); // Crear un nodo con valor 5 y asignarlo al nodo izquierdo del nodo izquierdo de root
    root->left->right = new Node(6); // Crear un nodo con valor 6 y asignarlo al nodo derecho del nodo izquierdo de root

    cout << "Recorrido inorden: ";
    inorderTraversal(root);

    cout << "\nRecorrido preorden: ";
    preorderTraversal(root);

    cout << "\nRecorrido postorden: ";
    postorderTraversal(root);
}

// La diferencia entre los tres tipos de recorridos es el orden en que se visitan los nodos. 
// En el recorrido inorden, primero se visita el nodo izquierdo, luego el nodo actual y finalmente el nodo derecho. 
// En el recorrido preorden, primero se visita el nodo actual, luego el nodo izquierdo y finalmente el nodo derecho. 
// En el recorrido postorden, primero se visita el nodo izquierdo, luego el nodo derecho y finalmente el nodo actual.