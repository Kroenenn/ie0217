CXX = g++
CXXFLAGS = -Wall -std=c++17
LDFLAGS =  -lstdc++fs

SRC_DIR = src
BIN_DIR = src

SOURCES = $(wildcard $(SRC_DIR)/*.cpp) # Archivos fuente
EXES = $(SOURCES:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%.exe) # Ejecutables generados de los .cpp
EXECUTABLE = tarea5.x # Archivo ejecutable principal

# Phony targets para evitar conflictos con archivos reales
.PHONY: all build run clean

# Objetivo por defecto: construye y ejecuta la aplicación
all: build run

# Construye la aplicación
build: $(EXECUTABLE)

# Enlaza el programa
$(EXECUTABLE): $(EXES)
	$(CXX) $(CXXFLAGS) $(EXES) -o $@ $(LDFLAGS)

# Compila los archivos fuente en ejecutables
$(BIN_DIR)/%.exe: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpia los archivos generados
clean:
	rm -f $(BIN_DIR)/*.exe $(EXECUTABLE)

# Ejecuta la aplicación
run:
	./$(EXECUTABLE)
