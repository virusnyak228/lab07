targets = lab11.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I.src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab11.bin
lab11.bin: src/lab11.c
	$(CC) $(C_OPTS) $< -o ./dist/$@ 
run: clean prep compile
	./dist/lab11.c
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

