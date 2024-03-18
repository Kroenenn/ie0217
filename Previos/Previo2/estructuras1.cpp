#include <iostream>
#include <cstring> // Se necesita para la función strcpy

using namespace std;

// Definición de la estructura Books
struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main() {
    struct Books Book1; // Declara Book1 de tipo Books
    struct Books Book2; // Declara Book2 de tipo Books

    // Especificaciones del libro 1
    strcpy(Book1.title, "Learn C++ Programming"); // Título
    strcpy(Book1.author, "Chand Miyan"); // Autor
    strcpy(Book1.subject, "C++ Programming"); // Tema
    Book1.book_id = 6495407; // ID del libro

    // Especificaciones del libro 2
    strcpy(Book2.title, "Telecom Billing"); // Título
    strcpy(Book2.author, "Yakit Singha"); // Autor
    strcpy(Book2.subject, "Telecom"); // Tema
    Book2.book_id = 6495700; // ID del libro

    // Imprime la información de Book1
    cout << "Book 1 title : " << Book1.title << endl;
    cout << "Book 1 author : " << Book1.author << endl;
    cout << "Book 1 subject : " << Book1.subject << endl;
    cout << "Book 1 id : " << Book1.book_id << endl;

    // Imprime la información de Book2
    cout << "Book 2 title : " << Book2.title << endl;
    cout << "Book 2 author : " << Book2.author << endl;
    cout << "Book 2 subject : " << Book2.subject << endl;
    cout << "Book 2 id : " << Book2.book_id << endl;

    return 0;
}
