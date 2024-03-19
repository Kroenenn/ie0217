CXX=g++
CXXFLAGS=-Wall -g

# Listado de todos los programas
PROGRAMS=casting1 casting2 defines1 defines2 direccionguardado enums1 enums2 enums3 goto principal principal2 principal3 principal4 principal5 principal6 punteros1 punteros2 punteros3 punteros4 punteros5 recursividad sum_main


.PHONY: all clean

all: $(PROGRAMS)

# Regla para compilar todos los programas, excepto 'sum_main'
%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

# Regla especial para compilar 'sum_main'
sum_main: sum.cpp main.cpp sum.hpp
	$(CXX) $(CXXFLAGS) -o $@ sum.cpp main.cpp

clean:
	rm -f $(PROGRAMS) $(addsuffix .o, $(PROGRAMS))
