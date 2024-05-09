CXX = g++
CXXFLAGS = -Wall -std=c++11
LDFLAGS = -lstdc++fs

SRC_DIR = src
BIN_DIR = bin

SOURCES = $(wildcard $(SRC_DIR)/*.cpp) # esto es para que tome todos los archivos .cpp
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%.exe) # esto es para que tome todos los archivos .exe que se generan de los .cpp
EXECUTABLE = $(BIN_DIR)/textprocessor # esto es para que tome el ejecutable final

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) # $^ es para que tome todos los archivos .exe
		$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS) 

$(BIN_DIR)/%.exe: $(SRC_DIR)/%.cpp # $< es para que tome el primer archivo .cpp que se encuentre en la carpeta
		$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	rm $(BIN_DIR)/*

#./bin/textprocessor -f data/input.txt -o data/output.txt -search "foo" -replace "bar"