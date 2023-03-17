CC=g++
CFLAGS= -c -Wall -std=c++20
DIR= -o src/

all: output

output: calculator.o src/add-mine.o src/mul-dev.o
	$(CC) calculator.o src/add-mine.o src/mul-dev.o -o calculator

calculator.o: calculator.cpp
	$(CC) $(CFLAGS) calculator.cpp

src/add-mine.o: src/add-mine.cpp
	$(CC) $(CFLAGS) src/add-mine.cpp $(DIR)add-mine.o

src/mul-dev.o: src/mul-dev.cpp
	$(CC) $(CFLAGS) src/mul-dev.cpp $(DIR)mul-dev.o

# You can add your codes here
clean: 
	rm -rf *.o calculator
	clear

run:
	./calculator