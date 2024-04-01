# Ejecución para la parte prática de la Tarea1

Para compilar y ejecutar el juego de ahorcado, se corre el siguiente comando dentro de la carpeta `./src` para compilar:

```bash
g++ -o ahorcado.exe main.cpp
```

Es importante recalcar que los 4 archivos deben estar en la misma carpeta para que compile.

Para ejecutar el programa se utiliza el comando:

```bash
./ahorcado.exe
```

# Respuestas parte Teórica Tarea1 / Oscar Porras Silesky C16042

## 1. Diferencia principal entre C y C++

C++ es un lenguaje de programación que proporciona una gama más amplia de funcionalidades, incluyendo capacidades de programación orientada a objetos y sobrecarga de operadores, junto con una biblioteca estándar más extensa y un manejo de memoria más sofisticado. Por otro lado, C se caracteriza por su simplicidad y es generalmente preferido para aplicaciones de menor complejidad y alcance más reducido. [1]

## 2. Propósito y uso de comandos de Git

- `git init`: Inicializa un nuevo repositorio Git local.
- `git add`: Añade archivos al área de preparación para el próximo commit.
- `git commit`: Guarda los cambios del área de preparación con un mensaje descriptivo.
- `git push`: Envía los commits locales a un repositorio remoto.
- `git pull`: Obtiene cambios desde el repositorio remoto y actualiza el local.
- `git clone`: Copia un repositorio remoto a un nuevo directorio local.
- `git branch`: Crea, lista o elimina ramas.
- `git merge`: Combina cambios de diferentes ramas en una sola.

## 3. Git y su propósito en el desarrollo de software

Git es un sistema de control de versiones distribuido que facilita la colaboración en proyectos de software, permitiendo el seguimiento de cambios y la gestión de diferentes versiones de código fuente. [2]

## 4. Conflicto de fusión (merge conflict) en Git

Un conflicto de fusión ocurre cuando Git no puede combinar automáticamente cambios de diferentes ramas debido a ediciones contradictorias en las mismas líneas de código. Se resuelve manualmente editando los archivos para seleccionar los cambios deseados y luego haciendo un nuevo commit.

## 5. Archivo `.gitignore`

Un archivo `.gitignore` especifica los archivos o directorios que Git debe ignorar y no rastrear. Se utiliza para excluir archivos temporales, dependencias, archivos de compilación o información sensible que no se debe subir al repositorio. En nuestro caso lo hemos practicado ignorando los archivos `.exe`.

## 6. Solicitud de extracción (pull request) en GitHub

Un pull request en GitHub es una solicitud para que el dueño del repositorio original revise y si gusta mezcle una serie de commits de una rama a otra. Facilita la revisión de código y la discusión antes de integrar cambios.

## 7. Diferencias entre lenguajes compilados e interpretados

Lenguajes compilados se traducen a código máquina antes de su ejecución, lo que generalmente resulta en una ejecución más rápida (por ejemplo, C, C++). Los lenguajes interpretados se traducen y ejecutan en tiempo real por un intérprete, ofreciendo más flexibilidad y facilidad de depuración, pero a menudo con un rendimiento menor (por ejemplo, Python, JavaScript). Los lenguajes compilados son preferibles para sistemas de tiempo real o aplicaciones que requieren un alto rendimiento, mientras que los interpretados son adecuados para desarrollo web y scripts rápidos. [3]

## 8. Linker en el contexto de lenguajes compilados

Un linker es un programa que combina varios archivos objeto generados por un compilador en un único archivo ejecutable o biblioteca. Es esencial en la compilación porque resuelve referencias a variables y funciones entre los archivos objeto, y asigna espacio en memoria a los elementos estáticos. [4]

## 9. Flujo de trabajo básico en Git

El flujo de trabajo básico en Git para agregar cambios a un repositorio incluye:

1. `git pull` para actualizar la rama local.
2. Modificar o añadir archivos en el directorio de trabajo.
3. `git add` para preparar los cambios.
4. `git commit -s -m ¨Comentario¨` para guardar los cambios en la rama local.
5. `git push` para enviar los cambios a la rama remota.

## 10. Inicializar y declarar una variable

Inicializar una variable significa asignarle un valor en el momento de su creación. Declarar una variable es especificar su tipo y nombre, sin necesariamente asignarle un valor. Por ejemplo, en C++, `int g` es una declaración, mientras que `int g = 10`; es tanto una declaración como una inicialización.

## 11. Sobrecarga de funciones en C++

La sobrecarga de funciones permite que existan múltiples funciones con el mismo nombre pero con diferentes parámetros en C++. Así se puede usar el mismo nombre de función para realizar tareas parecidas con diferentes tipos o cantidades de argumentos. Por ejemplo, `void imprimir(int i)` y `void imprimir(double f)` son dos funciones sobrecargadas que imprimen diferentes tipos de datos. [5]

## 12. Punteros en C++

Un puntero es una variable que almacena la dirección de memoria de otra variable. Se utiliza para acceso y manipulación directa de memoria, operaciones con arreglos, y para asignar memoria de forma dinámica. Por ejemplo, si se tiene un entero `int g = 10;`, un puntero `int* ptr = &g;` almacena la dirección de `g`.

## 13. Branch (Rama) en Git

Un branch en Git es una versión independiente del código que diverge del código principal o de otra rama. Se utiliza para desarrollar de forma aislada. Se utiliza con comandos como `git branch` para crear o listar ramas, `git checkout` para cambiar entre ramas y `git merge` para combinar cambios de una rama a otra.

## 14. Diferencia entre bucles do-while y while

La principal diferencia es que `do-while` ejecuta el cuerpo del bucle al menos una vez antes de comprobar la condición, mientras que `while` verifica la condición antes de la primera ejecución. Por lo tanto, un bucle `do-while` es útil cuando se necesita que el cuerpo del bucle se ejecute al menos una vez.

## 15. División de código en archivos .hpp, .cpp y main.cpp en C++

Dividir el código en archivos `.hpp` (cabecera), `.cpp` (implementación) y `main.cpp` (función principal) ayuda a organizar el código y mejora la compilación incremental. Los archivos `.hpp` contienen declaraciones de funciones, estructuras y clases. Los `.cpp` contienen las definiciones e implementaciones. `main.cpp` contiene la función `main`, que es el punto de entrada del programa.

## 16. Almacenamiento de variables locales y globales en C++

Las variables locales se guardan en el stack y solo existen durante la ejecución de la función donde se declaran. Las variables globales se almacenan en una región fija de memoria y están disponibles durante toda la ejecución del programa.

## 17. Pasar parámetros por valor, referencia y puntero

Pasar por valor copia el valor al parámetro, mientras que pasar por referencia o puntero permite modificar la variable original. La referencia se utiliza para pasar objetos de manera más eficiente y con sintaxis más clara, mientras que los punteros ofrecen más flexibilidad, como pasar NULL o realizar aritmética.

## 18. Punteros y arreglos en C++

Un puntero que apunta a un arreglo en C++ se inicializa con la dirección del primer elemento. Se accede a los elementos del arreglo incrementando el puntero, como `ptr[i]` o `*(ptr + i)`, donde `ptr` es el puntero y `i` el índice del elemento. [6]

## 19. Punteros dobles en C++

Los punteros dobles (`**`) son punteros que apuntan a punteros. Se utilizan para dinámicas de memoria como la creación de matrices dinámicas, pasar referencias de punteros a funciones para su modificación, o para implementar estructuras de datos complejas como listas de listas. [6]

## 20. Directiva #ifndef en C++

La directiva `#ifndef` es parte de las directivas de preprocesador y se utiliza para evitar la inclusión múltiple del mismo archivo. Si no está definido, el código entre `#ifndef` y `#endif` se compila. Se usa comúnmente en archivos de cabecera.

## 21. Puntero this en C++

El puntero `this` en C++ es un puntero implícito que apunta al objeto actual dentro de un método de clase. Se usa para acceder a los miembros y funciones del objeto y es especialmente útil en situaciones donde hay ambigüedad, como en los setters o cuando se pasa el propio objeto como referencia. [7]

## 22. Diferencia entre un arreglo y una lista en C++

Un arreglo es una colección de elementos del mismo tipo almacenados en memoria contigua. Su tamaño es fijo una vez declarado. Una lista generalmente se refiere a la clase de lista enlazada (`std::list`) de STL, que permite inserción y borrado de elementos y su tamaño es dinámico.

## 23. Memory leak

Un memory leak o fuga de memoria ocurre cuando un programa en C++ reserva memoria dinámica usando operadores como `new` y no la libera correctamente mediante `delete`. Esto provoca que la memoria reservada no pueda ser reutilizada, lo cual puede llevar a un agotamiento de la memoria disponible y a una eventual caída del programa o del sistema. [8]


## Referencias

[1] “Diferencias entre C y C++,” MyTaskPanel. [Online]. Available: https://www.mytaskpanel.com/diferencias-entre-c-y-c/. [Accessed: 01-Apr-2024].

[2] “Qué es Git: Comandos de Git y ejemplos prácticos,” Atlassian. [Online]. Available: https://www.atlassian.com/es/git/tutorials/what-is-git. [Accessed: 01-Apr-2024].

[3] “Lenguajes Compilados vs. Interpretados,” freeCodeCamp. [Online]. Available: https://www.freecodecamp.org/espanol/news/lenguajes-compilados-vs-interpretados/. [Accessed: 01-Apr-2024].

[4] “Linker vs Compiler - Synonyms,” RedKiwi. [Online]. Available: https://redkiwiapp.com/es/english-guide/synonyms/linker-compiler. [Accessed: 01-Apr-2024].

[5] IBM, “Overloading functions in C++,” IBM Documentation. [Online]. Available: https://www.ibm.com/docs/es/i/7.5?topic=only-overloading-functions-c. [Accessed: 01-Apr-2024].

[6] "Punteros," ProgramarYa. [Online]. Available: https://www.programarya.com/Cursos/C++/Estructuras-de-Datos/Punteros. [Accessed: 01-Apr-2024].

[7] J. F. V. "Tema 23: La Directiva #ifndef," Universidad de Granada. [Online]. Available: https://ccia.ugr.es/~jfv/ed1/c++/cdrom3/TIC-CD/web/tema23/teoria_1.htm. [Accessed: 01-Apr-2024].

[8] R. A. Campos Tapia, 'Fugas de memoria (Memory Leaks) Una fuga que se puede controlar,' Medium, 29-Jun-2023. [Online]. Available: https://medium.com/@rcampos.tapia/fugas-de-memoria-memory-leaks-una-fuga-que-se-puede-controlar-be39bdf096d5. [Accessed: 01-Apr-2024].