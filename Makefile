CC=g++
CFLAGS= -c -Wall -std=c++20

all: output

output: main.o module.o
	$(CC) main.o module.o -o output

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

module.o: module.cpp
	$(CC) $(CFLAGS) module.cpp

# You can add your codes here
clean: 
	rm -rf *.o calculator
	clear

run:
	./calculator