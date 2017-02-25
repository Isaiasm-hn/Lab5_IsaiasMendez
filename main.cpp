#include <iostream>
#include "Funcion.h"
#include <vector>
using namespace std;

int main(){
	int resp;
	vector<Funcion*>* pol;
	do{
		cout<<"1)- Crear Funciones\n2)- Sumar Funciones\n3)- Restar Funciones\n4)-Multiplicar Funciones\n5)- Dividir Funciones\n";
		cout<<"6)- Sacar Factor Comun\n7)-Evaluar 2 Funciones Iguales\n8)- Evaluar Funiones Diferentes\n9)- Operador de Flujo\n";
		cout<<"10)- Salir\n11)- Ingrese Opcion: ";
		cin>>resp;
		switch (resp){
			case 1:{
				int coeficiente;
				cout<<"Ingrese Coefciente: ";
				cin>>coeficiente;
				if(coeficiente >1 && coeficiente<6){
					Funcion* temp= new Funcion(coeficiente);				
					int z=5-coeficiente;
					int x;
					for (int i =0 ; i < 5; ++i){
						if(i<z){
							temp->setVector(0);
						}else{
							
							cout<<"Ingrese Valor del Polinomio:";
							cin>>x;
							cout << "Hola";
							temp->setVector(x);
						}
						cout<<temp->getVector();
					}
					

				}else{
					cout<<endl<<"Error ingrese coeficiente entre 2 y 5!";
				}

				break;
			}
		}

	}while(resp != 11);
	return 0;
}