#include "Funcion.h"
#include <iostream>

using namespace std;

Funcion::Funcion(int x){
	this -> coe=x;
}

void Funcion::setVector(int x){
	this->funcion->push_back(x);
}

void Funcion::initVect(){
	int z=5-coe;

	for (int i =0 ; i < 5; ++i){
		if(i<z){
			funcion->push_back(0);
		}else{
			int x;
			cout<<"Ingrese Valor del Polinomio:";
			cin>>x;
			funcion->push_back(x);
		}

	}
}

void Funcion::setCoe(int x){
	coe=x;
}
int Funcion::getCoe(){
	return coe;
}
vector<int>* Funcion::getVector(){
	return funcion;
}

Funcion* Funcion::operator+(Funcion* aux){
	int x=coe;
	int y=aux->getCoe();
	int mayor;
	if(x>y){
		mayor=x;
	}else{
		mayor=y;
	}
	Funcion* retVal=new Funcion(mayor);

	for (int i = 0; i < 5; ++i){
		retVal->setVector((funcion->at(i))+((aux->getVector())->at(i)));
	}
	return retVal;
}

Funcion* Funcion::operator-(Funcion* aux){
	int x=coe;
	int y=aux->getCoe();
	int mayor;
	if(x>y){
		mayor=x;
	}else{
		mayor=y;
	}
	Funcion* retVal=new Funcion(mayor);

	for (int i = 0; i < 5; ++i){
		retVal->setVector((funcion->at(i))-((aux->getVector())->at(i)));
	}
	return retVal;
}
Funcion* Funcion::operator==(Funcion* aux){
	bool retVal=true;
	if(coe != aux->getCoe())
	for (int i = 0; i < 6; ++i){
		if(funcion->at(i) != (aux->getVector())->at(i)){
			retVal=false;
		}
	}
	if(retVal==true){
		return aux;
	}else{
		return NULL;
	}
	 

}

Funcion* Funcion::operator !=(Funcion* aux){
	bool retVal=true;
	for (int i = 0; i < 5; ++i){	
		if(funcion->at(i) != (aux->getVector())->at(i)){
			retVal=false;
		}
	}
	if(retVal==true){
		return aux;
	}else{
		return NULL;
	}
}

