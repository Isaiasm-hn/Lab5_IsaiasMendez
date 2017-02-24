#include <iostream>
#include <vector>

#ifndef FUNCION_H
#define FUNCION_H

using namespace std;

class Funcion{
	private:
		int coe;
		vector <int>* funcion; 
		Funcion* funcion_1;

	public:
		//constructor
		Funcion();
		Funcion(int);

		//Mutadores
		void setVect(int);
		vector <int>* getVect();


		//operators
		 vector <int>* operator+(Funcion*);
		 vector <int>* operator-(Funcion*);	
};
#endif