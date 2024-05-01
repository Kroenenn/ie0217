CXX=g++
CXXFLAGS=-Wall -g

# Listado de todos los programas
PROGRAMS=$(addsuffix .exe, class_temp classTemplate exception_throw exception func_temp multi_exceptions noException) 

.PHONY: all clean

all: $(PROGRAMS)

# Regla para compilar os programas con la extensión .exe
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<


clean:
	rm -f $(PROGRAMS)
