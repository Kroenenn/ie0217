# Instrucciones de Compilación del Laboratorio7

Este documento proporciona detalles sobre el programa desarrollado para el reemplazo de patrones de texto en archivos del Laboratorio7.

- `main.cpp`: 
  - Contiene la función principal (`main`) del programa.
  - Se encarga de validar los argumentos proporcionados, instanciar y utilizar la clase `TextProcessor` para reemplazar patrones de texto en archivos de entrada con un texto específico, y escribir los resultados en archivos de salida.

- `text_processor.hpp`:
  - Contiene la definición de la clase `TextProcessor`.
  - Proporciona un método `replace` para realizar el reemplazo de patrones.

- `text_processor.cpp`:
  - Implementa la clase `TextProcessor`.
  - Define el método `replace` para realizar el reemplazo de patrones en líneas de un archivo usando expresiones regulares.

### Directorio de Archivos

Los archivos deben organizarse de la siguiente manera:

```plaintext
project_root/
│
├── Makefile
├── data/
│   └── input.txt
│   └── (a crearse: output.txt)
├── bin/
│   └── (a crearse: main.exe)
│   └── (a crearse: text_processor.exe)
│   └── (a crearse: textprocessor)
└── src/
    ├── main.cpp
    ├── text_processor.cpp
    └── text_processor.hpp
```

Se decidio dejar el output.txt para confirmar que el programa funciona.

### Compilación con Makefile

Para compilar el proyecto utilizando el `Makefile`:

```bash
make
```

Y para ejecutar el programa:

```bash
./bin/textprocessor -f data/input.txt -o data/output.txt -search "foo" -replace "bar"
```

### Limpiar la compilación

Para eliminar los archivos compilados de bin:

```bash
make clean
```

