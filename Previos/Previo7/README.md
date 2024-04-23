# Programas del Previo 7

Clase 7: C++ - Estructuras de Datos y STL

Todos los archivos se pueden compilar y ejecutar de la siguiente forma:

Compilar:

```bash
g++ -o <nombre_archivo>.exe .\<nombre_archivo>.cpp
```

Ejecutar:

```bash
.\<nombre_archivo>.exe
```

| Función                         | Archivo(s)                 | Compilar                                  | Ejecutar                             |
| ------------------------------- | -------------------------- | ----------------------------------------- | ------------------------------------ |
| Algoritmos STL                  | `algorithmsSTL.cpp`        | `g++ -o algorithmsSTL.exe algorithmsSTL.cpp`  | `./algorithmsSTL.exe`                    |
| Contenedores - Ejemplo 1        | `containers1.cpp`          | `g++ -o containers1.exe containers1.cpp`      | `./containers1.exe`                      |
| Contenedores - Ejemplo 2        | `containers2.cpp`          | `g++ -o containers2.exe containers2.cpp`      | `./containers2.exe`                      |
| Contenedores - Ejemplo 3        | `containers3.cpp`          | `g++ -o containers3.exe containers3.cpp`      | `./containers3.exe`                      |
| Contenedores - Ejemplo 4        | `containers4.cpp`          | `g++ -o containers4.exe containers4.cpp`      | `./containers4.exe`                      |
| Iteradores                      | `iterators.cpp`            | `g++ -o iterators.exe iterators.cpp`          | `./iterators.exe`                        |
| Tips para iteradores - Ejemplo 1| `tiposIteradores1.cpp`     | `g++ -o tiposIteradores1.exe tiposIteradores1.cpp` | `./tiposIteradores1.exe`            |
| Tips para iteradores - Ejemplo 2| `tiposIteradores2.cpp`     | `g++ -o tiposIteradores2.exe tiposIteradores2.cpp` | `./tiposIteradores2.exe`            |
| Tips para iteradores - Ejemplo 3| `tiposIteradores3.cpp`     | `g++ -o tiposIteradores3.exe tiposIteradores3.cpp` | `./tiposIteradores3.exe`            |

## Descripción de Archivos

- `algorithmsSTL.cpp`: Demuestra el uso de la función `std::sort` para ordenar un vector. Incluye la ordenación con el operador menor que por defecto, una función personalizada y un objeto de una estructura como comparadores.

- `containers1.cpp`: Muestra cómo inicializar y imprimir un `std::vector` con enteros, donde se da la secuencia y la posibilidad de tener elementos duplicados.

- `containers2.cpp`: Presenta un `std::set` de enteros, para la ordenación automática y la exclusión de duplicados en la salida.

- `containers3.cpp`: Usa un `std::unordered_set` de enteros para enseñar el almacenamiento sin un orden específico y la ausencia de duplicados.

- `containers4.cpp`: Ejemplifica el uso de un `std::map` con enteros como claves y strings como valores, incluyendo el agregado de elementos, la sobrescritura de valores con la misma clave y la iteración a través del mapa.

- `iterators.cpp`: Contiene cómo crear y usar un iterador para recorrer y mostrar los elementos de un `std::vector` de strings.

- `tiposIteradores1.cpp`: Utiliza un iterador para modificar los elementos de una `std::forward_list` (lista enlazada simple), duplicando cada valor en la lista.

- `tiposIteradores2.cpp`: Demuestra el uso de un iterador con una `std::list` para recorrer y mostrar los elementos en orden directo e inverso.

- `tiposIteradores3.cpp`: Muestra cómo usar iteradores con un `std::vector` para acceder y mostrar elementos específicos tanto al principio como al final de la colección.



## Compilación // Método Makefile

Para compilar todos los programas, se ejecuta el comando "make" desde la línea de comandos en el directorio donde se encuentra el "Makefile".

```bash
make
```

## Ejecución // Método Makefile

Una vez que los programas se han compilado, se puede ejecutar cualquier ejecutable utilizando el comando ./ seguido del nombre del programa sin la extensión .cpp. Por ejemplo:

```bash
./holaMundo.exe
```

## Limpieza

Para eliminar todos los archivos ejecutables y otros archivos generados durante la compilación, se puede usar el comando make clean:

```bash
make clean
```

---
