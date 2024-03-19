CXX=g++
CXXFLAGS=-Wall -g

# Listado de todos los programas con la extensión .exe
PROGRAMS=$(addsuffix .exe,anidacionesdesentencias argumentosenfuncion argumentosenmain do_while estructuras1 estructuras2 for for_rango funcionpredefinida holaMundo holaMundo_2 holaMundo_3 return sobrecarga1 sobrecarga2 switchcase variablesyalcance1 variablesyalcance2 variablesyalcance3 variablesyalcance4_y_5 while)

.PHONY: all clean

all: $(PROGRAMS)

# Regla general para compilar programas con la extensión .exe
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

# Regla especial ya que el programa variablesyalcance4_y_5.exe depende de dos archivos
variablesyalcance4_y_5.exe: variablesyalcance4.cpp variablesyalcance5.cpp
	$(CXX) $(CXXFLAGS) -o $@ variablesyalcance4.cpp variablesyalcance5.cpp

clean:
	rm -f $(PROGRAMS)
