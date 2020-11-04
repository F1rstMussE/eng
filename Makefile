.PHONY: all clean test

OBJ      = build/src/en.o build/src/main.o 
LINKOBJ  = build/src/en.o build/src/main.o 
FLAG = -Wall -Werror
all : bin/eng
test : bin/test

clean: 
	rm -rf $(BIN) build/src/*.o  

bin/eng: $(OBJ)
	gcc -std=c99 $(LINKOBJ) -o bin/eng
bin/test: build/test/en.o build/test/mtest.o build/test/test.o
	gcc $(FLAG)   build/test/en.o build/test/mtest.o build/test/test.o -o bin/test
	
build/src/en.o: src/en.c  
	gcc $(FLAG)  -std=c99 -c src/en.c -o build/src/en.o 

build/src/main.o: src/main.c
	gcc $(FLAG)   -std=c99  -c src/main.c -o build/src/main.o 

-include build_test/*.d


build/test/en.o: src/en.c
	gcc $(FLAG) -I thirdparty -I src -std=c99 -c src/en.c -MMD -o build/test/en.o
build/test/mtest.o: test/mtest.c
	gcc $(FLAG)    -I thirdparty -I src -std=c99  -c test/mtest.c -MMD  -o build/test/mtest.o
build/test/test.o: test/test.c
	gcc $(FLAG)   -I thirdparty -I src -std=c99 -c test/test.c -MMD -o build/test/test.o
