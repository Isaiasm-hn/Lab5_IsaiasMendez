#include <iostream>
#include <vector>

#ifndef FUNCION_H
#define FUNCION_H

using namespace std;

class Funcion{
	private:
		int coe;
		vector <int>* funcion; 

	public:
		//constructor
		Funcion();
		Funcion(int);
		//inicializar el vector con los 6 valores 
		void initVect();
		//Mutadores
		void setVector(int);
		vector <int>* getVector();
		void setCoe(int);
		int getCoe();

		//operators
		 Funcion* operator+(Funcion*);
		 Funcion* operator-(Funcion*);	
		 Funcion* operator/(Funcion*);
		 Funcion* operator==(Funcion*);
		 Funcion* operator!=(Funcion*);
		 
};
#endif