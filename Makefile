
main: main.o shapes.o
	g++ -o main main.o shapes.o

main.o: main.cpp shapes.h
	g++ -c main.cpp

shapes.o: shapes.cpp shapes.h
	g++ -c shapes.cpp

clean: shapes.o main.o
	rm -f shapes.o main.o