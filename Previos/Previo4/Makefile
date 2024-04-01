CXX=g++
CXXFLAGS=-Wall -g

# Listado de todos los programas
PROGRAMS=$(addsuffix .exe,Animal class class2 destructor fraccion friend_class friend_func_2class friend_func herencia1 herencia2 jerarquia_herencia main main2 main3 perro protected_member Students Students2 virtual_func persona ejercicio_individual)

.PHONY: all clean

all: $(PROGRAMS)

# Regla para compilar os programas con la extensión .exe
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

# Regla especial para compilar "persona.exe"
persona.exe: persona.cpp main_persona.cpp persona.hpp 
	$(CXX) $(CXXFLAGS) -o $@ persona.cpp main_persona.cpp

# Regla especial para compilar "ejercicio_individual.exe"
ejercicio_individual.exe: class_student.cpp funciones_student.cpp main_student.cpp class_student.hpp funciones_student.hpp
	$(CXX) $(CXXFLAGS) -o $@ class_student.cpp funciones_student.cpp main_student.cpp

clean:
	rm -f $(PROGRAMS)
