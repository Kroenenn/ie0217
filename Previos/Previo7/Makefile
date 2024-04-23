CXX=g++
CXXFLAGS=-Wall -g

# Listado de todos los programas
PROGRAMS=$(addsuffix .exe, algorithmsSTL iterators tiposIteradores1 tiposIteradores2 tiposIteradores3 containers1 containers2 containers3 containers4) 

.PHONY: all clean

all: $(PROGRAMS)

# Regla para compilar os programas con la extensión .exe
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<


clean:
	rm -f $(PROGRAMS)
