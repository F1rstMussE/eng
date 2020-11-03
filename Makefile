.PHONY: all clean

OBJ      = build/src/en.o build/src/main.o 
LINKOBJ  = build/src/en.o build/src/main.o 
FLAG = -Wall -Werror
all : bin/eng



clean: 
	rm -rf $(BIN) build/src/*.o  

bin/eng: $(OBJ)
	gcc -std=c99 $(LINKOBJ) -o bin/eng

build/src/en.o: src/en.c  
	gcc $(FLAG)  -std=c99 -c src/en.c -o build/src/en.o 

build/src/main.o: src/main.c
	gcc $(FLAG)   -std=c99  -c src/main.c -o build/src/main.o 