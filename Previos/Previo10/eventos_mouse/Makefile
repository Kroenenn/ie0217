CXX = g++  # El compilador
CXXFLAGS = $(shell wx-config --cxxflags)  # Flags de compilación de wxWidgets
LDFLAGS = $(shell wx-config --libs)  # Bibliotecas de wxWidgets

# Objetos
OBJS = MyApp.o MainFrame.o

# Nombre del ejecutable
EXEC = MyApp.exe

# Regla predeterminada
all: $(EXEC)

# Cómo construir el final ejecutable
$(EXEC): $(OBJS)
	$(CXX) -o $(EXEC) $(OBJS) $(LDFLAGS)

# Cómo construir los archivos objeto
MyApp.o: MyApp.cpp MyApp.hpp
	$(CXX) -c $(CXXFLAGS) MyApp.cpp

MainFrame.o: MainFrame.cpp MainFrame.hpp
	$(CXX) -c $(CXXFLAGS) MainFrame.cpp

# Limpiar archivos compilados
clean:
	rm -f $(OBJS) $(EXEC)

# Ejecutar el programa
run: $(EXEC)
	./$(EXEC)

.PHONY: all clean run
