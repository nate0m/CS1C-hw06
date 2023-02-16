CC = g++

all: hw06

hw06: reverse.o hw06.cpp
	$(CC) hw06.cpp -o hw06 reverse.o

reverse.o: reverse.cpp reverse.h
	$(CC) -c reverse.cpp -o reverse.o

clean:
	rem hw06 *.o

tar:
	tar cf hw06.tar hw06.scr Makefile hw06.cpp reverse.cpp reverse.h
