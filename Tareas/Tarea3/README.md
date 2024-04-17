# Tarea3 / Oscar Porras Silesky


# Documentación en Doxygen para la Tarea2

El sitio web que hostea la pagina solicitada para ver la documentación está en el siguiente link:



# Ejecución para la parte práctica de la Tarea2

Para compilar y ejecutar la Tarea3, se corre el siguiente comando dentro de la carpeta `./src` para compilar:

```bash
g++ -o programa.exe main.cpp Contacto.cpp HashTable.cpp
```

Es importante recalcar que los 5 archivos (.cpp y .hpp) deben estar en la misma carpeta para que compile.

Para ejecutar el programa se utiliza el comando:

```bash
./programa.exe
```

# Respuestas a Preguntas de C++

## Parte Teórica

### 1. ¿Qué es un algoritmo y cuáles son sus características principales?
Un algoritmo es una secuencia ordenada de operaciones que permite solucionar un problema específico. Las características principales de un algoritmo son:

- **Precisión:** Las instrucciones deben ser claras y sin ambigüedad.
- **Determinismo:** Cada paso del algoritmo debe llevar a un resultado específico.
- **Finitud:** El algoritmo debe tener un fin, es decir, debe terminar en algún momento.
- **Entrada:** Debe tener cero o más entradas.
- **Salida:** Debe tener una o más salidas, que son las soluciones al problema.
- **Eficiencia:** Debe ser eficiente en términos de tiempo y espacio.

### 2. Explique la diferencia entre un algoritmo eficiente y uno ineficiente.
La diferencia principal entre un algoritmo eficiente y uno ineficiente se basa en la utilización de recursos como el tiempo y la memoria:

- **Algoritmo Eficiente:** Utiliza de manera óptima los recursos, logrando resolver el problema en menos tiempo y/o utilizando menos memoria.
- **Algoritmo Ineficiente:** Hace un uso excesivo o innecesario de los recursos, lo que resulta en tiempos de ejecución más largos y/o mayor consumo de memoria.

### 3. ¿Qué es una estructura de datos y por qué son importantes?
Una estructura de datos es una forma organizada de almacenar y organizar datos en una computadora para que puedan ser utilizados de manera eficiente. Son importantes porque:

- Facilitan el manejo de grandes cantidades de datos.
- Permiten una mejor organización y almacenamiento de los datos.
- Mejoran la eficiencia de los algoritmos a través de un acceso rápido y eficiente a los datos.

### 4. Describe las diferencias entre una estructura de datos estática y una dinámica.
La diferencia entre estructuras de datos estáticas y dinámicas se basa en la flexibilidad del tamaño de la estructura:

- **Estructura de Datos Estática:** Tiene un tamaño fijo determinado en el momento de la compilación y no puede cambiar durante la ejecución del programa. Ejemplo: arreglos en C++.
- **Estructura de Datos Dinámica:** Puede cambiar de tamaño durante la ejecución del programa. Son más flexibles y permiten una gestión de memoria eficiente. Ejemplo: listas enlazadas, árboles, y grafos.

### 5. ¿Qué es la memoria dinámica y cómo se gestiona en lenguajes de programación como C++, explique las operaciones que se pueden realizar?
La memoria dinámica es una región de la memoria que se asigna durante la ejecución del programa para variables cuyo tamaño no se conoce en tiempo de compilación o que puede cambiar. En C++, la memoria dinámica se gestiona mediante operadores como `new` y `delete`:

- **new:** Se utiliza para asignar memoria dinámicamente.
- **delete:** Libera la memoria asignada por `new`.
- **Operaciones:** Se pueden realizar operaciones como la creación de objetos, asignación de arreglos dinámicos, y liberación de recursos.

### 6. ¿Cuáles son las ventajas y desventajas de la memoria dinámica en comparación con la memoria estática?

**Ventajas:**
- **Flexibilidad:** La memoria dinámica puede expandirse o contraerse según sea necesario, lo que es ideal para estructuras de datos cuyo tamaño no se conoce desde antes o puede cambiar durante la ejecución.
- **Uso eficiente de la memoria:** Solo se utiliza la memoria que es necesaria, en el momento que es necesaria, lo que puede conducir a un uso más eficiente de la memoria disponible.

**Desventajas:**
- **Manejo y monitoreo complejo:** La memoria dinámica requiere un manejo y monitoreo explícito, con el riesgo de errores como fugas de memoria si no se libera correctamente.
- **Sobrecarga de rendimiento:** La asignación y liberación de memoria dinámica puede ser más lenta que trabajar con memoria estática y puede llevar a fragmentación de la memoria.

### 7. Explique qué es un árbol binario y cuáles son sus principales características.
Un árbol binario es una estructura de datos en la que cada nodo tiene como máximo dos hijos, conocidos como hijo izquierdo y hijo derecho. Características principales:

- **Estructura Jerárquica:** Los nodos están organizados en niveles, con un nodo raíz en la parte superior.
- **Subárbol Izquierdo y Derecho:** Cada "hijo" de un nodo puede ser la raíz de un subárbol, con su propia estructura de árbol binario.
- **Orden:** En un árbol binario de búsqueda, todos los elementos del subárbol izquierdo son menores que el nodo raíz, y todos los elementos del subárbol derecho son mayores.

### 8. ¿Qué es una cola (queue) y en qué situaciones se utiliza comúnmente?
Una cola es una estructura de datos lineal que sigue un orden particular en el que las operaciones de adición y eliminación se realizan en diferentes extremos, se menciona el término "FIFO" (First In, First Out). Se utiliza comúnmente en:

- **Sistemas de Planificación:** Para gestionar procesos o tareas en sistemas operativos.
- **Gestión de Eventos:** En controladores de eventos para procesar acciones en el orden en que ocurren.
- **Simulación de Escenarios de la Vida Real:** Como colas en bancos o tiendas.

### 9. ¿Cuál es la diferencia entre una cola (queue) y una pila (stack)?

La principal diferencia entre una cola y una pila es el orden en el que se eliminan los elementos:

- **Cola (Queue):** FIFO - El primer elemento en ser agregado es el primero en ser removido.
- **Pila (Stack):** LIFO - El último elemento en ser agregado es el primero en ser removido.

Un ejemplo donde es mejor usar queue es cuando se necesita procesar elementos en el orden en que llegaron, como en un sistema de impresión de documentos.
Un ejemplo donde es mejor usar stack es cuando se necesita procesar elementos en orden inverso al que llegaron, como en la evaluación de expresiones matemáticas.

### 10. Describa cómo funciona el algoritmo de inserción (insert) en una tabla hash.
El algoritmo de inserción en una tabla hash sigue los siguientes pasos:

1. **Hashing:** Usa una función de hash para calcular el índice basado en la clave del elemento a insertar. 
2. **Manejo de Colisiones:** Si el índice ya está ocupado (colisión), utiliza una estrategia como el encadenamiento o la exploración lineal/cuadrática para encontrar un espacio alternativo.
3. **Inserción:** Una vez que se encuentra un espacio adecuado, el elemento se inserta en la tabla.

### 11. ¿Qué es la función de dispersión (hash function) y por qué es importante en las tablas hash?
La función de dispersión, o función hash, es una función que mapea las claves de los elementos a posiciones en una tabla hash. Es importante porque:

- **Eficiencia:** Una buena función de hash distribuye las claves de manera uniforme por la tabla, reduciendo las colisiones y optimizando el rendimiento de las operaciones de búsqueda, inserción y eliminación.
- **Determinismo:** La misma clave siempre produce el mismo índice.
- **Rapidez:** Calcula el índice en un tiempo constante, independientemente del tamaño de los datos.

 En el caso de la tarea, se usa la función `funcionHash` para obtener el índice en la tabla hash. Esta función asigna un índice a cada elemento basado en su clave (por ejemplo, el nombre de un contacto).

### 12. ¿Cuál es la complejidad temporal promedio de búsqueda en una tabla hash bien implementada?
En una tabla hash bien implementada con una buena función hash, la complejidad temporal promedio para la operación de búsqueda es O(1), lo que significa que el tiempo para encontrar un elemento es constante y no depende del número de elementos en la tabla. Sin embargo, en el peor de los casos, como cuando todas las claves se asignan al mismo índice, la complejidad puede degradarse a O(n).

### 13. Explique cómo se realiza la operación de inserción (push) en una pila (stack).
La operación de inserción o `push` en una pila se realiza de la siguiente manera:

1. **Crear el Elemento:** Inicializa el nuevo elemento con el valor a insertar.
2. **Insertar en la Cima:** Coloca el nuevo elemento en la parte superior de la pila.
3. **Actualizar Referencias:** Si la pila se implementa mediante una lista enlazada, el nuevo elemento apunta al elemento que previamente estaba en la cima.

### 14. ¿Cuál es la complejidad temporal de las operaciones de apilar (push) y desapilar (pop) en una pila?
Las operaciones de apilar (`push`) y desapilar (`pop`) en una pila tienen una complejidad temporal de O(1), ya que tanto la inserción como la eliminación de elementos se realizan en la cima de la pila, lo cual es una operación de tiempo constante sin importar el tamaño de la pila.

### 15. Describa cómo funciona una lista enlazada y cuáles son sus ventajas y desventajas.
Una lista enlazada es una estructura de datos compuesta por nodos, donde cada nodo contiene un dato y una referencia al siguiente nodo de la lista. Funcionamiento:

- **Inserción y Eliminación:** Los elementos se pueden agregar o eliminar fácilmente, actualizando las referencias de los nodos adyacentes.

**Ventajas:**
- **Dinamismo:** Su tamaño puede cambiar durante la ejecución del programa.
- **Inserciones y Eliminaciones Eficientes:** No requiere reorganizar toda la estructura para añadir o quitar elementos.

**Desventajas:**
- **Acceso Secuencial:** No permite el acceso directo a los elementos como en un array, lo que puede hacer las búsquedas más lentas.
- **Uso de Memoria Adicional:** Cada elemento de la lista necesita espacio extra para almacenar la referencia al siguiente nodo.

### 16. ¿Qué es un nodo en una lista enlazada y qué contiene?
Un nodo en una lista enlazada es un elemento de la lista que contiene dos partes principales:

- **Datos:** El valor o la información que el nodo almacena.
- **Referencia (o puntero):** La dirección del siguiente nodo en la lista (en el caso de una lista enlazada simple) o las direcciones del nodo anterior y siguiente (en el caso de una lista doblemente enlazada).

### 17. ¿Cuál es la diferencia entre una lista enlazada simple y una lista enlazada doblemente enlazada?
La diferencia principal entre una lista enlazada simple y una doblemente enlazada es el número de referencias en cada nodo:

- **Lista Enlazada Simple:** Cada nodo tiene una sola referencia al siguiente nodo.
- **Lista Enlazada Doblemente Enlazada:** Cada nodo tiene dos referencias, una al siguiente nodo y otra al anterior, lo que permite recorridos en ambas direcciones.

### 18. ¿Cómo se realiza la eliminación (delete) de un nodo en una lista enlazada?
Para eliminar un nodo de una lista enlazada:

1. **Encontrar el Nodo:** Localizar el nodo que se desea eliminar, lo que generalmente requiere un recorrido desde la cabeza de la lista.
2. **Actualizar Referencias:** Cambiar la referencia del nodo anterior para que apunte al siguiente nodo del que se eliminará.
3. **Liberar Memoria:** Si se trabaja en un lenguaje con manejo y monitoreo de memoria manual como en este caso que se usa C++, liberar la memoria ocupada por el nodo eliminado.

### 19. Explique cómo funciona el algoritmo de recorrido (traversal) en un árbol binario.
El algoritmo de recorrido de un árbol binario puede ser en preorden, inorden o postorden:

- **Preorden:** Visita primero la raíz, luego recorre el subárbol izquierdo en preorden, y finalmente el subárbol derecho.
- **Inorden:** Recorre primero el subárbol izquierdo en inorden, visita la raíz, y después recorre el subárbol derecho.
- **Postorden:** Recorre el subárbol izquierdo en postorden, luego el subárbol derecho, y finalmente visita la raíz.

Un ejemplo de preorden sería: raíz -> izquierdo -> derecho, la ventaja de este recorrido es que se puede reconstruir el árbol original a partir de la secuencia de nodos visitados.
Un ejemplo de inorden sería: izquierdo -> raíz -> derecho, este recorrido es útil para obtener los nodos en orden ascendente en un árbol de búsqueda binaria.
Un ejemplo de postorden sería: izquierdo -> derecho -> raíz, este recorrido es útil para liberar la memoria de los nodos de un árbol.

### 20. ¿Cuál es la complejidad temporal del recorrido en preorden, en orden y en postorden en un árbol binario balanceado?
La complejidad temporal para los recorridos en preorden, inorden y postorden en un árbol binario balanceado es O(n), donde n es el número de nodos en el árbol. Esto se debe a que cada nodo se visita exactamente una vez en cada tipo de recorrido.

### 21. Explique la diferencia entre la notación Big O (O) y la notación Omega (Ω) en el análisis de la complejidad temporal de los algoritmos.
La notación Big O y Omega son utilizadas para describir los límites superior y inferior en la complejidad temporal de los algoritmos, respectivamente.

- **Notación Big O (O):** Es una cota que describe el límite superior de la complejidad temporal de un algoritmo. Esto significa que representa el peor caso de tiempo de ejecución o la cota superior de cuánto puede tardar un algoritmo en completarse.
- **Notación Omega (Ω):** Por otro lado, es una cota que describe el límite inferior asintótico de la complejidad temporal. Esto es, garantiza el mínimo tiempo que va a tomar un algoritmo, incluso en el mejor de los casos.

**Ejemplo de Algoritmo: Ordenamiento por inserción aplicado a la secuenciación de números de forma ascendente.**

La notación Big O (O) describe un límite superior en la complejidad de tiempo de un algoritmo, representando el caso más ineficiente, mientras que la notación Omega (Ω) proporciona un límite inferior, reflejando el caso más eficiente. Tomando como ejemplo el algoritmo de ordenamiento por inserción aplicado a la secuenciación de números de forma ascendente, tanto en su mejor como en su peor ejecución, las complejidades temporales son \(O(n^2)\) y \(\Omega(n^2)\), respectivamente. Independientemente de si la secuencia inicial está ordenada o no, el algoritmo de inserción verificará cada número, comparándolo y ubicándolo en su posición correcta a través de iteraciones anidadas, lo que resulta en una complejidad temporal que siempre es cuadrática.

