# Tarea5 / Oscar Porras Silesky


# Documentación en Doxygen para la Tarea5

El sitio web que hostea la pagina solicitada para ver la documentación está en el siguiente link:

https://tarea5ie0217c16042.netlify.app/

Para compilar y ejecutar la Tarea5, se corre el siguiente comando dentro de la carpeta `./Tarea5`:

```bash
make all
```

Es importante recalcar que los 3 archivos (.cpp y .hpp) deben estar en la misma carpeta para que compile.

Para solamente compilar el programa se utiliza el comando dentro de la carpeta `./Tarea5`:

```bash
make build
```

Para solamente ejecutar el programa se utiliza el comando dentro de la carpeta `./Tarea5`:

```bash
make run
```

Para limpiar los archivos ejecutables se utiliza el comando dentro de la carpeta `./Tarea5`:

```bash
make clean
```

# Ejecución para la parte práctica de la Tarea5

## Descripción del Programa

Este programa es una aplicación diseñada para validar correos electrónicos según criterios específicos establecidos en el validador de la tarea.

## Flujo Inicial
1. **Inicio del Programa:**  Al ejecutarse, el programa solicita al usuario que ingrese un correo electrónico.
2. **Entrada de Correo:** El usuario debe proporcionar un correo electrónico válido para su validación.
3. **Entrada de tipo de Extensión:** El usuario debe indicar si el correo incluye una extensión compuesta, respondiendo con 'Y' para sí o 'N' para no.

### Funciones del Menú

 - Validar Correo: La función principal del programa verifica si el correo ingresado cumple con los formatos especificados, incluyendo la validación de la parte local, el dominio, y la extensión.
 - Salir: Permite al usuario salir del programa de forma segura.


### Parte Teórica / Preguntas sobre Expresiones Regulares

1. **¿Qué es una expresión regular y cuál es su propósito en programación?**

   Una expresión regular es una secuencia de caracteres que forma un patrón de búsqueda, utilizado principalmente para la búsqueda de patrones de cadenas de texto. En programación, se utiliza para verificar si una cadena contiene un patrón especificado, para reemplazar texto dentro de una cadena, y para dividir cadenas en subcadenas basadas en patrones de coincidencia.

2. **¿Qué significan los caracteres especiales . y * en una expresión regular?**

   En las expresiones regulares, el punto `.` representa cualquier carácter individual, excepto el carácter de nueva línea. El asterisco `*`, por otro lado, indica que el elemento anterior puede aparecer cero o más veces. Por ejemplo, en la expresión regular `a*` se aceptaría '', 'a', 'aa', 'aaa', entre otros.

3. **¿Cómo se pueden agrupar subexpresiones en una expresión regular?**

   Las subexpresiones se pueden agrupar utilizando paréntesis `()`. Esto permite aplicar cuantificadores a toda la subexpresión o extraer información de partes específicas de la cadena que coincide con el patrón. Por ejemplo, `(ab)*` coincidirá con '', 'ab', 'abab', 'ababab', etc.

4. **¿Qué función cumple la barra invertida \ en una expresión regular?**

   La barra invertida `\` se utiliza como un escape para caracteres especiales en expresiones regulares. Permite que los caracteres especiales sean tratados como literales y también se utiliza para señalar secuencias especiales. Por ejemplo, `\d` representa cualquier dígito numérico.

5. **Explique cómo se pueden capturar coincidencias usando paréntesis en una expresión regular.**

   Los paréntesis no solo agrupan subexpresiones, sino que también capturan las coincidencias de esas subexpresiones para usarlas después. Por ejemplo, en la expresión regular `(a)(b)`, `a` y `b` serán capturados individualmente como grupos. Esto es útil para extraer y manipular subcadenas específicas dentro de una cadena más grande basada en un patrón.

6. **¿Cuál es la diferencia entre \d y \D en una expresión regular?**

   En las expresiones regulares, `\d` coincide con cualquier dígito numérico, equivalente a `[0-9]`. Por otro lado, `\D` coincide con cualquier carácter que no sea un dígito numérico, es decir, todo lo que no esté en el rango `[0-9]`.

7. **¿Cómo se representa una clase de caracteres en una expresión regular?**

   Una clase de caracteres se representa utilizando corchetes `[]`. Dentro de los corchetes, se pueden especificar caracteres individuales o rangos de caracteres que formarán parte de la clase. Por ejemplo, `[abc]` coincide con 'a', 'b', o 'c', y `[a-z]` coincide con cualquier letra minúscula del alfabeto.

8. **¿Cuál es el propósito del modificador $ en una expresión regular?**

   El modificador `$` en una expresión regular indica el final de una cadena o línea. Se utiliza para asegurar que un patrón debe coincidir al final de la cadena. Por ejemplo, `abc$` garantiza que la cadena termine con 'abc'.

9. **Describa cómo validar una dirección de correo electrónico usando expresiones regulares en C++.**

   Para validar una dirección de correo electrónico en C++, se puede utilizar una expresión regular que verifique los componentes usuales de un correo. Un ejemplo es:
   ```cpp
   #include <regex>
   #include <iostream>

   bool validarEmail(const std::string& email) {
       std::regex patron("^[\\w.-]+@[\\w.-]+\\.[a-zA-Z]{2,}$");
       return std::regex_match(email, patron);
   }

   int main() {
       std::string email = "ejemplo@dominio.com";
       std::cout << "El email " << (validarEmail(email) ? "es válido" : "no es válido") << std::endl;
       return 0;
   }
   ```

    El código usa la biblioteca `<regex>` para validar que el email cumpla con el patrón básico de estructura que se le puso.

10. **Discuta las implicaciones de rendimiento de utilizar expresiones regulares en aplicaciones de software. ¿Qué técnicas se pueden aplicar para optimizar una expresión regular compleja, especialmente en contextos donde el tiempo de ejecución es crítico?**

    El uso de expresiones regulares pueden llegar a afectar el rendimiento, especialmente si son complejas o se aplican a textos grandes. Algunas técnicas para optimizarlas incluyen:
    - **Evitar el backtracking excesivo:** Simplificar la expresión para reducir la necesidad de revisar varios caminos.
    - Precompilar las expresiones regulares si se van a utilizar repetidamente.
    - Usar clases de caracteres específicos en lugar de puntos u otros constructos más generales.
    - Limitar el uso de grupos capturadores cuando no sean necesarios, ya que incrementan la carga computacional.
    - Probar y medir rendimiento con diferentes variantes de la expresión para ver cuál es más eficiente.

11. **¿Qué es un Makefile y cuál es su función en un proyecto de C++?**

   Un Makefile es un archivo utilizado por la herramienta de automatización de compilación `make` para determinar cómo construir y compilar un programa. En proyectos de C++, un Makefile especifica cómo compilar y enlazar los archivos fuente y objeto para crear el ejecutable del programa. Define las dependencias entre los archivos y las instrucciones para generar cada componente.

12. **¿Cuál es la diferencia entre una regla implícita y una regla explícita en un Makefile?**

   Una regla explícita en un Makefile define explícitamente cómo se deben construir los archivos de destino a partir de los archivos fuente, incluyendo las dependencias y los comandos necesarios. Una regla implícita, por otro lado, se basa en patrones predefinidos o personalizados que permiten a `make` inferir cómo construir archivos de destino sin que se especifiquen explícitamente todos los detalles.

13. **Explique el propósito de las macros (variables) en un Makefile.**

   Las macros o variables en un Makefile sirven para simplificar la gestión del archivo y aumentar su reutilización. Permiten definir cadenas de texto o listas de archivos que se utilizan frecuentemente, de modo que pueden ser reutilizadas en varias reglas, haciendo el Makefile más organizado y fácil de actualizar.

14. **¿Qué es un objetivo (target) en un Makefile y cómo se define?**

   Un objetivo o `target` en un Makefile es un archivo que `make` necesita construir. Se define especificando el nombre del objetivo seguido de dos puntos `:`, y luego los nombres de los archivos de los cuales depende. Después de esta línea, se definen los comandos que generan el objetivo desde sus dependencias, generalmente se indentan.

15. **¿Por qué es útil dividir un proyecto de C++ en múltiples archivos fuente y cómo ayuda el uso de Makefiles en este enfoque?**

   Dividir un proyecto de C++ en múltiples archivos fuente ayuda a organizar mejor el código, facilita la mantenibilidad y permite la reutilización de código. Los Makefiles apoyan este enfoque al permitir especificar cómo cada archivo fuente se compila independientemente y cómo se enlazan para formar el ejecutable. Esto optimiza el proceso de compilación, ya que solo los archivos modificados necesitan ser recompilados, reduciendo el tiempo de desarrollo.

16. **¿Cómo se pueden definir dependencias entre los archivos fuente en un Makefile?**

   Las dependencias entre los archivos fuente en un Makefile se definen listando los archivos de los que depende un objetivo después de este en la misma línea, separados por espacios. Cada objetivo se define en una línea seguida por `:` y luego los archivos de dependencia. Esto le indica a `make` que, para construir el objetivo, primero necesita asegurarse de que todos los archivos de dependencia estén actualizados y compilados si es necesario.

17. **Explique cómo se puede compilar un proyecto en diferentes sistemas operativos usando un solo Makefile.**

   Un solo Makefile puede ser utilizado para compilar un proyecto en diferentes sistemas operativos mediante el uso de condicionales y la detección del sistema operativo en el que se está ejecutando `make`. Se pueden usar variables y comandos específicos del sistema para ajustar las reglas de compilación y enlace según el entorno. Ejemplos comunes incluyen el uso de diferentes compiladores o banderas de compilación específicas para cada sistema operativo.

18. **¿Cuál es el propósito de los comandos `clean` y `all` en un Makefile?**

   - **clean:** Este comando está diseñado para eliminar todos los archivos generados durante la compilación, como archivos objeto `.o` y ejecutables, permitiendo una reconstrucción limpia del proyecto.
   - **all:** Este objetivo suele ser el objetivo por defecto para un Makefile, y su propósito es construir todos los componentes principales del proyecto, como los ejecutables o las bibliotecas necesarias.

19. **Describa cómo se pueden pasar argumentos desde la línea de comandos a un Makefile.**

   Los argumentos pueden ser pasados desde la línea de comandos a un Makefile utilizando variables que se especifican al invocar `make`. Por ejemplo, `make CFLAGS='-g -O2'` pasaría el valor `-g -O2` a la variable `CFLAGS` dentro del Makefile, que podría usarse para controlar las opciones de compilación.

20. **Proporcione un ejemplo de una regla en un Makefile que compile un archivo fuente .cpp a un archivo objeto .o.**


   ```make
   # Regla para compilar un archivo fuente .cpp a un archivo objeto .o
   %.o: %.cpp
       g++ -c $< -o $@
   ```

En este ejemplo, `%` representa un patrón que `make` puede usar para aplicar esta regla a cualquier archivo `.cpp` para generar su correspondiente archivo `.o`. `$<` es la primera dependencia (el archivo fuente `.cpp`) y `$@` es el nombre del objetivo (el archivo objeto `.o`).


### Parte Automatización - Makefile / Preguntas sobre Makefiles

1. **¿Qué suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un makefile?**

   - `CC`: Contiene el comando del compilador para programas en C, típicamente `gcc` o `clang`.
   - `CFLAGS`: Incluye las opciones o banderas de compilación para el compilador de C que controlan el proceso de compilación, como optimización, generación de símbolos de depuración, entre otros.
   - `CXXFLAGS`: Similar a `CFLAGS`, pero se usa para especificar opciones de compilación para el compilador de C++.
   - `LDFLAGS`: Contiene las opciones para el enlazador, que pueden incluir rutas a las bibliotecas necesarias o banderas que controlan el comportamiento del enlace.

2. **¿De qué se compone una regla en un Makefile?**

   Una regla en un Makefile se compone de tres partes principales: un target (objetivo), dependencias (prerrequisitos), y una receta (comandos). El target es el archivo que `make` intenta actualizar, las dependencias son archivos de los que depende el target, y la receta son los comandos que `make` ejecuta para construir el target.

3. **Defina qué es un target y cómo se relaciona con sus prerrequisitos.**

   Un target es un archivo que el sistema de `make` necesita crear o actualizar. Se relaciona con sus prerrequisitos especificando que, para construir o actualizar el target, primero se deben verificar o reconstruir los prerrequisitos si estos han cambiado o no existen.

4. **¿Para qué se utiliza la bandera -I, -c y -o del compilador gcc?**

   - `-I`: Se utiliza para incluir directorios adicionales donde el compilador buscará archivos de cabecera durante la compilación.
   - `-c`: Instruye al compilador para que compile el archivo fuente en un archivo objeto, pero que no enlace. El resultado es un archivo `.o`.
   - `-o`: Especifica el nombre del archivo de salida que el compilador debe usar para el archivo ejecutable o de objeto resultante.

5. **¿Cómo se definen y se utilizan las variables en un Makefile? ¿Qué utilidad tienen?**

   Las variables en un Makefile se definen asignando un valor a un nombre (por ejemplo, `CC = gcc`). Se utilizan insertando el nombre de la variable precedido por `$` (por ejemplo, `$(CC)`). Las variables son útiles porque permiten reutilizar información y cambiarla fácilmente sin tener que editar múltiples líneas de comandos; facilitan la configuración y mantenimiento del Makefile.

6. **¿Qué utilidad tiene @ en un Makefile?**

   El carácter `@` en un Makefile se utiliza para suprimir la impresión del comando que se está ejecutando. Normalmente, `make` imprime cada comando antes de ejecutarlo; al preceder un comando con `@`, este se ejecutará sin ser mostrado en la consola, lo que puede ayudar a mantener la salida del proceso de compilación más limpia y menos abrumadora.

7. **¿Para qué se utiliza .PHONY en un Makefile?**

   `.PHONY` se utiliza en un Makefile para indicar que los nombres listados como targets no son archivos reales, sino nombres de reglas. Esto asegura que los targets se ejecuten siempre, independientemente de si existe un archivo con ese nombre. Es útil para targets como `clean` o `all`, donde el propósito es ejecutar comandos, no construir un archivo con esos nombres.
