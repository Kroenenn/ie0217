CXX = g++                              # El compilador a usar
CXXFLAGS = $(shell wx-config --cxxflags)  # Obtiene los flags de compilación de wxWidgets
LDFLAGS = $(shell wx-config --libs)       # Obtiene las bibliotecas necesarias de wxWidgets

# El nombre del archivo de código fuente y del ejecutable
SRC = main.cpp
EXEC = MyApp.exe

# La regla predeterminada que se ejecuta cuando escribes 'make'
all: $(EXEC)

$(EXEC):
	$(CXX) $(SRC) $(CXXFLAGS) $(LDFLAGS) -o $(EXEC)

# Regla para limpiar los archivos compilados (ejecutable)
clean:
	rm -f $(EXEC)

# Regla para ejecutar el programa
run: $(EXEC)
	./$(EXEC)

.PHONY: all clean run
