CXX=g++
CXXFLAGS=-Wall -g

# Listado de todos los programas
PROGRAMS=$(addsuffix .exe, pila memoria_inicial memoria_dinamica1 memoria_dinamica2 memoria_dinamica3 memoria_dinamica4 memoria_dinamica5 memoria_dinamica6 estructurasdedatos1 estructurasdedatos2 estructurasdedatos3)

.PHONY: all clean

all: $(PROGRAMS)

# Regla para compilar os programas con la extensión .exe
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<


clean:
	rm -f $(PROGRAMS)
