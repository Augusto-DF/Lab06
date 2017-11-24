INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./build
LIB_DIR = ./lib
DOC_DIR = ./doc
TEST_DIR= ./test
BIN_DIR = ./bin

CC 		= g++
CSFLAGS = -Wall -pedantic -std=c++11 -ansi -I. -I$(INC_DIR)
AR		= ar

.PHONY: all clean doxy debug doc

linux: mattheus_a.a mattheus_a.so prog_estatico prog_dinamico

windows: mattheus_a.lib mattheus_a.dll prog_estatico.exe prog_dinamico.exe

#LINUX

mattheus_a.a: $(SRC_DIR)/circulo.cpp $(SRC_DIR)/triangulo.cpp $(SRC_DIR)/quadrado.cpp $(SRC_DIR)/retangulo.cpp $(SRC_DIR)/esfera.cpp $(SRC_DIR)/piramide.cpp $(SRC_DIR)/cubo.cpp $(SRC_DIR)/paralelepipedo.cpp $(INC_DIR)/circulo.h $(INC_DIR)/triangulo.h $(INC_DIR)/quadrado.h $(INC_DIR)/retangulo.h $(INC_DIR)/esfera.h $(INC_DIR)/piramide.h $(INC_DIR)/cubo.h $(INC_DIR)/paralelepipedo.h $(INC_DIR)/mattheus_a.h
	
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/circulo.cpp -o $(OBJ_DIR)/circulo.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/triangulo.cpp -o $(OBJ_DIR)/triangulo.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/quadrado.cpp -o $(OBJ_DIR)/quadrado.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/retangulo.cpp -o $(OBJ_DIR)/retangulo.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/esfera.cpp -o $(OBJ_DIR)/esfera.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/piramide.cpp -o $(OBJ_DIR)/piramide.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/cubo.cpp -o $(OBJ_DIR)/cubo.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/paralelepipedo.cpp -o $(OBJ_DIR)/paralelepipedo.o 	
	$(AR) rcs $(LIB_DIR)/$@ $(OBJ_DIR)/circulo.o $(OBJ_DIR)/triangulo.o $(OBJ_DIR)/quadrado.o $(OBJ_DIR)/retangulo.o $(OBJ_DIR)/esfera.o $(OBJ_DIR)/piramide.o $(OBJ_DIR)/cubo.o $(OBJ_DIR)/paralelepipedo.o
	@echo "+++ [ Biblioteca estatica criada em $(LIB_DIR)/$@ ] +++"

mattheus_a.so: $(SRC_DIR)/circulo.cpp $(SRC_DIR)/triangulo.cpp $(SRC_DIR)/quadrado.cpp $(SRC_DIR)/retangulo.cpp $(SRC_DIR)/esfera.cpp $(SRC_DIR)/piramide.cpp $(SRC_DIR)/cubo.cpp $(SRC_DIR)/paralelepipedo.cpp $(INC_DIR)/circulo.h $(INC_DIR)/triangulo.h $(INC_DIR)/quadrado.h $(INC_DIR)/retangulo.h $(INC_DIR)/esfera.h $(INC_DIR)/piramide.h $(INC_DIR)/cubo.h $(INC_DIR)/paralelepipedo.h $(INC_DIR)/mattheus_a.h
	
	$(CC) $(CSFLAGS) -fPIC -c $(SRC_DIR)/circulo.cpp -o $(OBJ_DIR)/circulo.o 
	$(CC) $(CSFLAGS) -fPIC -c $(SRC_DIR)/triangulo.cpp -o $(OBJ_DIR)/triangulo.o 
	$(CC) $(CSFLAGS) -fPIC -c $(SRC_DIR)/quadrado.cpp -o $(OBJ_DIR)/quadrado.o
	$(CC) $(CSFLAGS) -fPIC -c $(SRC_DIR)/retangulo.cpp -o $(OBJ_DIR)/retangulo.o 
	$(CC) $(CSFLAGS) -fPIC -c $(SRC_DIR)/esfera.cpp -o $(OBJ_DIR)/esfera.o 
	$(CC) $(CSFLAGS) -fPIC -c $(SRC_DIR)/piramide.cpp -o $(OBJ_DIR)/piramide.o 
	$(CC) $(CSFLAGS) -fPIC -c $(SRC_DIR)/cubo.cpp -o $(OBJ_DIR)/cubo.o 
	$(CC) $(CSFLAGS) -fPIC -c $(SRC_DIR)/paralelepipedo.cpp -o $(OBJ_DIR)/paralelepipedo.o 
	$(CC) -shared -fPIC -o $(LIB_DIR)/$@ $(OBJ_DIR)/circulo.o $(OBJ_DIR)/triangulo.o $(OBJ_DIR)/quadrado.o $(OBJ_DIR)/retangulo.o $(OBJ_DIR)/esfera.o $(OBJ_DIR)/piramide.o $(OBJ_DIR)/cubo.o $(OBJ_DIR)/paralelepipedo.o
	@echo "+++ [ Biblioteca dinamica criada em $(LIB_DIR)/$@ ] +++"

prog_estatico:
	$(CC) $(CSFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/mattheus_a.a -o $(OBJ_DIR)/$@

prog_dinamico:
	$(CC) $(CSFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/mattheus_a.so -o $(OBJ_DIR)/$@

#WINDOWS

mattheus_a.lib: $(SRC_DIR)/circulo.cpp $(SRC_DIR)/triangulo.cpp $(SRC_DIR)/quadrado.cpp $(SRC_DIR)/retangulo.cpp $(SRC_DIR)/esfera.cpp $(SRC_DIR)/piramide.cpp $(SRC_DIR)/cubo.cpp $(SRC_DIR)/paralelepipedo.cpp $(INC_DIR)/circulo.h $(INC_DIR)/triangulo.h $(INC_DIR)/quadrado.h $(INC_DIR)/retangulo.h $(INC_DIR)/esfera.h $(INC_DIR)/piramide.h $(INC_DIR)/cubo.h $(INC_DIR)/paralelepipedo.h $(INC_DIR)/mattheus_a.h
	
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/circulo.cpp -o $(OBJ_DIR)/circulo.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/triangulo.cpp -o $(OBJ_DIR)/triangulo.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/quadrado.cpp -o $(OBJ_DIR)/quadrado.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/retangulo.cpp -o $(OBJ_DIR)/retangulo.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/esfera.cpp -o $(OBJ_DIR)/esfera.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/piramide.cpp -o $(OBJ_DIR)/piramide.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/cubo.cpp -o $(OBJ_DIR)/cubo.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/paralelepipedo.cpp -o $(OBJ_DIR)/paralelepipedo.o 	
	$(AR) rcs $(LIB_DIR)/$@ $(OBJ_DIR)/circulo.o $(OBJ_DIR)/triangulo.o $(OBJ_DIR)/quadrado.o $(OBJ_DIR)/retangulo.o $(OBJ_DIR)/esfera.o $(OBJ_DIR)/piramide.o $(OBJ_DIR)/cubo.o $(OBJ_DIR)/paralelepipedo.o
	@echo "+++ [ Biblioteca estatica criada em $(LIB_DIR)/$@ ] +++"

mattheus_a.dll: $(SRC_DIR)/circulo.cpp $(SRC_DIR)/triangulo.cpp $(SRC_DIR)/quadrado.cpp $(SRC_DIR)/retangulo.cpp $(SRC_DIR)/esfera.cpp $(SRC_DIR)/piramide.cpp $(SRC_DIR)/cubo.cpp $(SRC_DIR)/paralelepipedo.cpp $(INC_DIR)/circulo.h $(INC_DIR)/triangulo.h $(INC_DIR)/quadrado.h $(INC_DIR)/retangulo.h $(INC_DIR)/esfera.h $(INC_DIR)/piramide.h $(INC_DIR)/cubo.h $(INC_DIR)/paralelepipedo.h $(INC_DIR)/mattheus_a.h
	
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/circulo.cpp -o $(OBJ_DIR)/circulo.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/triangulo.cpp -o $(OBJ_DIR)/triangulo.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/quadrado.cpp -o $(OBJ_DIR)/quadrado.o
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/retangulo.cpp -o $(OBJ_DIR)/retangulo.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/esfera.cpp -o $(OBJ_DIR)/esfera.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/piramide.cpp -o $(OBJ_DIR)/piramide.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/cubo.cpp -o $(OBJ_DIR)/cubo.o 
	$(CC) $(CSFLAGS) -c $(SRC_DIR)/paralelepipedo.cpp -o $(OBJ_DIR)/paralelepipedo.o 
	$(CC) -shared -o $(LIB_DIR)/$@ $(OBJ_DIR)/circulo.o $(OBJ_DIR)/triangulo.o $(OBJ_DIR)/quadrado.o $(OBJ_DIR)/retangulo.o $(OBJ_DIR)/esfera.o $(OBJ_DIR)/piramide.o $(OBJ_DIR)/cubo.o $(OBJ_DIR)/paralelepipedo.o
	@echo "+++ [ Biblioteca dinamica criada em $(LIB_DIR)/$@ ] +++"

prog_estatico.exe:
	$(CC) $(CSFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/mattheus_a.lib -o $(OBJ_DIR)/$@

prog_dinamico.exe:
	$(CC) $(CSFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/mattheus_a.dll -o $(OBJ_DIR)/$@

doxy:
	rm -rf $(DOC_DIR)/*
	doxygen Doxyfile

clean:
	@echo "Removendo arquivos objetos e executavei/binarios..."
	@rm -rf $(OBJ_DIR)/*