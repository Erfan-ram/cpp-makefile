# in the name of Allah

calculator: calculator.o add-mine.o devi-to.o
	g++ calculator.o add-mine.o devi-to.o -o calculator

calculator.o: calculator.cpp
	g++ -w -c calculator.cpp

add-mine.o: lib/add-mine.cpp
	g++ -w -c lib/add-mine.cpp

devi-to.o: lib/devi-to.cpp
	g++ -w -c lib/devi-to.cpp

clean: 
	rm *.o calculator
	clear

run:
	./calculator