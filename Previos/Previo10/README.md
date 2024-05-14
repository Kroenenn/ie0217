# Programas del Previo 10

## Clase 10: C++ - Interfaces Gráficas, FLTK, WxWidgets

### //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
### Para poder utilizar WxWidgets y FLTK se tuvieron que descargar estas librerías e instalarlas. Al final del README se encuentra un tutorial con los comandos utilizados para instalar dichas librerías en Ubuntu - Linux.
### /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Para la utilización de los programas, se deben correr los comandos en la terminal desde la carpeta `./Previo10`


## Tabla de Contenidos y Comandos

| Función                          | Carpeta                  | Descripción                                             | Cambiar Directorio            | Compilar      | Ejecutar          | Limpiar          |
| -------------------------------- | ------------------------ | ------------------------------------------------------- | ----------------------------- | ------------- | ----------------- | ---------------- |
| Controles Básicos                | `controles`              | Demuestra la creación y manejo de eventos de controles. | `cd controles`                | `make`        | `make run`         | `make clean`     |
| Eventos Dinámicos                | `evento_dinamico`        | Muestra cómo configurar eventos de forma dinámica.      | `cd evento_dinamico`          | `make`        | `make run`         | `make clean`     |
| Eventos Estáticos                | `evento_estatico`        | Enseña el manejo de eventos estáticos.                  | `cd evento_estatico`          | `make`        | `make run`         | `make clean`     |
| Manejo de Eventos de Mouse       | `eventos_mouse`          | Implementa eventos relacionados con el mouse.           | `cd eventos_mouse`            | `make`        | `make run`         | `make clean`     |
| Manejo de Eventos de Teclado     | `eventos_teclado`        | Enfocado en la captura y respuesta a eventos de teclado.| `cd eventos_teclado`          | `make`        | `make run`         | `make clean`     |
| Propagación de Eventos           | `propagacion_eventos`    | Explica cómo se propagan los eventos entre controles.   | `cd propagacion_eventos`      | `make`        | `make run`         | `make clean`     |
| Ventana Básica                   | `ventana_basica`         | Crea una ventana básica con wxWidgets.                  | `cd ventana_basica`           | `make`        | `make run`         | `make clean`     |
| Pruebas Iniciales                | `pruebaInicial`          | Pruebas iniciales con wxWidgets.                        | `cd pruebaInicial`            | `make`        | `make run`         | `make clean`     |


Cada carpeta contiene archivos `MainFrame.hpp`, `MainFrame.cpp`, `MyApp.hpp`, `MyApp.cpp` que implementan la funcionalidad especificada para esa sección (menos pruebaInicial).


## Instrucciones Generales

Para compilar y ejecutar cualquier proyecto, siga estos pasos en su terminal:


### Comandos para Compilación y Ejecución

Para compilar y ejecutar cualquier proyecto, navegue a la carpeta del proyecto y utilice los siguientes comandos:

1. Cambie al directorio del proyecto:
   ```bash
   cd <nombre_de_carpeta>
   ```

2. Compile el proyecto:

    ```bash
    make
    ```
3. Ejecute el programa compilado:

    ```bash
    make run
    ```


### Limpieza

Para eliminar todos los archivos ejecutables y otros archivos generados durante la compilación, se puede usar el comando make clean:

```bash
cd <carpeta_del_proyecto>
```
```bash
make clean
```
---

## Árbol de directorios

```plaintext
Previo10/
│
├── controles/
│   ├── MainFrame.hpp
│   ├── MainFrame.cpp
│   ├── MyApp.hpp
│   ├── MyApp.cpp
│   └── Makefile
│
├── evento_dinamico/
│   ├── MainFrame.hpp
│   ├── MainFrame.cpp
│   ├── MyApp.hpp
│   ├── MyApp.cpp
│   └── Makefile
│
├── evento_estatico/
│   ├── MainFrame.hpp
│   ├── MainFrame.cpp
│   ├── MyApp.hpp
│   ├── MyApp.cpp
│   └── Makefile
│
├── eventos_mouse/
│   ├── MainFrame.hpp
│   ├── MainFrame.cpp
│   ├── MyApp.hpp
│   ├── MyApp.cpp
│   └── Makefile
│
├── eventos_teclado/
│   ├── MainFrame.hpp
│   ├── MainFrame.cpp
│   ├── MyApp.hpp
│   ├── MyApp.cpp
│   └── Makefile
│
├── propagacion_eventos/
│   ├── MainFrame.hpp
│   ├── MainFrame.cpp
│   ├── MyApp.hpp
│   ├── MyApp.cpp
│   └── Makefile
│
├── pruebaInicial/
│   ├── main.cpp
│   └── Makefile
│
└── ventana_basica/
    ├── MainFrame.hpp
    ├── MainFrame.cpp
    ├── MyApp.hpp
    ├── MyApp.cpp
    └── Makefile
```

---

## Tutorial de Instalación de wxWidgets y FLTK

### wxWidgets

Yo escogí hacer las carpetas de las dos librerias en Desktop, usando el comando `cd ~/Desktop`.

1. Preparación y descarga:

    - Actualizar los paquetes e instalar dependencias necesarias:
        ```bash
        sudo apt-get update
        ```
        ```bash
        sudo apt-get install libgtk-3-dev build-essential libglu1-mesa-dev freeglut3-dev mesa-common-dev pkg-config zlib1g-dev libpng-dev libjpeg-dev libtiff-dev libexpat1-dev
        ```

    - Descargar la última versión de wxWidgets:

        ```bash
        wget https://github.com/wxWidgets/wxWidgets/releases/download/v3.2.4/wxWidgets-3.2.4.tar.bz2
        ```
        ```bash
        tar -xjf wxWidgets-3.2.4.tar.bz2
        ```

2. Compilación e instalación:

    - Configurar el ambiente de compilación y compilar:

        ```bash
        cd wxWidgets-3.2.4
        ```
        ```bash
        mkdir gtk-build
        ```
        ```bash
        cd gtk-build
        ```
        ```bash
        ../configure --with-gtk
        ```
        ```bash
        make
        ```
        ```bash
        sudo make install
        ```
        ```bash
        sudo ldconfig
        ```
3. Configuración del entorno:

    - Asegurar que la biblioteca esté en el `LD_LIBRARY_PATH`:

        ```bash
        nano ~/.bashrc
        ```

        Esto es lo que puse en el BASH al final, se cierra con CTRL + O y CTRL + X: 

        ```bash
        if [[ ":$LD_LIBRARY_PATH:" != *":/usr/local/lib:"* ]]; then
            export LD_LIBRARY_PATH="/usr/local/lib${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}"
        fi
        ```
        ```bash
        source ~/.bashrc
        ```
        ```bash
        echo $LD_LIBRARY_PATH
        ```

        Al correr el comando `echo`, debe salir en la consola `/usr/local/lib`.

4. Configuración de wxWidgets en Visual Studio Code:

    - Abrir Visual Studio Code y acceder a la configuración de C++:

        ```bash
        Ctrl+Shift+P -> "C/Cpp: Edit Configurations (UI)"
        ```

    - Añadir los caminos de inclusión necesarios en la sección de Include Path:

        ```bash
        /usr/local/lib/wx/include/gtk3-unicode-3.2
         ```
        ```bash
        /usr/local/include/wx-3.2
        ```

### FLTK

Se debe devolver al escritorio con `cd ~/Desktop`.

1. Preparación y descarga:

    - Actualizar los paquetes:
        ```bash
        sudo apt-get update
        ```

    - Descargar la última versión de FLTK y descomprimirlo:

        ```bash
        wget http://fltk.org/pub/fltk/1.3.9/fltk-1.3.9-source.tar.gz
        ```
        ```bash
        tar -xzvf fltk-1.3.9-source.tar.gz
        ```

2. Compilación e instalación:

    - Configurar el ambiente de compilación y compilar:

        ```bash
        cd fltk-1.3.9
        ```
        ```bash
        mkdir build
        ```
        ```bash
        cd build
        ```
        ```bash
        sudo apt install cmake
        ```
        ```bash
        cmake ..
        ```
        ```bash
        make
        ```
        ```bash
        sudo make install
        ```
        ```bash
        sudo ldconfig
        ```
---

