# Tarea2 / Oscar Porras Silesky


# Documentación en Doxygen para la Tarea2

El sitio web que hostea la pagina solicitada para ver la documentación está en el siguiente link:

https://main--tarea2ie017c16042.netlify.app

# Ejecución para la parte práctica de la Tarea2

Para compilar y ejecutar la Tarea2, se corre el siguiente comando dentro de la carpeta `./src` para compilar:

```bash
g++ -o programa.exe main.cpp Planeta.cpp Continente.cpp Pais.cpp PaisEnDesarrollo.cpp PaisPrimerMundo.cpp Utilidad.cpp 
```

Es importante recalcar que los 7 archivos deben estar en la misma carpeta para que compile.

Para ejecutar el programa se utiliza el comando:

```bash
./programa.exe
```

# Preguntas Sobre Programación Orientada a Objetos (OOP) en C++

## 1. ¿Qué es la programación orientada a objetos y cuáles son sus principales principios?
La programación orientada a objetos es una manera de programar que imita cómo las personas ven el mundo real, usando objetos que tienen datos y acciones. Los objetos se crean a partir de plantillas llamadas clases. Los principales principios son:

- **Abstracción:** Se refiere a representar características esenciales sin incluir detalles complejos.
- **Encapsulamiento:** Es la idea de esconder los detalles internos de cómo un objeto funciona y mostrar solo lo que es necesario para el resto del programa.
- **Herencia:** Es la capacidad de crear una nueva clase basada en una existente.
- **Polimorfismo:** Es cuando se puede interactuar con diferentes clases como si fueran del mismo tipo.

## 2. Explique el concepto de ocultamiento de datos y cómo se logra en C++.
El ocultamiento de datos es una parte del encapsulamiento que protege la información de ser accedida directamente. En C++, se consigue con especificadores de acceso:

- `private`: Solo se puede acceder dentro de la misma clase.
- `protected`: Se puede acceder dentro de la clase y sus herederas.
- `public`: Se puede acceder desde cualquier parte.

Al usar `private`, se mantiene cierta información fuera del alcance de código no autorizado.

## 3. ¿Cuál es la diferencia entre una clase y un objeto en C++?
Una clase es como un plano que define cómo algo debe ser estructurado. Un objeto es una creación concreta basada en ese plano. En resumen, una clase es la definición, el objeto es la instancia real que se utiliza.

## 4. ¿Qué es el polimorfismo y cómo se logra en C++?
El polimorfismo permite tratar a objetos de diferentes clases como si fueran de una clase común. Se logra en C++ usando:

- **Sobrecarga de métodos:** Donde diferentes funciones tienen el mismo nombre pero diferentes parámetros.
- **Polimorfismo de tiempo de ejecución:** Donde una clase base apunta a una clase derivada y se usa la palabra clave `virtual` para permitir que una función se redefina en una clase derivada.

## 5. ¿Qué significa el término encapsulamiento en el contexto de la OOP?
Encapsulamiento en programación orientada a objetos significa juntar los datos y los métodos que los modifican en un solo lugar, llamado clase, y limitar el acceso a esta información solo a través de métodos específicos. Esto ayuda a evitar cambios accidentales y hace que el código sea más seguro y fácil de mantener.

## 6. ¿Cuál es el propósito del constructor y el destructor en una clase de C++?
El constructor en una clase de C++ es una función que se llama automáticamente cuando se crea un objeto. Su propósito es inicializar el objeto, estableciendo valores iniciales para los miembros de datos o realizando cualquier configuración inicial necesaria.

El destructor es otra función que se llama automáticamente cuando un objeto ya no es necesario, es decir, cuando se destruye. Su trabajo es limpiar y liberar recursos que el objeto pudo haber adquirido durante su vida útil, como la memoria dinámica o los archivos abiertos.

## 7. Investigue cómo se define una clase abstracta en C++ y cuál es su función.
Una clase abstracta en C++ se define incluyendo al menos un método puramente virtual. Un método virtual puro se declara asignándole un valor de 0 en la declaración de la clase. Estas clases no se pueden instanciar directamente, y su función es servir como clases base para otras clases que hereden de ellas. Las clases derivadas deben implementar los métodos virtuales puros para poder crear objetos de ellas.

Un ejemplo de esto es la clase abstracta `Pais` en el código proporcionado. La clase `Pais` tiene un método virtual puro `imprimirInformacion`, lo que la convierte en una clase abstracta. Las clases derivadas de `Pais` deben implementar este método para poder instanciar objetos de ellas. 

## 8. Investigue qué es un constructor de copia y para qué se utiliza en C++.
Un constructor de copia en C++ es un constructor que crea un nuevo objeto como una copia de un objeto existente. Se utiliza para:

- Inicializar un objeto con los valores de otro objeto.
- Copiar un objeto para pasar como argumento a una función.
- Retornar un objeto por valor de una función.
Es esencial para el manejo correcto de la copia de objetos, especialmente cuando la gestión de recursos como la memoria dinámica está involucrada.

## 9. Investigue qué es el polimorfismo estático y dinámico en C++ y cómo se diferencian.
El polimorfismo estático se refiere a la sobrecarga de funciones y operadores en C++, donde la decisión sobre qué función se debe llamar se toma en tiempo de compilación.

El polimorfismo dinámico se logra mediante funciones virtuales y herencia, permitiendo que el código decida qué función se debe llamar en tiempo de ejecución basándose en el tipo de objeto.

La principal diferencia es que el polimorfismo estático se resuelve en tiempo de compilación y el dinámico en tiempo de ejecución.

## 10. ¿Qué son las clases anidadas y cuál es su utilidad en C++?

Las clases anidadas en C++ son clases definidas dentro del ámbito de otra clase. Son útiles cuando se quiere asociar una clase con otra de manera que la clase anidada ayude en el funcionamiento de la clase contenedora. Esto ayuda a organizar el código y a mantener juntos elementos que están relacionados entre sí, y proporciona control de acceso a la clase anidada que de otra manera no sería posible.

## 11. En el contexto de la programación orientada a objetos en C++, ¿cómo se pueden utilizar los punteros para trabajar con objetos y clases?
En C++, se pueden usar punteros para referenciar objetos y clases. Esto permite la creación de objetos dinámicos, cuya memoria se asigna en tiempo de ejecución usando el operador `new`. Los punteros a objetos son útiles para:

- Acceder a los miembros de un objeto dinámico.
- Pasar objetos a funciones sin copiar el objeto completo.
- Crear arreglos de objetos.
- Facilitar el polimorfismo dinámico mediante el uso de punteros a clases base para referenciar objetos de clases derivadas.

## 12. ¿Qué es una función prototipo?
Una función prototipo en C++ es una declaración que informa al compilador sobre el nombre de la función, su tipo de retorno y parámetros antes de su uso real en el código. Sirve para:

- Permitir la llamada a funciones antes de que estén completamente definidas.
- Facilitar la organización del código en diferentes archivos.
- Ayudar en la creación de interfaces que otras partes del programa o programas pueden utilizar sin necesidad de conocer los detalles de implementación.

## 13. Explique los diferentes tipos de miembros que existen en la OOP.
En la OOP, hay principalmente dos tipos de miembros dentro de una clase:

- **Miembros de datos**: Variables dentro de una clase que mantienen información sobre el estado del objeto.
- **Miembros de función**: Funciones que definen el comportamiento de los objetos de una clase. Pueden ser normales, estáticos, constantes, o virtuales, entre otros.

Estos miembros pueden tener diferentes niveles de acceso: privado, protegido o público, lo que determina desde dónde se pueden acceder.

## 14. ¿Qué es un memory leak?
Un memory leak, o fuga de memoria, ocurre cuando una aplicación en C++ asigna memoria dinámica y no la libera adecuadamente después de usarla. Esto lleva a que la memoria no pueda ser reutilizada por otras partes del programa o por otros programas, pudiendo eventualmente agotar la memoria disponible y causar que la aplicación o incluso el sistema operativo fallen o se vuelvan lentos.

## 15. ¿Qué es y cuál es la importancia de la Herencia multinivel, múltiple y jerárquica de C++?
La herencia en C++ puede ser de varios tipos:

- **Herencia multinivel**: Ocurre cuando una clase deriva de otra que ya es derivada, formando una cadena de herencias.
- **Herencia múltiple**: Sucede cuando una clase deriva de más de una clase base, combinando los atributos y comportamientos de todas las clases base.
- **Herencia jerárquica**: Se da cuando múltiples clases derivan de una única clase base.

La importancia de estos tipos de herencia es que permiten reutilizar código y crear relaciones complejas entre clases.

## 16. ¿Qué es la composición y cómo se implementa en C++?
La composición es una forma de relación entre objetos donde un objeto "contiene" otros objetos como parte de su estado. En C++ se implementa usando instancias de otras clases como miembros de datos dentro de una clase. Por ejemplo, si una clase `Carro` tiene un miembro de datos que es una instancia de la clase `Motor`, se tiene composición. La composición es útil porque garantiza el principio de "tiene-un" y la gestión del ciclo de vida de los objetos contenidos.

## 17. ¿Qué es la sobrescritura de funciones en C++ y cuándo es bueno usarla?
La sobrescritura de funciones, ocurre cuando una clase derivada tiene una función con el mismo nombre y parámetros que una función en su clase base, pero con una implementación diferente. Es útil usarla para personalizar o extender el comportamiento de las funciones heredadas en las clases derivadas, permitiendo así el polimorfismo dinámico.

## 18. ¿Qué es un método y un atributo y cuál es la diferencia entre ellos?
Un método es una función definida dentro de una clase que opera en los datos de esa clase. Un atributo, es una variable contenida dentro de una clase que representa una característica o estado del objeto. La diferencia principal es que un método realiza acciones y puede modificar o utilizar atributos, mientras que un atributo solo almacena datos.

## 19. ¿Qué es el constructor y el destructor en una clase?
El constructor de una clase en C++ es una función especial que se llama automáticamente cuando se crea un objeto de esa clase. Su propósito es inicializar los atributos del objeto con valores específicos. El destructor es otra función especial que se llama automáticamente cuando un objeto se destruye, su propósito es liberar los recursos que el objeto pudo haber adquirido y realizar tareas de limpieza necesarias.

## 20. ¿Qué es la sobrecarga de operadores en C++ y cómo se utiliza?
La sobrecarga de operadores en C++ permite que los operadores estándar como `+`, `-`, `*`, y `/` sean redefinidos para trabajar con clases personalizadas. Esto se logra mediante la definición de una función especial en la clase que especifica la nueva operación para el operador. Esto es útil para realizar operaciones de forma intuitiva con objetos de clases personalizadas, por ejemplo, sumando dos objetos de una clase `Punto` con el operador `+`.