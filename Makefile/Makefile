# in the name of Allah

calculator: calculator.o add-mine.o devi-to.o
	g++ calculator.o add-mine.o devi-to.o -o calculator

calculator.o: calculator.cpp
	g++ -c calculator.cpp

add-mine.o: lib/add-mine.cpp
	g++ -c lib/add-mine.cpp

devi-to.o: lib/devi-to.cpp
	g++ -c lib/devi-to.cpp

clean: 
	rm *.o calculator

run:
	./calculator