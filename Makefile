main: main.o box.o checkerboard.o cross.o lower.o
	g++ -o main main.o box.o checkerboard.o cross.o lower.o
main.o: main.cpp box.h checkerboard.h cross.h lower.h
	g++ -c main.cpp
box.o: box.cpp box.h
	g++ -c box.cpp
checkerboard.o: checkerboard.cpp checkerboard.h
	g++ -c checkerboard.cpp
cross.o: cross.cpp cross.h
	g++ -c cross.cpp
lower.o: lower.cpp lower.h
	g++ -c lower.cpp
clean:
	rm -f main.o box.o checkerboard.o cross.o
