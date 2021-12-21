main: main.o Motorcycle.o
	g++ -o main main.o Motorcycle.o

Motorcycle.o: Motorcycle.cpp Motorcycle.hpp

main.o: main.cpp Motorcycle.hpp

clean: 
	rm -rf main.o Motorcycle.o main