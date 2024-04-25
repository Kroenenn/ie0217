# Instrucciones de compilación

Este documento proporciona detalles sobre el programa desarrollado en el Laboratorio 5. El código fuente está dividido en tres archivos principales que gestionan una colección de libros en una biblioteca: main.cpp, Biblioteca.cpp, y Libro.cpp. Estos archivos contienen las definiciones de las clases y las implementaciones necesarias para agregar, ordenar, buscar y mostrar libros en la consola.

- `main.cpp`: 
  - Contiene la función principal (`main`) del programa.
  - Se encarga de la creación de una instancia de la clase `Biblioteca`, añade libros a esta, ordena y muestra los libros, y realiza búsquedas por título.

- `Biblioteca.cpp`:
  - Se implementan los métodos de la clase `Biblioteca`.
  - Incluye funciones para agregar libros al vector de `Libro`, ordenar estos libros por año de publicación, mostrar los libros en la consola, y buscar libros por título.

- `Biblioteca.hpp`:
  - Archivo de encabezado para la clase `Biblioteca`.
  - Declara la estructura de la clase `Biblioteca` y sus métodos asociados.

- `Libro.cpp`:
  - Se implementan los métodos de la clase `Libro`.
  - Define el constructor y el operador de comparación `<` para facilitar la ordenación de los libros por año de publicación.

- `Libro.hpp`:
  - Archivo de encabezado para la clase `Libro`.
  - Declara la estructura de la clase `Libro` y sus métodos, incluyendo el constructor y el operador de comparación `<`.


## Compilación y Ejecución Manual

Para compilar y ejecutar manualmente, se deben seguir estas instrucciones:

```bash
g++ -o programa.exe main.cpp Biblioteca.cpp Libro.cpp
```

Y para correr el programa:

```bash
./programa.exe
```