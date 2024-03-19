# Instrucciones de compilación

Este repositorio contiene los programas escritos en C++ vistos en el video de C++ Parte 1.

Decidí añadir dos opciones para compilar y ejecutar los archivos .cpp.

## Compilación y Ejecución Manual // Metodo 1


Para compilar y ejecutar manualmente cada uno de los programas, se deben seguir estas instrucciones:

```bash
g++ anidacionesdesentencias.cpp -o anidacionesdesentencias
./anidacionesdesentencias

g++ argumentosenfuncion.cpp -o argumentosenfuncion
./argumentosenfuncion

g++ argumentosenmain.cpp -o argumentosenmain
./argumentosenmain

g++ do_while.cpp -o do_while
./do_while

g++ estructuras1.cpp -o estructuras1
./estructuras1

g++ estructuras2.cpp -o estructuras2
./estructuras2

g++ for.cpp -o for
./for

g++ for_rango.cpp -o for_rango
./for_rango

g++ funcionpredefinida.cpp -o funcionpredefinida
./funcionpredefinida

g++ holaMundo.cpp -o holaMundo
./holaMundo

g++ holaMundo_2.cpp -o holaMundo_2
./holaMundo_2

g++ holaMundo_3.cpp -o holaMundo_3
./holaMundo_3

g++ return.cpp -o return
./return

g++ sobrecarga1.cpp -o sobrecarga1
./sobrecarga1

g++ sobrecarga2.cpp -o sobrecarga2
./sobrecarga2

g++ switchcase.cpp -o switchcase
./switchcase

g++ variablesyalcance1.cpp -o variablesyalcance1
./variablesyalcance1

g++ variablesyalcance2.cpp -o variablesyalcance2
./variablesyalcance2

g++ variablesyalcance3.cpp -o variablesyalcance3
./variablesyalcance3

# Para los archivos variablesyalcance4 y variablesyalcance5 que se deben compilar juntos
g++ variablesyalcance4.cpp variablesyalcance5.cpp -o variablesyalcance4_y_5
./variablesyalcance4_y_5

g++ while.cpp -o while
./while
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