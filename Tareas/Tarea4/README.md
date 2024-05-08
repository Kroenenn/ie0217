# Tarea4 / Oscar Porras Silesky


# Documentación en Doxygen para la Tarea4

El sitio web que hostea la pagina solicitada para ver la documentación está en el siguiente link:

https://tarea4ie0217c16042.netlify.app

Para compilar y ejecutar la Tarea4, se corre el siguiente comando dentro de la carpeta `./src` para compilar:

```bash
g++ -o programa.exe main.cpp Matriz.cpp OperacionesBasicas.cpp ValidadorDeEntrada.cpp 
```

Es importante recalcar que los 7 archivos (.cpp y .hpp) deben estar en la misma carpeta para que compile.

Para ejecutar el programa se utiliza el comando:

```bash
./programa.exe
```


# Ejecución para la parte práctica de la Tarea4

## Descripción del Programa
Este programa es una aplicación para la gestión y manipulación de matrices. Facilita operaciones básicas como la suma, resta y multiplicación de matrices. Al iniciar, el programa solicita al usuario que ingrese el tipo de datos de las matrices (enteros, flotantes o números complejos) y las dimensiones de dos matrices que se quieren operar. Tras validar que las entradas son correctas y que las dimensiones son compatibles para las operaciones solicitadas, el programa procede a solicitar los datos específicos de las matrices o generar datos aleatorios según la elección del usuario. Una vez ingresadas o generadas las matrices, el usuario es dirigido al menú de operaciones donde puede seleccionar qué operación realizar con las matrices.

## Flujo Inicial
1. **Inicio del Programa:** Al ejecutarse, el programa muestra un mensaje de bienvenida y solicita al usuario que especifique el tipo de datos con el que desea trabajar (`int`, `float`, `complex`).
2. **Entrada de Dimensiones de Matrices:** El usuario debe ingresar las dimensiones (filas y columnas) para dos matrices. Estas dimensiones son validadas para asegurar que sean positivas y que las matrices sean compatibles para las operaciones seleccionadas.
3. **Elección de Datos de Matrices:** El usuario decide si desea ingresar manualmente los valores de las matrices o generarlos de manera aleatoria. Si la opción es ingresarlos manualmente, se procede a solicitar cada valor de las matrices; si se elige la generación aleatoria, los valores se crean utilizando una distribución uniforme.

### Funciones del Menú de Operaciones

El programa posee las siguientes opciones luego de solicitar los datos de las matrices:

- **1. Sumar Matrices:** Calcula y muestra el resultado de la suma de las dos matrices.
- **2. Restar Matrices:** Calcula y muestra el resultado de la resta de las dos matrices.
- **3. Multiplicar Matrices:** Calcula y muestra el resultado de la multiplicación de las dos matrices.
- **4. Ver Matrices:** Muestra los datos actuales de ambas matrices.
- **5. Salir:** Finaliza la ejecución del menú de operaciones.

Para compilar y ejecutar la Tarea4, se corre el siguiente comando dentro de la carpeta `./src` para compilar:

```bash
g++ -o programa.exe main.cpp Matriz.cpp OperacionesBasicas.cpp ValidadorDeEntrada.cpp 
```

Es importante recalcar que los 7 archivos (.cpp y .hpp) deben estar en la misma carpeta para que compile.

Para ejecutar el programa se utiliza el comando:

```bash
./programa.exe
```


# Respuestas a Preguntas de C++


# Respuestas Teoricas

## Templates en C++

### 1. Definición de Templates
Un template en C++ es un mecanismo que permite a los programadores definir funciones o clases que operan con tipos genéricos. Esto permite reutilizar el mismo código para diferentes tipos de datos sin repetir el código fuente. Los templates aumentan la flexibilidad y la mantenibilidad del código.

#### Ejemplo:

```cpp
template<typename T>
T suma(T a, T b) {
    return a + b;
}
```

Este ejemplo define una función template 'suma' que puede sumar dos elementos de cualquier tipo que admita la operación suma (+).

### 2. Sobrecarga de Plantillas
La sobrecarga de plantillas en C++ se refiere al proceso de definir varias funciones template con el mismo nombre pero con diferentes parámetros o firmas. Esto permite que la función adecuada se seleccione en tiempo de compilación basado en los argumentos proporcionados.

#### Ejemplo:

```cpp
template<typename T>
T maximo(T a, T b) {
    return (a > b) ? a : b;
}

template<typename T>
T maximo(T a, T b, T c) {
    return maximo(maximo(a, b), c);
}
```

En este ejemplo, la función 'maximo' está sobrecargada para funcionar con dos o tres parámetros del mismo tipo.

### 3. Plantillas de Clases
Las plantillas de clases en C++ permiten definir clases que operan con cualquier tipo de dato, similar a las funciones template. Esto es útil para la creación de clases contenedoras, como listas, pilas, colas, y otras estructuras de datos.

#### Ejemplo:

```cpp
template<typename T>
class Caja {
public:
    T contenido;
    void guardar(T x) {
        contenido = x;
    }
    T obtener() {
        return contenido;
    }
};
```

Este ejemplo muestra una clase Caja que puede almacenar cualquier tipo de dato especificado al instante de su creación.

## Excepciones en C++

### 4. Manejo de Excepciones
El manejo de excepciones en C++ se realiza a través de los bloques `try`, `catch` y `throw`. Estos bloques permiten controlar errores en tiempo de ejecución de manera estructurada y segura.

#### Ejemplo:
```cpp
try {
    // Código que podría generar un error
    if (errorDetected) {
        throw std::runtime_error("Ocurrió un error");
    }
} catch (const std::runtime_error& e) {
    std::cout << "Excepción capturada: " << e.what() << std::endl;
}
```

En este código, `throw` se utiliza para lanzar una excepción cuando se detecta un error. El bloque `catch` captura la excepción y maneja el error.

### 5. Excepciones Estándar
3 excepciones estándar son:

- `std::runtime_error`: Utilizada para errores que no se pueden detectar hasta que el programa se ejecuta.
- `std::invalid_argument`: Utilizada cuando se pasan argumentos inválidos a una función.
- `std::out_of_range`: Utilizada cuando se intenta acceder a elementos fuera del rango válido, como en el caso de los vectores.

#### Ejemplos de Uso:
- `std::runtime_error` podría ser útil cuando una función falla porque no puede abrir un archivo necesario.
- `std::invalid_argument` es útil cuando se verifica que los argumentos de una función no cumplen con los criterios esperados.
- `std::out_of_range` es aplicable cuando un usuario solicita un elemento en una posición que excede el tamaño de un contenedor de datos.

### 6. Política de Manejo de Excepciones
La política de manejo de excepciones es un conjunto definido de normas y prácticas para manejar errores en el software. Es importante porque da coherencia y hace predecible la gestión de errores, lo que mejora la robustez del código.

#### Importancia:
Implementar la política de manejo de excepciones ayuda a asegurar que:
- Los errores son capturados y tratados de manera uniforme.
- Se evita la propagación de errores no manejados, lo que podría causar comportamientos inesperados o fallas en el sistema.
- Se mejora la seguridad del software, previniendo posibles vulnerabilidades derivadas de errores no controlados.

### 7. `noexcept`
La palabra clave `noexcept` en C++ se utiliza para especificar que una función no lanza excepciones. El propósito de `noexcept` es mejorar el rendimiento al permitir optimizaciones durante la compilación, ya que el compilador sabe que no necesita incluir código para manejar excepciones en esa función.

#### Ejemplo:
```cpp
void funcionRapida() noexcept {
    // Código garantizado que no lanzará excepciones
}
```

El uso de noexcept es útil en bibliotecas donde el manejo de excepciones puede afectar el rendimiento.

### 8. Diferencias entre `std::logic_error` y `std::runtime_error`
- **`std::logic_error`**: Representa errores en la lógica del programa que podrían ser prevenidos antes de la ejecución. Por ejemplo, errores en los argumentos pasados a una función.

- **`std::runtime_error`**: Se utiliza para errores que solo pueden detectarse durante la ejecución del programa, como fallas al intentar acceder a servicios o recursos externos.

#### Ejemplo:
- Un `std::logic_error` podría lanzarse si una función recibe un argumento fuera de un rango esperado.
- Un `std::runtime_error` podría lanzarse si un programa falla al tratar de abrir un archivo que no existe.

### 9. Excepciones No Capturadas
Cuando una excepción no es capturada en C++, el comportamiento por defecto es terminar el programa. Esto sucede porque la excepción se propaga hacia arriba en la pila de llamadas hasta que alcanza la función `main`. Si `main` tampoco la captura, el programa se termina.

#### Consecuencias:
- Terminación del programa.
- Los recursos pueden no ser liberados adecuadamente.
- Información sobre el error puede ser generada.

## STL (Standard Template Library)

### 10. Contenedores STL
Cinco contenedores de STL son:

- **`std::vector`**: Proporciona acceso aleatorio rápido y es eficiente en memoria. Se usa en situaciones donde el tamaño del contenedor puede cambiar y se requiere acceso aleatorio frecuente.
- **`std::list`**: Permite inserciones y borrados rápidos en cualquier posición. Ideal para aplicaciones donde las inserciones y eliminaciones son frecuentes y no se requiere acceso aleatorio.
- **`std::map`**: Es el contenedor asociativo que almacena elementos formados por una clave y un valor. Se usa cuando se necesita acceso rápido a elementos usando una clave.
- **`std::set`**: Almacena elementos únicos siguiendo un orden específico. Útil cuando es necesario asegurar que no hay elementos duplicados y se requiere un ordenamiento automático.
- **`std::queue`**: Facilita el acceso tipo FIFO (primero en entrar, primero en salir). Esencial en situaciones que requieren procesamiento de tareas en el orden en que fueron agregadas.

### 11. Iteradores en STL
Los iteradores en la STL son objetos que permiten recorrer los elementos de un contenedor de manera secuencial sin exponer la estructura interna del contenedor. Funcionan de manera similar a los punteros y proporcionan una interfaz uniforme para acceder a los elementos de todos los tipos de contenedores STL.

#### Uso de Iteradores:
```cpp
std::vector<int> numeros = {10, 20, 30, 40};
for (auto it = numeros.begin(); it != numeros.end(); ++it) {
    std::cout << *it << " ";
}
```

Este código crea un vector de enteros y utiliza un iterador para imprimir cada elemento. Los iteradores son especialmente útiles para escribir código genérico que funciona con cualquier tipo de contenedor.


### 12. Algoritmos STL
La STL tiene algoritmos que pueden operar sobre contenedores. Esos algoritmos realizan operaciones como búsquedas, ordenamientos, transformaciones y operaciones de acumulación. Tres ejemplos son:

- **`std::sort`**: Ordena los elementos en un rango especificado. Utilizado comúnmente para ordenar arrays o contenedores como `std::vector`.
- **`std::find`**: Busca un elemento dentro de un rango dado y devuelve un iterador al primer elemento encontrado que coincide con el valor especificado, o el iterador de fin si no se encuentra.
- **`std::accumulate`**: Calcula la suma de los valores en un rango. Puede ser utilizado para sumar todos los elementos de un contenedor o para realizar otras operaciones de reducción mediante un operador binario personalizado.

### 13. Algoritmos Personalizados
Para utilizar un algoritmo personalizado con la STL, se puede escribir una función que opere con iteradores, al estilo de los algoritmos de la STL. Esto permite que el algoritmo se utilice con cualquier tipo de contenedor que soporte el tipo de iterador necesario.

#### Ejemplo:
```cpp
template<typename Iterator, typename Predicate>
Iterator buscar_si_personalizado(Iterator inicio, Iterator fin, Predicate predicado) {
    while (inicio != fin) {
        if (predicado(*inicio)) {
            return inicio;
        }
        ++inicio;
    }
    return fin;
}
```

Este algoritmo personalizado `buscar_si_personalizado` se basa en la idea de `std::find_if` permitiendo al usuario definir una condición personalizada. Puede utilizarse con cualquier contenedor que proporcione iteradores de acceso secuencial.