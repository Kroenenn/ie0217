# Programas del Previo 8

Clase 8: C++ - C++ Templates y Excepciones

Todos los archivos se pueden compilar y ejecutar de la siguiente forma:

Compilar:

```bash
g++ -o <nombre_archivo>.exe .\<nombre_archivo>.cpp
```

## Ejecutar:

Para ejecutar los programas, usa el siguiente comando en la línea de comandos:

```bash
./<nombre_archivo>.exe
```



| Función                          | Archivo(s)                  | Compilar                                         | Ejecutar                                 |
| -------------------------------- | --------------------------- | ------------------------------------------------ | ---------------------------------------- |
| Plantilla de clase               | `class_temp.cpp`            | `g++ -o class_temp.exe class_temp.cpp`           | `./class_temp.exe`                       |
| Plantilla de clase completa      | `classTemplate.cpp`         | `g++ -o classTemplate.exe classTemplate.cpp`     | `./classTemplate.exe`                    |
| Excepción con lanzamiento        | `exception_throw.cpp`       | `g++ -o exception_throw.exe exception_throw.cpp` | `./exception_throw.exe`                  |
| Excepción básica                 | `exception.cpp`             | `g++ -o exception.exe exception.cpp`             | `./exception.exe`                        |
| Función de plantilla             | `func_temp.cpp`             | `g++ -o func_temp.exe func_temp.cpp`             | `./func_temp.exe`                        |
| Múltiples excepciones            | `multi_exceptions.cpp`      | `g++ -o multi_exceptions.exe multi_exceptions.cpp`| `./multi_exceptions.exe`                |
| Programa sin excepciones         | `noException.cpp`           | `g++ -o noException.exe noException.cpp`         | `./noException.exe`                      |

## Descripción de Archivos

- `class_temp.cpp`: Demuestra cómo definir y usar plantillas de clases en C++.
- `classTemplate.cpp`: Proporciona un ejemplo completo de una plantilla de clase con métodos y constructores.
- `exception_throw.cpp`: Ejemplo de cómo lanzar y capturar excepciones específicas.
- `exception.cpp`: Introducción al manejo de excepciones en C++.
- `func_temp.cpp`: Muestra cómo crear y usar plantillas de funciones.
- `multi_exceptions.cpp`: Ejemplo de cómo manejar múltiples tipos de excepciones en un solo bloque de `try`.
- `noException.cpp`: Programa básico de C++ que muestra una operación sin manejo de excepciones.


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
