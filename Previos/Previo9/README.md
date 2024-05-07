# Programas del Previo 9

Clase 9: C++ - Gestión de Bibliotecas, Estudiantes y Uso de Expresiones Regulares

Para la utilización de los programas, se deben correr los comandos en la terminal desde la carpeta `./Previo9`

| Función                          | Carpeta                  | Archivo(s)                            | Cambiar Directorio        | Compilar                                | Ejecutar                                  |
| -------------------------------- | ------------------------ | ------------------------------------- | ------------------------- | --------------------------------------- | ---------------------------------------- |
| Gestión de Bibliotecas           | `biblioteca`             | `biblioteca.cpp`, `libro.cpp`, `main.cpp` | `cd biblioteca`           | `make`                                  | `./gestion_biblioteca.exe`               |
| Manejo de Estudiantes            | `estudiante`             | `estudiante.cpp`, `main.cpp`         | `cd estudiante`           | `make`                                  | `./gestion_estudiantes.exe`              |
| Uso de Expresiones Regulares     | (directorio principal)   | `regex.cpp`                           | `(directorio principal)`  | `g++ -o regex.exe regex.cpp`            | `./regex.exe`                            |


## Descripción de Archivos

### Biblioteca
- `biblioteca.cpp`, `libro.cpp`, `main.cpp`: Conjunto de archivos que manejan la lógica para crear y gestionar una biblioteca que almacena información sobre libros.

### Estudiante
- `estudiante.cpp`, `main.cpp`: Estos archivos contienen clases y lógica para manejar información de estudiantes, incluyendo nombre y edad.

### regex.cpp
- `regex.cpp`: Ejemplo de cómo utilizar expresiones regulares en C++ para buscar coincidencias dentro de cadenas de texto. Demuestra el uso de la biblioteca `<regex>` para evaluar si diferentes cadenas contienen un patrón específico.

## Compilación // Método Makefile

Para compilar los programas de cada subproyecto, se navega a la carpeta correspondiente y se ejecuta el comando "make".

```bash
cd <carpeta_del_proyecto>

make
```

## Ejecución // Método Makefile

Una vez que los programas se han compilado, se puede ejecutar cualquier ejecutable utilizando el comando ./ seguido del nombre del programa sin la extensión .cpp. Por ejemplo:

```bash
./<nombre_ejecutable>.exe
```

## Limpieza

Para eliminar todos los archivos ejecutables y otros archivos generados durante la compilación, se puede usar el comando make clean:

```bash
cd <carpeta_del_proyecto>

make clean
```

---
