main.sex: main.o Funcion.o
	g++ main.o Funcion.o -o Run
main.o:main.cpp Funcion.h
	g++ -c main.cpp Funcion.cpp
Funcion.o: Funcion.h
	g++ -c Funcion.cpp