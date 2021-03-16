targets = ex4.bin 
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: ex4.bin 

ex4.bin: src/ex4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

run: clean prep compile
	./dist/ex4.bin

doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

