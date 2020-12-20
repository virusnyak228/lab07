targets = lab07.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I.src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab07.bin
lab07.bin: src/lab07.c
	$(CC) $(C_OPTS) $< -o ./dist/$@ 
run: clean prep compile
	./dist/lab07.c
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

