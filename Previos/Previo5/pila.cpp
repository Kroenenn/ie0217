// Implementación de una pila en C++

#include <iostream>
#include <cstdlib>

#define MAX 10
int size = 0;

// Creando una pila
struct stack {
    int items[MAX]; // Elementos de la pila
    int top; // Índice del elemento superior
};
typedef struct stack st; // Definir st como un alias de struct stack

// Crear una pila vacía
void createEmptyStack(st *s) { // Se usa st *s para pasar la dirección de memoria de la pila a la función.
    s->top = -1; // Inicializar el índice del elemento superior como -1
}

// Verificar si la pila está llena
int isfull(st *s) { // Se usa st *s para pasar la dirección de memoria de la pila a la función.
    if (s->top == MAX - 1) // Si el índice del elemento superior es igual a MAX - 1, la pila está llena.
        return 1;
    else
        return 0;
}

// Verificar si la pila está vacía
int isempty(st *s) { // Se usa st *s para pasar la dirección de memoria de la pila a la función.
    if (s->top == -1) // Si el índice del elemento superior es igual a -1, la pila está vacía.
        return 1;
    else
        return 0;
}

// Añadir elementos a la pila
void push(st *s, int newItem) { // Se usa st *s para pasar la dirección de memoria de la pila a la función.
                                // int newItem se usa para pasar el nuevo elemento a añadir a la pila.
    if (isfull(s)) { // Si la pila está llena, se imprime un mensaje.
        std::cout << "PILA LLENA";
    } else { // Si la pila no está llena, se añade el nuevo elemento a la pila.
        s->top++; // Se incrementa el índice del elemento superior.
        s->items[s->top] = newItem; // Se añade el nuevo elemento a la pila.
        size++; // Se incrementa el tamaño de la pila.
    }
}

// Eliminar elemento de la pila
void pop(st *s) { // Se usa st *s para pasar la dirección de memoria de la pila a la función.
    if (isempty(s)) {
        std::cout << "\nPILA VACÍA\n";
    } else {
        std::cout << "Elemento retirado: " << s->items[s->top];
        s->top--; // Se decrementa el índice del elemento superior.
        size--; // Se decrementa el tamaño de la pila.
    } 
    std::cout << std::endl;
}

// Imprimir elementos de la pila
void printStack(st *s) {
    std::cout << "Pila: ";
    for (int i = 0; i < size; i++) {
        std::cout << s->items[i] << " ";
    }
    std::cout << std::endl;
}

// Código principal
int main() {
    st *s = (st *)malloc(sizeof(st)); // Se asigna memoria en el heap para la pila.
                                      // Se usa (st *) para convertir el puntero void* devuelto por malloc a un puntero de tipo st.
                                      // malloc recibe un argumento que es el tamaño en bytes de la memoria a asignar.

    createEmptyStack(s);

    push(s, 1); 
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printStack(s);

    pop(s);

    std::cout << "\nDespués de retirar:\n";
    printStack(s);

    return 0;
}
