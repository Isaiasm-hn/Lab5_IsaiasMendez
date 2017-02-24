#include <iostream>
#include <vector>

#ifndef FUNCION_H
#define FUNCION_H

using namespace std;

class Funcion{
	private:
		int coe;
		vector <int> funcion; 
	public:
		Funcion(int);
		void InitVect(int);


		//operators
		vector<int> operator+(Funcion);
		vector<int> operator-(Funcion);
		vector<int> operator/(Funcion);
		vector<int> operator*(Funcion);
		
};
#endif