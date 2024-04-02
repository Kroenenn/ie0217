# Instrucciones de compilación

Este repositorio contiene los programas escritos en C++ vistos en el video de C++ Objetos.

Decidí añadir dos opciones para compilar y ejecutar los archivos .cpp.

## Compilación y Ejecución Manual // Método 1

Para compilar y ejecutar manualmente cada uno de los programas individuales, se deben seguir estas instrucciones:

```bash
g++ -o <nombre_archivo>.exe <nombre_archivo>.cpp

./<nombre_archivo>.exe
```

En el caso de los archivos a continuación, como deben compilarse en conjunto, se deben correr estos comandos:

```bash
g++ -o persona.exe persona.cpp main_persona.cpp

./persona.exe
```

Y

```bash
g++ -o ejercicio_individual.exe class_student.cpp funciones_student.cpp main_student.cpp

./ejercicio_individual.exe
```

## Compilación // Metodo 2

Para compilar todos los programas, se ejecuta el comando "make" desde la línea de comandos en el directorio donde se encuentra el "Makefile".

```bash
make
```

## Ejecución // Metodo 2

Una vez que los programas se han compilado, se puede ejecutar cualquier ejecutable utilizando el comando ./ seguido del nombre del programa sin la extensión .cpp. Por ejemplo:

```bash
./holaMundo.exe
```

## Limpieza

Para eliminar todos los archivos ejecutables y otros archivos generados durante la compilación, se puede usar el comando make clean:

```bash
make clean
```

