# Instrucciones de compilación

Este repositorio contiene los programas escritos en C++ vistos en el video de C++ Parte 2.

Decidí añadir dos opciones para compilar y ejecutar los archivos .cpp.

## Compilación y Ejecución Manual // Método 1

Para compilar y ejecutar manualmente cada uno de los programas, se deben seguir estas instrucciones:

```bash
g++ casting1.cpp -o casting1
./casting1

g++ casting2.cpp -o casting2
./casting2

g++ defines1.cpp -o defines1
./defines1

g++ defines2.cpp -o defines2
./defines2

g++ direccionguardado.cpp -o direccionguardado
./direccionguardado

g++ enums1.cpp -o enums1
./enums1

g++ enums2.cpp -o enums2
./enums2

g++ enums3.cpp -o enums3
./enums3

g++ goto.cpp -o goto
./goto

# Para compilar 'sum_main' que depende de sum.cpp, main.cpp y sum.hpp
g++ sum.cpp main.cpp -o sum_main
./sum_main

g++ principal.cpp -o principal
./principal

g++ principal2.cpp -o principal2
./principal2

g++ principal3.cpp -o principal3
./principal3

g++ principal4.cpp -o principal4
./principal4

g++ principal5.cpp -o principal5
./principal5

g++ principal6.cpp -o principal6
./principal6

g++ punteros1.cpp -o punteros1
./punteros1

g++ punteros2.cpp -o punteros2
./punteros2

g++ punteros3.cpp -o punteros3
./punteros3

g++ punteros4.cpp -o punteros4
./punteros4

g++ punteros5.cpp -o punteros5
./punteros5

g++ recursividad.cpp -o recursividad
./recursividad

```



## Compilación // Metodo 2

Para compilar todos los programas, se ejecuta el comando `make` desde la línea de comandos en el directorio donde se encuentra el `Makefile`.

```bash
make
```

## Ejecución // Metodo 2

Una vez que los programas se han compilado, se puede ejecutar cualquier ejecutable utilizando el comando ./ seguido del nombre del programa sin la extensión .cpp. Por ejemplo:

```bash
./holaMundo
```

## Limpieza

Para eliminar todos los archivos ejecutables y otros archivos generados durante la compilación, se puede usar el comando make clean:

```bash
make clean
```

